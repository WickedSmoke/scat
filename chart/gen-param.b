#!/usr/bin/boron -s
; DynParamsDialog Code Generator.

print-only: false
forall args [
    switch first args [
        "-p" [print-only: true]
    ]
]

buf: read/text %qtachart_functions.cpp
parse buf [thru "-ChartParam-" data: to "*/" :data]
data: to-block data
;probe data

out: make string! 16000
emit: func [data] [
    if block? data [data: rejoin data]
    append out data
]
trunc: func [n] [clear skip tail out n]

generate: func [gen file] [
    clear out
    gen/prelude
    parse data [some[
        tok: set-word! some [word!/string! skip] :tok (
            gen/header to-string to-word first ++ tok
            foreach [label value] tok [gen/param label value]
            gen/footer
        )
    ]]
    gen/fin
    either print-only [
        print out
    ][
        write file out
    ]
]

label-filter: ['-' ' '  "_percent_" '%']

dialogs: context [
    prelude: does [
        emit {{
            // Code generated by gen-param.b from qtachart_functions.cpp

            static void _connectPDialog(DynParamsDialog* dlg,QObject* dest)
            {
              dlg->setObjectName(QStringLiteral("ParamDialog"));
              dlg->setColorDialog(new appColorDialog);

              dest->connect(dlg->buttonBox, SIGNAL(accepted()),
                            SLOT(function_accepted()));
              dest->connect(dlg->buttonBox, SIGNAL(rejected()),
                            SLOT(function_rejected()));
            }

        }}
    ]
    fin: none
    header: func [name] [
        str:   construct name label-filter
        cname: construct name ['-' none]
        emit construct {{
          static DynParamsDialog*
          _paramDialog$CNAME(const ButtonInitData& bd)
          {
            QPushButton* btn = _addButton(bd, QStringLiteral("$STR"));
            bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
            DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
        }}
        ["$CNAME" cname  "$STR" str]
    ]
    footer: does [
        emit "  _connectPDialog(dlg, bd.parent);^/  return dlg;^/}^/^/"
    ]
    param: func [label value] [
        switch type? value [
            int!    [dt: "DPT_INT"]
            double! [dt: "DPT_REAL"]
            coord!  [dt: "DPT_COLOR" value: rejoin ["qRgb(" value ')']]
        ]
        label: replace/all to-string label '-' ' '
        emit [
            {  dlg->addParam(QStringLiteral("} label {"), QStringLiteral("}
            label {"),^/                } dt ", " value {);^/}
        ]
    ]
]

functions-add: context [
    prelude: does [
        init: true
        emit {{
            // Code generated by gen-param.b from qtachart_functions.cpp
            // This is the body of QTACFunctions::addIndicator()

        }}
    ]
    fin: none
    header: func [name /extern init] [
        str:   construct name label-filter
        cname: construct name ['-' none]
        either init [
            init: false
            emit "  if "
        ][
            emit "  else if "
        ]
        emit [
            {(fname == QLatin1String ("} str {"))^/}
            "  {^/    obj = referencechart->addStudy" cname "( fname, "
        ]
    ]
    footer: does [
        trunc -2   ; Remove last param ", "
        emit " );^/  }^/"
    ]
    param: func [label value] [
        label: replace/all to-string label '-' ' '
        if int? value [
            emit "(qint32) "
        ]
        emit [{PARAM("} label {"), }]
    ]
    init: true
]

params: context [
    prelude: does [
        emit {{
            // Code generated by gen-param.b from qtachart_functions.cpp

            static void _objectParameters(QTACObject* obj, ParamVector& pvec)
            {
              QString name( obj->objectName() );
        }}
    ]
    fin: does [
        emit "}^/"
    ]
    header: func [name] [
        str:  construct name label-filter
        emit [
            {  if( name == QStringLiteral("} str {") )^/  ^{^/}
        ]
    ]
    footer: does [
        emit "    return;^/  }^/"
    ]
    param: func [label value] [
        switch type? value [
            int!    [dt: "DPT_INT"]
            double! [dt: "DPT_REAL"]
            coord!  [dt: "DPT_COLOR" value: rejoin ["qRgb(" value ')']]
        ]
        label: replace/all to-string label '-' ' '
        emit [
            {    pvec.addParameter(QStringLiteral("} label {"),^/}
            {                 } dt
            {, obj->paramValue(QStringLiteral("} label {")) );^/}
        ]
    ]
]

studies-menu: context [
    prelude: does [
        count: 0
        emit {{
            // Code generated by gen-param.b from qtachart_functions.cpp

            void MainWindow::addStudyItems()
            {
                QAction* act;
        }}
    ]
    fin: does [
        emit "}^/"
    ]
    header: func [name] [
        str:  construct name label-filter
        emit [
            {    act = _studies->addAction( "} str
            {", this, SLOT(addStudy()) );^/    act->setData( } ++ count { );^/}
        ]
    ]
    footer: none
    param: none
    count: 0
]

studies-add: context [
    prelude: does [
        count: 0
        emit {{
            // Code generated by gen-param.b from qtachart_functions.cpp
            // This is the switch in MainWindow::addStudy().

        }}
    ]
    fin: none
    header: func [name] [
        str:   construct name label-filter
        cname: construct name ['-' none]
        emit [
            slice indent -4 "case " ++ count ":^/"
            indent "chart->addStudy" cname {( "} str {", }
        ]
    ]
    footer: does [
        trunc -2    ; Remove last param ", "
        emit [
            " );^/" indent "chart->goBack();^/" indent "break;^/"
        ]
    ]
    param: func [label value] [
        if coord? value [
            value: rejoin ["qRgb(" value ')']
        ]
        emit [value ", "]
    ]
    count: 0
    indent: "            "
]

generate dialogs %gen_funcParamDialogs.cpp
generate functions-add %gen_funcAddStudy.cpp
generate params  %gen_objectParameters.cpp
generate studies-menu %../gui/MainWindow_studies.cpp
generate studies-add  %../gui/MainWindow_addStudy.cpp
