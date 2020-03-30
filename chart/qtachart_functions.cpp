﻿/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 */
 
// Full implementation of QTACFunctions
#include "common.h"
#include "qtachart_core.h"
#include "ui_qtacfunctions.h"
#include "qtachart_functions.h"
#ifdef GUI_DESKTOP
#include "ParameterDialog.h"
#else
#include "dynparamsdialog.h"
#endif

// constructor
QTACFunctions::QTACFunctions (QWidget * parent):
  QWidget (parent), ui (new Ui::QTACFunctions)
{
  ui->setupUi (this);

  button_width = 200;
  button_height = 40;

  layout = new QGridLayout(this);
  this->setLayout(layout);

  if (parent != NULL)
    setParent (parent);
}

static bool
ButtonCmp(const QPushButton *b1, const QPushButton *b2)
{
  return b1->text() < b2->text();
}

struct ButtonInitData
{
  QWidget* parent;
  QList< QPushButton *> *list;
  QSize size;
};

// add a button (used in FuncParamDialogs.cpp)
static QPushButton *
_addButton (const ButtonInitData& bd, QString text)
{
  QFont fnt;
  QPushButton *btn;
  QString stylesheet;

  stylesheet =
    QStringLiteral ("background: transparent; border: 1px solid transparent;border-color: darkgray;");

  btn = new QPushButton (text, bd.parent);
  btn->setFixedSize (bd.size);
  fnt = btn->font ();
  fnt.setPixelSize (16);
  fnt.setBold (true);
  btn->setFont (fnt);
  btn->setStyleSheet (stylesheet);
  btn->setAutoFillBackground (false);
  btn->setFocusPolicy (Qt::NoFocus);
  btn->setObjectName ("Indicator Button");

  bd.list->append (btn);
  return btn;
}

/*
-ChartParam-

SMA:            Period 14  Color 0,255,255
EMA:            Period 14  Color 0,255,255
MACD:           Period 14  MACD-color 255,255,0  Signal-color 255,0,0
MFI:            Period 14  High-level 80   Medium-level 50  Low-level 20
                           Color 0,255,255
ROC:            Period 10  Level 0  Color 0,255,255
RSI:            Period 14  High-level 70   Low-level 30  Color 0,255,255
Slow-Stoch:     Period  5  High-level 80   Medium-level 50  Low-level 20
                           "%K color" 0,255,255  "%D color" 255,255,0
Fast-Stoch:     Period  5  High-level 80   Medium-level 50  Low-level 20
                           "%K color" 0,255,255  "%D color" 255,255,0
W_percent_R:    Period 14  High-level -20  Low-level -80  Color 0,255,255
Bollinger-Bands:Period 20  Color 255,0,255
Parabolic-SAR:             Color 0,255,255
ADX:            Period 13  Weak 25  Strong 50  Very-strong 75  Color 0,255,255
Aroon:          Period 25  High-level 70  Medium-level 50  Low-level 30
                           Up-color 0,255,0  Down-color 255,0,0
CCI:            Period 20  High-level 100  Low-level -100  Color 0,255,255
STDDEV:         Period 10  Color 0,255,255
Momentum:       Period 12  Level 0  Color 0,255,255
DMI:            Period 13  Weak 25  Strong 50  Very-strong 75  Color 0,255,255
ATR:            Period 14  Color 0,255,255
*/

// This file is generated from the above data.
#include "FuncParamDialogs.cpp"

void
QTACFunctions::createButtons (void)
{
   ButtonInitData bd;
   bd.parent = this;
   bd.list   = &Button;
   bd.size   = QSize(button_width, button_height);

  _paramDialogSMA(bd);
  _paramDialogEMA(bd);
  _paramDialogMACD(bd);
  _paramDialogMFI(bd);
  _paramDialogROC(bd);
  _paramDialogRSI(bd);
  _paramDialogSlowStoch(bd);
  _paramDialogFastStoch(bd);
  _paramDialogW_percent_R(bd);
  _paramDialogBollingerBands(bd);
  _paramDialogParabolicSAR(bd);
  _paramDialogADX(bd);
  _paramDialogAroon(bd);
  _paramDialogCCI(bd);
  _paramDialogSTDDEV(bd);
  _paramDialogMomentum(bd);
  _paramDialogDMI(bd);
  _paramDialogATR(bd);

  // sort buttons
  qSort(Button.begin(), Button.end(), ButtonCmp);

  // correct fonts
  correctWidgetFonts (this);
}

// destructor
QTACFunctions::~QTACFunctions ()
{
  delete ui;
}

// set the reference chart
void
QTACFunctions::setReferenceChart (void *chart)
{
  referencechart = static_cast <QTAChart *> (chart);
  createButtons ();
}

// get the reference chart
void *
QTACFunctions::getReferenceChart (void)
{
  return referencechart;
}

// add indicator
void
QTACFunctions::addIndicator (DynParamsDialog *paramDialog)
{
  QTAChartCore *core = getData (referencechart);
  QTACObject *obj = nullptr;
  QString fname;

  if (core->CLOSE.size () == 0)
    return;

  fname = paramDialog->getTitle ();

#define PARAM(name)  paramDialog->getParam(QStringLiteral(name))

#include "FuncAddStudy.cpp"

  if (obj != nullptr)
    obj->setParamDialog (paramDialog->getPVector (), fname);
}

// resize
void
QTACFunctions::resizeEvent (QResizeEvent * event)
{
  QSize newsize;
  int w, h, counter;

  if (event->oldSize () == event->size ())
    return;

  newsize = event->size ();
  w = newsize.width () - 2;
  h = newsize.height () - 2;
  layout->setGeometry (QRect (0, 0, w, h));
  for (counter = 0; counter < Button.size (); counter ++)
  {
    DynParamsDialog *paramDialog;
    layout->setRowMinimumHeight (counter % 6, Button[counter]->height ());
    layout->setColumnMinimumWidth (counter/6, Button[counter]->width ());
    layout->addWidget (Button[counter], counter % 6, counter / 6, Qt::AlignHCenter);
    paramDialog = Button[counter]->findChild<DynParamsDialog *> (QStringLiteral ("ParamDialog"));
    if (paramDialog != NULL)
    {
      paramDialog->move ((width () - paramDialog->width ()) / 2, 25);
    }
  }
}

// button clicked
void
QTACFunctions::button_clicked (void)
{
  DynParamsDialog *paramDialog;
  QPushButton *btn;
  btn = qobject_cast <QPushButton *> (QObject::sender());
  paramDialog = btn->findChild<DynParamsDialog *> (QStringLiteral ("ParamDialog"));
  if (paramDialog != NULL)
  {
    paramDialog->setReferenceChart (referencechart);
    paramDialog->move ((width () - paramDialog->width ()) / 2, 25);
    // paramDialog->exec ();
    paramDialog->open ();
    qApp->processEvents(QEventLoop::AllEvents, 10);
  }
}

// function accepted
void
QTACFunctions::function_accepted (void)
{
  QTAChart *chart = static_cast <QTAChart *> (referencechart);
  DynParamsDialog *paramDialog;

  paramDialog = qobject_cast <DynParamsDialog *> (QObject::sender()->parent ());
  addIndicator (paramDialog);

  chart->goBack ();
}

// function rejected
void
QTACFunctions::function_rejected (void)
{

}

