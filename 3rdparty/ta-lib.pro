TEMPLATE = lib
TARGET   = ta-lib
VERSION  = 0.6.0

CONFIG += staticlib release

OBJECTS_DIR = obj

INCLUDEPATH += \
	ta-lib/include \
    ta-lib/src/ta_abstract \
    ta-lib/src/ta_abstract/frames \
    ta-lib/src/ta_common

SOURCES += ta-lib/src/ta_abstract/frames/ta_frame.c \
	ta-lib/src/ta_abstract/ta_abstract.c \
	ta-lib/src/ta_abstract/tables/table_a.c \
	ta-lib/src/ta_abstract/tables/table_b.c \
	ta-lib/src/ta_abstract/tables/table_c.c \
	ta-lib/src/ta_abstract/tables/table_d.c \
	ta-lib/src/ta_abstract/tables/table_e.c \
	ta-lib/src/ta_abstract/tables/table_f.c \
	ta-lib/src/ta_abstract/tables/table_g.c \
	ta-lib/src/ta_abstract/tables/table_h.c \
	ta-lib/src/ta_abstract/tables/table_i.c \
	ta-lib/src/ta_abstract/tables/table_j.c \
	ta-lib/src/ta_abstract/tables/table_k.c \
	ta-lib/src/ta_abstract/tables/table_l.c \
	ta-lib/src/ta_abstract/tables/table_m.c \
	ta-lib/src/ta_abstract/tables/table_n.c \
	ta-lib/src/ta_abstract/tables/table_o.c \
	ta-lib/src/ta_abstract/tables/table_p.c \
	ta-lib/src/ta_abstract/tables/table_q.c \
	ta-lib/src/ta_abstract/tables/table_r.c \
	ta-lib/src/ta_abstract/tables/table_s.c \
	ta-lib/src/ta_abstract/tables/table_t.c \
	ta-lib/src/ta_abstract/tables/table_u.c \
	ta-lib/src/ta_abstract/tables/table_v.c \
	ta-lib/src/ta_abstract/tables/table_w.c \
	ta-lib/src/ta_abstract/tables/table_x.c \
	ta-lib/src/ta_abstract/tables/table_y.c \
	ta-lib/src/ta_abstract/tables/table_z.c \
	ta-lib/src/ta_abstract/ta_def_ui.c \
	ta-lib/src/ta_abstract/ta_func_api.c \
	ta-lib/src/ta_abstract/ta_group_idx.c \
	ta-lib/src/ta_common/ta_global.c \
	ta-lib/src/ta_common/ta_retcode.c \
	ta-lib/src/ta_common/ta_version.c \
	ta-lib/src/ta_func/ta_ACOS.c \
	ta-lib/src/ta_func/ta_ACCBANDS.c \
	ta-lib/src/ta_func/ta_AD.c \
	ta-lib/src/ta_func/ta_ADD.c \
	ta-lib/src/ta_func/ta_ADOSC.c \
	ta-lib/src/ta_func/ta_ADX.c \
	ta-lib/src/ta_func/ta_ADXR.c \
	ta-lib/src/ta_func/ta_APO.c \
	ta-lib/src/ta_func/ta_AROON.c \
	ta-lib/src/ta_func/ta_AROONOSC.c \
	ta-lib/src/ta_func/ta_ASIN.c \
	ta-lib/src/ta_func/ta_ATAN.c \
	ta-lib/src/ta_func/ta_ATR.c \
	ta-lib/src/ta_func/ta_AVGDEV.c \
	ta-lib/src/ta_func/ta_AVGPRICE.c \
	ta-lib/src/ta_func/ta_BBANDS.c \
	ta-lib/src/ta_func/ta_BETA.c \
	ta-lib/src/ta_func/ta_BOP.c \
	ta-lib/src/ta_func/ta_CCI.c \
	ta-lib/src/ta_func/ta_CDL2CROWS.c \
	ta-lib/src/ta_func/ta_CDL3BLACKCROWS.c \
	ta-lib/src/ta_func/ta_CDL3INSIDE.c \
	ta-lib/src/ta_func/ta_CDL3LINESTRIKE.c \
	ta-lib/src/ta_func/ta_CDL3OUTSIDE.c \
	ta-lib/src/ta_func/ta_CDL3STARSINSOUTH.c \
	ta-lib/src/ta_func/ta_CDL3WHITESOLDIERS.c \
	ta-lib/src/ta_func/ta_CDLABANDONEDBABY.c \
	ta-lib/src/ta_func/ta_CDLADVANCEBLOCK.c \
	ta-lib/src/ta_func/ta_CDLBELTHOLD.c \
	ta-lib/src/ta_func/ta_CDLBREAKAWAY.c \
	ta-lib/src/ta_func/ta_CDLCLOSINGMARUBOZU.c \
	ta-lib/src/ta_func/ta_CDLCONCEALBABYSWALL.c \
	ta-lib/src/ta_func/ta_CDLCOUNTERATTACK.c \
	ta-lib/src/ta_func/ta_CDLDARKCLOUDCOVER.c \
	ta-lib/src/ta_func/ta_CDLDOJI.c \
	ta-lib/src/ta_func/ta_CDLDOJISTAR.c \
	ta-lib/src/ta_func/ta_CDLDRAGONFLYDOJI.c \
	ta-lib/src/ta_func/ta_CDLENGULFING.c \
	ta-lib/src/ta_func/ta_CDLEVENINGDOJISTAR.c \
	ta-lib/src/ta_func/ta_CDLEVENINGSTAR.c \
	ta-lib/src/ta_func/ta_CDLGAPSIDESIDEWHITE.c \
	ta-lib/src/ta_func/ta_CDLGRAVESTONEDOJI.c \
	ta-lib/src/ta_func/ta_CDLHAMMER.c \
	ta-lib/src/ta_func/ta_CDLHANGINGMAN.c \
	ta-lib/src/ta_func/ta_CDLHARAMI.c \
	ta-lib/src/ta_func/ta_CDLHARAMICROSS.c \
	ta-lib/src/ta_func/ta_CDLHIGHWAVE.c \
	ta-lib/src/ta_func/ta_CDLHIKKAKE.c \
	ta-lib/src/ta_func/ta_CDLHIKKAKEMOD.c \
	ta-lib/src/ta_func/ta_CDLHOMINGPIGEON.c \
	ta-lib/src/ta_func/ta_CDLIDENTICAL3CROWS.c \
	ta-lib/src/ta_func/ta_CDLINNECK.c \
	ta-lib/src/ta_func/ta_CDLINVERTEDHAMMER.c \
	ta-lib/src/ta_func/ta_CDLKICKINGBYLENGTH.c \
	ta-lib/src/ta_func/ta_CDLKICKING.c \
	ta-lib/src/ta_func/ta_CDLLADDERBOTTOM.c \
	ta-lib/src/ta_func/ta_CDLLONGLEGGEDDOJI.c \
	ta-lib/src/ta_func/ta_CDLLONGLINE.c \
	ta-lib/src/ta_func/ta_CDLMARUBOZU.c \
	ta-lib/src/ta_func/ta_CDLMATCHINGLOW.c \
	ta-lib/src/ta_func/ta_CDLMATHOLD.c \
	ta-lib/src/ta_func/ta_CDLMORNINGDOJISTAR.c \
	ta-lib/src/ta_func/ta_CDLMORNINGSTAR.c \
	ta-lib/src/ta_func/ta_CDLONNECK.c \
	ta-lib/src/ta_func/ta_CDLPIERCING.c \
	ta-lib/src/ta_func/ta_CDLRICKSHAWMAN.c \
	ta-lib/src/ta_func/ta_CDLRISEFALL3METHODS.c \
	ta-lib/src/ta_func/ta_CDLSEPARATINGLINES.c \
	ta-lib/src/ta_func/ta_CDLSHOOTINGSTAR.c \
	ta-lib/src/ta_func/ta_CDLSHORTLINE.c \
	ta-lib/src/ta_func/ta_CDLSPINNINGTOP.c \
	ta-lib/src/ta_func/ta_CDLSTALLEDPATTERN.c \
	ta-lib/src/ta_func/ta_CDLSTICKSANDWICH.c \
	ta-lib/src/ta_func/ta_CDLTAKURI.c \
	ta-lib/src/ta_func/ta_CDLTASUKIGAP.c \
	ta-lib/src/ta_func/ta_CDLTHRUSTING.c \
	ta-lib/src/ta_func/ta_CDLTRISTAR.c \
	ta-lib/src/ta_func/ta_CDLUNIQUE3RIVER.c \
	ta-lib/src/ta_func/ta_CDLUPSIDEGAP2CROWS.c \
	ta-lib/src/ta_func/ta_CDLXSIDEGAP3METHODS.c \
	ta-lib/src/ta_func/ta_CEIL.c \
	ta-lib/src/ta_func/ta_CMO.c \
	ta-lib/src/ta_func/ta_CORREL.c \
	ta-lib/src/ta_func/ta_COS.c \
	ta-lib/src/ta_func/ta_COSH.c \
	ta-lib/src/ta_func/ta_DEMA.c \
	ta-lib/src/ta_func/ta_DIV.c \
	ta-lib/src/ta_func/ta_DX.c \
	ta-lib/src/ta_func/ta_EMA.c \
	ta-lib/src/ta_func/ta_EXP.c \
	ta-lib/src/ta_func/ta_FLOOR.c \
	ta-lib/src/ta_func/ta_HT_DCPERIOD.c \
	ta-lib/src/ta_func/ta_HT_DCPHASE.c \
	ta-lib/src/ta_func/ta_HT_PHASOR.c \
	ta-lib/src/ta_func/ta_HT_SINE.c \
	ta-lib/src/ta_func/ta_HT_TRENDLINE.c \
	ta-lib/src/ta_func/ta_HT_TRENDMODE.c \
	ta-lib/src/ta_func/ta_IMI.c \
	ta-lib/src/ta_func/ta_KAMA.c \
	ta-lib/src/ta_func/ta_LINEARREG_ANGLE.c \
	ta-lib/src/ta_func/ta_LINEARREG.c \
	ta-lib/src/ta_func/ta_LINEARREG_INTERCEPT.c \
	ta-lib/src/ta_func/ta_LINEARREG_SLOPE.c \
	ta-lib/src/ta_func/ta_LN.c \
	ta-lib/src/ta_func/ta_LOG10.c \
	ta-lib/src/ta_func/ta_MA.c \
	ta-lib/src/ta_func/ta_MACD.c \
	ta-lib/src/ta_func/ta_MACDEXT.c \
	ta-lib/src/ta_func/ta_MACDFIX.c \
	ta-lib/src/ta_func/ta_MAMA.c \
	ta-lib/src/ta_func/ta_MAVP.c \
	ta-lib/src/ta_func/ta_MAX.c \
	ta-lib/src/ta_func/ta_MAXINDEX.c \
	ta-lib/src/ta_func/ta_MEDPRICE.c \
	ta-lib/src/ta_func/ta_MFI.c \
	ta-lib/src/ta_func/ta_MIDPOINT.c \
	ta-lib/src/ta_func/ta_MIDPRICE.c \
	ta-lib/src/ta_func/ta_MIN.c \
	ta-lib/src/ta_func/ta_MININDEX.c \
	ta-lib/src/ta_func/ta_MINMAX.c \
	ta-lib/src/ta_func/ta_MINMAXINDEX.c \
	ta-lib/src/ta_func/ta_MINUS_DI.c \
	ta-lib/src/ta_func/ta_MINUS_DM.c \
	ta-lib/src/ta_func/ta_MOM.c \
	ta-lib/src/ta_func/ta_MULT.c \
	ta-lib/src/ta_func/ta_NATR.c \
	ta-lib/src/ta_func/ta_NVI.c \
	ta-lib/src/ta_func/ta_OBV.c \
	ta-lib/src/ta_func/ta_PLUS_DI.c \
	ta-lib/src/ta_func/ta_PLUS_DM.c \
	ta-lib/src/ta_func/ta_PPO.c \
	ta-lib/src/ta_func/ta_PVI.c \
	ta-lib/src/ta_func/ta_ROC.c \
	ta-lib/src/ta_func/ta_ROCP.c \
	ta-lib/src/ta_func/ta_ROCR100.c \
	ta-lib/src/ta_func/ta_ROCR.c \
	ta-lib/src/ta_func/ta_RSI.c \
	ta-lib/src/ta_func/ta_SAR.c \
	ta-lib/src/ta_func/ta_SAREXT.c \
	ta-lib/src/ta_func/ta_SIN.c \
	ta-lib/src/ta_func/ta_SINH.c \
	ta-lib/src/ta_func/ta_SMA.c \
	ta-lib/src/ta_func/ta_SQRT.c \
	ta-lib/src/ta_func/ta_STDDEV.c \
	ta-lib/src/ta_func/ta_STOCH.c \
	ta-lib/src/ta_func/ta_STOCHF.c \
	ta-lib/src/ta_func/ta_STOCHRSI.c \
	ta-lib/src/ta_func/ta_SUB.c \
	ta-lib/src/ta_func/ta_SUM.c \
	ta-lib/src/ta_func/ta_T3.c \
	ta-lib/src/ta_func/ta_TAN.c \
	ta-lib/src/ta_func/ta_TANH.c \
	ta-lib/src/ta_func/ta_TEMA.c \
	ta-lib/src/ta_func/ta_TRANGE.c \
	ta-lib/src/ta_func/ta_TRIMA.c \
	ta-lib/src/ta_func/ta_TRIX.c \
	ta-lib/src/ta_func/ta_TSF.c \
	ta-lib/src/ta_func/ta_TYPPRICE.c \
	ta-lib/src/ta_func/ta_ULTOSC.c \
	ta-lib/src/ta_func/ta_utility.c \
	ta-lib/src/ta_func/ta_VAR.c \
	ta-lib/src/ta_func/ta_WCLPRICE.c \
	ta-lib/src/ta_func/ta_WILLR.c \
	ta-lib/src/ta_func/ta_WMA.c
