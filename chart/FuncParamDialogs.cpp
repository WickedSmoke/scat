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

static DynParamsDialog*
_paramDialogSMA(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("SMA"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogEMA(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("EMA"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogMACD(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("MACD"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("MACD color"), QStringLiteral("MACD color"),
                DPT_COLOR, qRgb(255,255,0));
  dlg->addParam(QStringLiteral("Signal color"), QStringLiteral("Signal color"),
                DPT_COLOR, qRgb(255,0,0));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogMFI(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("MFI"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, 80);
  dlg->addParam(QStringLiteral("Medium level"), QStringLiteral("Medium level"),
                DPT_INT, 50);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, 20);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogROC(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("ROC"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 10);
  dlg->addParam(QStringLiteral("Level"), QStringLiteral("Level"),
                DPT_INT, 0);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogRSI(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("RSI"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, 70);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, 30);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogSlowStoch(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("Slow Stoch"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 5);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, 80);
  dlg->addParam(QStringLiteral("Medium level"), QStringLiteral("Medium level"),
                DPT_INT, 50);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, 20);
  dlg->addParam(QStringLiteral("%K color"), QStringLiteral("%K color"),
                DPT_COLOR, qRgb(0,255,255));
  dlg->addParam(QStringLiteral("%D color"), QStringLiteral("%D color"),
                DPT_COLOR, qRgb(255,255,0));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogFastStoch(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("Fast Stoch"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 5);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, 80);
  dlg->addParam(QStringLiteral("Medium level"), QStringLiteral("Medium level"),
                DPT_INT, 50);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, 20);
  dlg->addParam(QStringLiteral("%K color"), QStringLiteral("%K color"),
                DPT_COLOR, qRgb(0,255,255));
  dlg->addParam(QStringLiteral("%D color"), QStringLiteral("%D color"),
                DPT_COLOR, qRgb(255,255,0));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogW_percent_R(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("W%R"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, -20);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, -80);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogBollingerBands(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("Bollinger Bands"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 20);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(255,0,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogParabolicSAR(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("Parabolic SAR"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogADX(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("ADX"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 13);
  dlg->addParam(QStringLiteral("Weak"), QStringLiteral("Weak"),
                DPT_INT, 25);
  dlg->addParam(QStringLiteral("Strong"), QStringLiteral("Strong"),
                DPT_INT, 50);
  dlg->addParam(QStringLiteral("Very strong"), QStringLiteral("Very strong"),
                DPT_INT, 75);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogAroon(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("Aroon"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 25);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, 70);
  dlg->addParam(QStringLiteral("Medium level"), QStringLiteral("Medium level"),
                DPT_INT, 50);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, 30);
  dlg->addParam(QStringLiteral("Up color"), QStringLiteral("Up color"),
                DPT_COLOR, qRgb(0,255,0));
  dlg->addParam(QStringLiteral("Down color"), QStringLiteral("Down color"),
                DPT_COLOR, qRgb(255,0,0));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogCCI(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("CCI"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 20);
  dlg->addParam(QStringLiteral("High level"), QStringLiteral("High level"),
                DPT_INT, 100);
  dlg->addParam(QStringLiteral("Low level"), QStringLiteral("Low level"),
                DPT_INT, -100);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogSTDDEV(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("STDDEV"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 10);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogMomentum(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("Momentum"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 12);
  dlg->addParam(QStringLiteral("Level"), QStringLiteral("Level"),
                DPT_INT, 0);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogDMI(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("DMI"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 13);
  dlg->addParam(QStringLiteral("Weak"), QStringLiteral("Weak"),
                DPT_INT, 25);
  dlg->addParam(QStringLiteral("Strong"), QStringLiteral("Strong"),
                DPT_INT, 50);
  dlg->addParam(QStringLiteral("Very strong"), QStringLiteral("Very strong"),
                DPT_INT, 75);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

static DynParamsDialog*
_paramDialogATR(const ButtonInitData& bd)
{
  QPushButton* btn = _addButton(bd, QStringLiteral("ATR"));
  bd.parent->connect(btn, SIGNAL(clicked()), SLOT(button_clicked()));
  DynParamsDialog* dlg = new DynParamsDialog(QStringLiteral(""), btn);
  dlg->addParam(QStringLiteral("Period"), QStringLiteral("Period"),
                DPT_INT, 14);
  dlg->addParam(QStringLiteral("Color"), QStringLiteral("Color"),
                DPT_COLOR, qRgb(0,255,255));
  _connectPDialog(dlg, bd.parent);
  return dlg;
}

