/*
 * Copyright (C) 2015 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */

#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H


/* ============================================================
// define
// ============================================================*/
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#endif

#define RBAT_PULL_UP_VOLT          1800

#define BIF_NTC_R 16000

/* multiple battery profile compile options */
#define MTK_GET_BATTERY_ID_BY_AUXADC
#define BATTERY_ID_CHANNEL_NUM 12
#define TOTAL_BATTERY_NUMBER 2
#define BAT_ID_POS_NEG_VOLTAGE_ERR_RANGE 150000
/*#define MTK_GET_BATTERY_ID_BY_GPIO*/

/* ============================================================
// ENUM
// ============================================================*/

/* ============================================================
// structure
// ============================================================*/

/* ============================================================
// typedef
// ============================================================*/
typedef struct _BATTERY_PROFILE_STRUCT {
	signed int percentage;
	signed int voltage;
	} BATTERY_PROFILE_STRUCT, *BATTERY_PROFILE_STRUCT_P;

typedef struct _R_PROFILE_STRUCT {
	signed int resistance; /* Ohm*/
	signed int voltage;
} R_PROFILE_STRUCT, *R_PROFILE_STRUCT_P;

typedef enum {
	T1_0C,
	T2_25C,
	T3_50C
} PROFILE_TEMPERATURE;

/* ============================================================
// External Variables
// ============================================================*/

/* ============================================================
// External function
// ============================================================*/

/* ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================*/

/* Qmax for battery  */
signed int g_Q_MAX_POS_50[TOTAL_BATTERY_NUMBER] = {2910,2892};
signed int g_Q_MAX_POS_25[TOTAL_BATTERY_NUMBER] = {2910,2928};
signed int g_Q_MAX_POS_0[TOTAL_BATTERY_NUMBER] =  {2299,1964};
signed int g_Q_MAX_NEG_10[TOTAL_BATTERY_NUMBER] = {848, 852};

signed int g_Q_MAX_POS_50_H_CURRENT[TOTAL_BATTERY_NUMBER] = {2900,2873};
signed int g_Q_MAX_POS_25_H_CURRENT[TOTAL_BATTERY_NUMBER] = {2900,2914};
signed int g_Q_MAX_POS_0_H_CURRENT[TOTAL_BATTERY_NUMBER] =  {2253,1925};
signed int g_Q_MAX_NEG_10_H_CURRENT[TOTAL_BATTERY_NUMBER] = {831, 835};

signed int g_Q_MAX_SYS_VOLTAGE[TOTAL_BATTERY_NUMBER] = {3400, 3400};
signed int g_BATTERYPSEUDO1[TOTAL_BATTERY_NUMBER] = {0, 0};

/* 1.2V for battery 0;1.35V for battery 1  */
signed int g_battery_id_voltage[TOTAL_BATTERY_NUMBER] = {1200000, 900000};


#if (BAT_NTC_10 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[TOTAL_BATTERY_NUMBER][132] = {
	{
		{-400, 188500},
		{-390, 178600},
		{-380, 169200},
		{-370, 160400},
		{-360, 152100},
		{-350, 144300},
		{-340, 136900},
		{-330, 130000},
		{-320, 123400},
		{-310, 117200},
		{-300, 111300},
		{-290, 105800},
		{-280, 100600},
		{-270, 95640},
		{-260, 90970},
		{-250, 86560},
		{-240, 82380},
		{-230, 78430},
		{-220, 74690},
		{-210, 71140},
		{-200, 67790},
		{-190, 64610},
		{-180, 61600},
		{-170, 58740},
		{-160, 56030},
		{-150, 53460},
		{-140, 51030},
		{-130, 48710},
		{-120, 46520},
		{-110, 44430},
		{-100, 42450},
		{-90, 40570},
		{-80, 38780},
		{-70, 37080},
		{-60, 35460},
		{-50, 33930},
		{-40, 32460},
		{-30, 31070},
		{-20, 29750},
		{-10, 28490},
		{0, 27280},
		{10, 26140},
		{20, 25050},
		{30, 24010},
		{40, 23020},
		{50, 22070},
		{60, 21170},
		{70, 20310},
		{80, 19490},
		{90, 18710},
		{100, 17960},
		{110, 17250},
		{120, 16570},
		{130, 15910},
		{140, 15290},
		{150, 14700},
		{160, 14130},
		{170, 13590},
		{180, 13070},
		{190, 12570},
		{200, 12090},
		{210, 11640},
		{220, 11200},
		{230, 10780},
		{240, 10380},
		{250, 10000},
		{260, 9633},
		{270, 9282},
		{280, 8945},
		{290, 8622},
		{300, 8312},
		{310, 8015},
		{320, 7730},
		{330, 7456},
		{340, 7194},
		{350, 6942},
		{360, 6700},
		{370, 6468},
		{380, 6245},
		{390, 6031},
		{400, 5826},
		{410, 5628},
		{420, 5438},
		{430, 5255},
		{440, 5080},
		{450, 4911},
		{460, 4749},
		{470, 4592},
		{480, 4442},
		{490, 4297},
		{500, 4158},
		{510, 4024},
		{520, 3895},
		{530, 3771},
		{540, 3651},
		{550, 3536},
		{560, 3425},
		{570, 3318},
		{580, 3215},
		{590, 3115},
		{600, 3019},
		{610, 2927},
		{620, 2837},
		{630, 2751},
		{640, 2668},
		{650, 2588},
		{660, 2511},
		{670, 2436},
		{680, 2364},
		{690, 2295},
		{700, 2227},
		{710, 2163},
		{720, 2100},
		{730, 2039},
		{740, 1981},
		{750, 1924},
		{760, 1869},
		{770, 1817},
		{780, 1765},
		{790, 1716},
		{800, 1668},
		{810, 1622},
		{820, 1577},
		{830, 1534},
		{840, 1492},
		{850, 1451},
		{860, 1412},
		{870, 1374},
		{880, 1337},
		{890, 1302},
		{900, 1267},
		{910,1234}
	},
	{
		{-400, 188500},
		{-390, 178600},
		{-380, 169200},
		{-370, 160400},
		{-360, 152100},
		{-350, 144300},
		{-340, 136900},
		{-330, 130000},
		{-320, 123400},
		{-310, 117200},
		{-300, 111300},
		{-290, 105800},
		{-280, 100600},
		{-270, 95640},
		{-260, 90970},
		{-250, 86560},
		{-240, 82380},
		{-230, 78430},
		{-220, 74690},
		{-210, 71140},
		{-200, 67790},
		{-190, 64610},
		{-180, 61600},
		{-170, 58740},
		{-160, 56030},
		{-150, 53460},
		{-140, 51030},
		{-130, 48710},
		{-120, 46520},
		{-110, 44430},
		{-100, 42450},
		{-90, 40570},
		{-80, 38780},
		{-70, 37080},
		{-60, 35460},
		{-50, 33930},
		{-40, 32460},
		{-30, 31070},
		{-20, 29750},
		{-10, 28490},
		{0, 27280},
		{10, 26140},
		{20, 25050},
		{30, 24010},
		{40, 23020},
		{50, 22070},
		{60, 21170},
		{70, 20310},
		{80, 19490},
		{90, 18710},
		{100, 17960},
		{110, 17250},
		{120, 16570},
		{130, 15910},
		{140, 15290},
		{150, 14700},
		{160, 14130},
		{170, 13590},
		{180, 13070},
		{190, 12570},
		{200, 12090},
		{210, 11640},
		{220, 11200},
		{230, 10780},
		{240, 10380},
		{250, 10000},
		{260, 9633},
		{270, 9282},
		{280, 8945},
		{290, 8622},
		{300, 8312},
		{310, 8015},
		{320, 7730},
		{330, 7456},
		{340, 7194},
		{350, 6942},
		{360, 6700},
		{370, 6468},
		{380, 6245},
		{390, 6031},
		{400, 5826},
		{410, 5628},
		{420, 5438},
		{430, 5255},
		{440, 5080},
		{450, 4911},
		{460, 4749},
		{470, 4592},
		{480, 4442},
		{490, 4297},
		{500, 4158},
		{510, 4024},
		{520, 3895},
		{530, 3771},
		{540, 3651},
		{550, 3536},
		{560, 3425},
		{570, 3318},
		{580, 3215},
		{590, 3115},
		{600, 3019},
		{610, 2927},
		{620, 2837},
		{630, 2751},
		{640, 2668},
		{650, 2588},
		{660, 2511},
		{670, 2436},
		{680, 2364},
		{690, 2295},
		{700, 2227},
		{710, 2163},
		{720, 2100},
		{730, 2039},
		{740, 1981},
		{750, 1924},
		{760, 1869},
		{770, 1817},
		{780, 1765},
		{790, 1716},
		{800, 1668},
		{810, 1622},
		{820, 1577},
		{830, 1534},
		{840, 1492},
		{850, 1451},
		{860, 1412},
		{870, 1374},
		{880, 1337},
		{890, 1302},
		{900, 1267},
		{910,1234}
	}
};
#endif

#if (BAT_NTC_47 == 1)
BATT_TEMPERATURE Batt_Temperature_Table[TOTAL_BATTERY_NUMBER][17] = {
	{
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	},
	{
		{-20, 483954},
		{-15, 360850},
		{-10, 271697},
		{ -5, 206463},
		{  0, 158214},
		{  5, 122259},
		{ 10, 95227},
		{ 15, 74730},
		{ 20, 59065},
		{ 25, 47000},
		{ 30, 37643},
		{ 35, 30334},
		{ 40, 24591},
		{ 45, 20048},
		{ 50, 16433},
		{ 55, 13539},
		{ 60, 11210}
	}
};
#endif

/* T0 -10C */
BATTERY_PROFILE_STRUCT battery_profile_t0[TOTAL_BATTERY_NUMBER][59] = {
	{
		{0,4385},
		{7,4350},
		{10,4325},
		{17,4303},
		{24,4281},
		{31,4261},
		{34,4240},
		{41,4219},
		{48,4199},
		{55,4180},
		{59,4160},
		{66,4141},
		{72,4121},
		{76,4102},
		{83,4084},
		{90,4069},
		{97,4050},
		{100,4021},
		{107,3991},
		{114,3968},
		{117,3952},
		{124,3939},
		{131,3928},
		{138,3917},
		{141,3904},
		{148,3892},
		{155,3880},
		{162,3869},
		{166,3858},
		{172,3847},
		{179,3838},
		{183,3830},
		{190,3821},
		{197,3814},
		{204,3806},
		{207,3800},
		{214,3793},
		{221,3788},
		{228,3783},
		{231,3779},
		{238,3775},
		{245,3771},
		{248,3767},
		{255,3764},
		{262,3759},
		{269,3754},
		{272,3749},
		{279,3743},
		{286,3736},
		{290,3729},
		{297,3722},
		{304,3715},
		{310,3708},
		{314,3700},
		{321,3689},
		{328,3669},
		{335,3633},
		{338,3566},
		{345,3400}
	},
	{
		{0,4378},
		{7,4339},
		{10,4313},
		{17,4282},
		{24,4256},
		{31,4231},
		{34,4210},
		{41,4188},
		{48,4169},
		{52,4150},
		{59,4129},
		{65,4112},
		{69,4098},
		{76,4083},
		{83,4061},
		{90,4029},
		{93,3997},
		{100,3976},
		{110,3943},
		{117,3931},
		{124,3920},
		{128,3908},
		{134,3895},
		{141,3884},
		{148,3872},
		{152,3860},
		{159,3849},
		{165,3840},
		{169,3831},
		{176,3822},
		{183,3815},
		{186,3808},
		{193,3801},
		{200,3797},
		{207,3793},
		{210,3789},
		{217,3787},
		{224,3784},
		{228,3780},
		{234,3776},
		{241,3773},
		{245,3769},
		{252,3765},
		{259,3760},
		{265,3756},
		{269,3750},
		{276,3743},
		{283,3736},
		{286,3727},
		{293,3721},
		{300,3713},
		{303,3707},
		{310,3701},
		{317,3695},
		{324,3684},
		{327,3662},
		{334,3612},
		{338,3582},
		{345,3400}
	}
};

/* T1 0C */
BATTERY_PROFILE_STRUCT battery_profile_t1[TOTAL_BATTERY_NUMBER][59] = {
	{
		{0,4381},
		{3,4348},
		{4,4325},
		{6,4302},
		{9,4282},
		{11,4262},
		{13,4242},
		{15,4221},
		{18,4202},
		{20,4183},
		{22,4164},
		{24,4145},
		{27,4126},
		{28,4108},
		{30,4090},
		{33,4078},
		{35,4061},
		{37,4033},
		{39,4005},
		{42,3985},
		{43,3969},
		{46,3956},
		{48,3942},
		{51,3929},
		{52,3914},
		{54,3901},
		{57,3887},
		{59,3875},
		{61,3865},
		{63,3855},
		{66,3845},
		{67,3837},
		{70,3829},
		{72,3822},
		{75,3815},
		{76,3809},
		{78,3803},
		{81,3798},
		{84,3793},
		{85,3788},
		{87,3784},
		{90,3780},
		{91,3777},
		{94,3774},
		{96,3770},
		{99,3766},
		{100,3761},
		{103,3755},
		{105,3748},
		{106,3739},
		{109,3731},
		{111,3719},
		{114,3708},
		{115,3703},
		{118,3699},
		{120,3692},
		{123,3663},
		{124,3579},
		{127,3400}
	},
	{
		{0,4359},
		{3,4331},
		{4,4306},
		{7,4283},
		{10,4263},
		{13,4241},
		{15,4220},
		{18,4203},
		{21,4183},
		{22,4167},
		{25,4149},
		{28,4130},
		{31,4111},
		{33,4094},
		{36,4084},
		{39,4070},
		{40,4047},
		{43,4015},
		{46,3987},
		{48,3966},
		{51,3950},
		{54,3940},
		{57,3927},
		{61,3899},
		{64,3886},
		{66,3872},
		{69,3861},
		{72,3851},
		{75,3841},
		{76,3831},
		{79,3823},
		{82,3815},
		{84,3809},
		{87,3803},
		{90,3795},
		{93,3789},
		{94,3786},
		{97,3783},
		{100,3779},
		{102,3777},
		{105,3775},
		{107,3772},
		{109,3768},
		{112,3766},
		{115,3761},
		{118,3756},
		{119,3749},
		{122,3741},
		{125,3732},
		{127,3723},
		{130,3710},
		{133,3699},
		{136,3694},
		{137,3689},
		{140,3684},
		{143,3670},
		{145,3607},
		{148,3492},
		{149,3400}
	}
};

/* T2 25C*/
BATTERY_PROFILE_STRUCT battery_profile_t2[TOTAL_BATTERY_NUMBER][59] = {
	{
		{0,4385},
		{2,4355},
		{3,4332},
		{5,4311},
		{7,4288},
		{9,4268},
		{10,4247},
		{12,4227},
		{14,4206},
		{16,4187},
		{18,4167},
		{20,4148},
		{22,4129},
		{23,4110},
		{25,4092},
		{27,4075},
		{29,4060},
		{30,4041},
		{32,4020},
		{34,4004},
		{35,3989},
		{37,3977},
		{39,3963},
		{41,3948},
		{42,3933},
		{44,3915},
		{46,3895},
		{48,3878},
		{49,3866},
		{52,3855},
		{54,3845},
		{55,3837},
		{57,3829},
		{59,3822},
		{61,3814},
		{62,3808},
		{64,3803},
		{66,3798},
		{68,3793},
		{69,3788},
		{71,3783},
		{73,3779},
		{74,3773},
		{76,3766},
		{78,3759},
		{80,3752},
		{81,3747},
		{84,3741},
		{86,3734},
		{87,3725},
		{89,3716},
		{91,3703},
		{93,3693},
		{94,3688},
		{96,3634},
		{98,3539},
		{100,3400},
		{101,3400},
		{103,3400}
	},
	{
		{0,4367},
		{2,4341},
		{3,4320},
		{5,4300},
		{7,4279},
		{9,4259},
		{10,4239},
		{12,4219},
		{14,4200},
		{15,4180},
		{17,4162},
		{19,4143},
		{21,4125},
		{22,4107},
		{24,4088},
		{27,4073},
		{28,4063},
		{30,4043},
		{32,4017},
		{34,3996},
		{35,3986},
		{37,3976},
		{39,3964},
		{40,3949},
		{42,3935},
		{44,3915},
		{46,3896},
		{47,3878},
		{49,3868},
		{51,3857},
		{52,3848},
		{54,3839},
		{56,3831},
		{57,3824},
		{59,3817},
		{61,3811},
		{63,3804},
		{64,3798},
		{66,3793},
		{68,3788},
		{69,3785},
		{71,3781},
		{73,3775},
		{76,3767},
		{77,3761},
		{79,3755},
		{81,3748},
		{82,3736},
		{84,3727},
		{86,3717},
		{88,3708},
		{89,3695},
		{91,3686},
		{94,3672},
		{96,3605},
		{98,3494},
		{100,3400},
		{101,3400},
		{102,3400}
	}
};

/* T3 50C*/
BATTERY_PROFILE_STRUCT battery_profile_t3[TOTAL_BATTERY_NUMBER][59] = {
	{
		{0,4387},
		{2,4343},
		{3,4320},
		{5,4298},
		{7,4278},
		{9,4257},
		{10,4237},
		{12,4217},
		{14,4198},
		{16,4178},
		{17,4159},
		{19,4139},
		{21,4121},
		{22,4102},
		{24,4084},
		{27,4066},
		{29,4049},
		{30,4033},
		{32,4017},
		{34,4001},
		{35,3986},
		{37,3971},
		{39,3958},
		{41,3943},
		{42,3930},
		{44,3914},
		{46,3893},
		{48,3875},
		{49,3862},
		{51,3851},
		{53,3842},
		{54,3833},
		{56,3824},
		{58,3817},
		{60,3810},
		{61,3804},
		{63,3798},
		{65,3792},
		{67,3787},
		{68,3782},
		{70,3778},
		{72,3774},
		{73,3765},
		{76,3752},
		{78,3743},
		{80,3736},
		{81,3730},
		{83,3724},
		{85,3718},
		{86,3710},
		{88,3700},
		{90,3690},
		{92,3677},
		{93,3672},
		{95,3667},
		{97,3645},
		{99,3571},
		{100,3400},
		{102,3400}
	},
	{
		{0,4352},
		{2,4329},
		{3,4308},
		{5,4288},
		{7,4267},
		{9,4247},
		{10,4227},
		{12,4207},
		{14,4188},
		{16,4170},
		{18,4150},
		{20,4131},
		{22,4113},
		{23,4096},
		{25,4078},
		{27,4062},
		{29,4046},
		{30,4028},
		{32,4013},
		{34,3997},
		{36,3984},
		{37,3970},
		{39,3956},
		{41,3942},
		{42,3926},
		{44,3905},
		{46,3886},
		{48,3873},
		{49,3861},
		{52,3851},
		{54,3844},
		{56,3834},
		{57,3827},
		{59,3819},
		{61,3813},
		{62,3806},
		{64,3800},
		{66,3795},
		{68,3791},
		{69,3785},
		{71,3781},
		{73,3774},
		{75,3760},
		{76,3750},
		{78,3744},
		{80,3738},
		{81,3731},
		{84,3726},
		{86,3720},
		{88,3709},
		{89,3699},
		{91,3687},
		{93,3677},
		{95,3669},
		{96,3623},
		{98,3535},
		{100,3400},
		{101,3400},
		{103,3400}
	}
};

/* battery profile for actual temperature. The size should be the same as T1, T2 and T3*/
BATTERY_PROFILE_STRUCT battery_profile_temperature[TOTAL_BATTERY_NUMBER][59] = {
	{
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}
	},
	{
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}	
	}
	
};

/* ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================*/
/* T0 -10C*/
R_PROFILE_STRUCT r_profile_t0[TOTAL_BATTERY_NUMBER][59] = {
	{
		{925, 4385},
		{925, 4350},
		{929, 4325},
		{932, 4303},
		{925, 4281},
		{926, 4261},
		{916, 4240},
		{913, 4219},
		{908, 4199},
		{902, 4180},
		{896, 4160},
		{898, 4141},
		{888, 4121},
		{884, 4102},
		{885, 4084},
		{890, 4069},
		{898, 4050},
		{882, 4021},
		{869, 3991},
		{864, 3968},
		{865, 3952},
		{870, 3939},
		{870, 3928},
		{871, 3917},
		{873, 3904},
		{870, 3892},
		{878, 3880},
		{879, 3869},
		{880, 3858},
		{884, 3847},
		{891, 3838},
		{901, 3830},
		{905, 3821},
		{908, 3814},
		{913, 3806},
		{923, 3800},
		{924, 3793},
		{933, 3788},
		{939, 3783},
		{952, 3779},
		{963, 3775},
		{973, 3771},
		{986, 3767},
		{1002, 3764},
		{1026, 3759},
		{1050, 3754},
		{1077, 3749},
		{1115, 3743},
		{1152, 3736},
		{1208, 3729},
		{1276, 3722},
		{1366, 3715},
		{1487, 3708},
		{1628, 3700},
		{1743, 3689},
		{1860, 3669},
		{2020, 3633},
		{2285, 3566},
		{2285, 3400}
	},
	{
		{1242,4378},
		{1242,4339},
		{826,4313},
		{1287,4282},
		{1285,4256},
		{1259,4231},
		{1236,4210},
		{1218,4188},
		{1198,4169},
		{1132,4150},
		{1110,4129},
		{1101,4112},
		{1112,4098},
		{1119,4083},
		{1102,4061},
		{1059,4029},
		{1053,3997},
		{857,3976},
		{950,3943},
		{949,3931},
		{955,3920},
		{950,3908},
		{944,3895},
		{945,3884},
		{940,3872},
		{936,3860},
		{935,3849},
		{938,3840},
		{938,3831},
		{941,3822},
		{943,3815},
		{946,3808},
		{951,3801},
		{961,3797},
		{970,3793},
		{985,3789},
		{1003,3787},
		{1024,3784},
		{1053,3780},
		{1167,3776},
		{1201,3773},
		{1240,3769},
		{1282,3765},
		{1324,3760},
		{1374,3756},
		{1437,3750},
		{1482,3743},
		{1529,3736},
		{1552,3727},
		{1557,3721},
		{1612,3713},
		{1661,3707},
		{1708,3701},
		{1602,3695},
		{1746,3684},
		{1815,3662},
		{1994,3612},
		{1956,3582},
		{1460,3400}
	}
};

/* T1 0C*/
R_PROFILE_STRUCT r_profile_t1[TOTAL_BATTERY_NUMBER][59] = {
	{
		{395, 4381},
		{395, 4348},
		{395, 4325},
		{389, 4302},
		{389, 4282},
		{389, 4262},
		{389, 4242},
		{387, 4221},
		{388, 4202},
		{389, 4183},
		{389, 4164},
		{390, 4145},
		{392, 4126},
		{395, 4108},
		{392, 4090},
		{400, 4078},
		{406, 4061},
		{400, 4033},
		{395, 4005},
		{394, 3985},
		{389, 3969},
		{383, 3956},
		{377, 3942},
		{371, 3929},
		{364, 3914},
		{361, 3901},
		{357, 3887},
		{355, 3875},
		{355, 3865},
		{355, 3855},
		{355, 3845},
		{355, 3837},
		{359, 3829},
		{360, 3822},
		{361, 3815},
		{363, 3809},
		{363, 3803},
		{366, 3798},
		{369, 3793},
		{369, 3788},
		{371, 3784},
		{372, 3780},
		{374, 3777},
		{377, 3774},
		{381, 3770},
		{385, 3766},
		{388, 3761},
		{394, 3755},
		{397, 3748},
		{404, 3739},
		{412, 3731},
		{423, 3719},
		{434, 3708},
		{457, 3703},
		{497, 3699},
		{560, 3692},
		{645, 3663},
		{800, 3579},
		{1530, 3400}
	},
	{
		{600,4359},
		{600,4331},
		{632,4306},
		{621,4283},
		{613,4263},
		{600,4241},
		{594,4220},
		{536,4203},
		{520,4183},
		{509,4167},
		{542,4149},
		{567,4130},
		{556,4111},
		{554,4094},
		{576,4084},
		{587,4070},
		{578,4047},
		{547,4015},
		{525,3987},
		{513,3966},
		{512,3950},
		{514,3940},
		{498,3927},
		{478,3899},
		{478,3886},
		{470,3872},
		{468,3861},
		{469,3851},
		{467,3841},
		{465,3831},
		{470,3823},
		{472,3815},
		{477,3809},
		{478,3803},
		{482,3795},
		{485,3789},
		{496,3786},
		{502,3783},
		{443,3779},
		{521,3777},
		{538,3775},
		{557,3772},
		{576,3768},
		{604,3766},
		{626,3761},
		{647,3756},
		{675,3749},
		{709,3741},
		{774,3732},
		{819,3723},
		{871,3710},
		{933,3699},
		{1011,3694},
		{1111,3689},
		{1226,3684},
		{1344,3670},
		{1422,3607},
		{1526,3492},
		{1515,3400}
	}
};

/* T2 25C*/
R_PROFILE_STRUCT r_profile_t2[TOTAL_BATTERY_NUMBER][59] = {
	{
		{137, 4385},
		{137, 4355},
		{135, 4332},
		{138, 4311},
		{136, 4288},
		{138, 4268},
		{140, 4247},
		{138, 4227},
		{139, 4206},
		{141, 4187},
		{143, 4167},
		{146, 4148},
		{146, 4129},
		{149, 4110},
		{151, 4092},
		{154, 4075},
		{158, 4060},
		{158, 4041},
		{161, 4020},
		{166, 4004},
		{169, 3989},
		{175, 3977},
		{177, 3963},
		{180, 3948},
		{177, 3933},
		{167, 3915},
		{146, 3895},
		{135, 3878},
		{130, 3866},
		{128, 3855},
		{127, 3845},
		{127, 3837},
		{129, 3829},
		{130, 3822},
		{133, 3814},
		{138, 3808},
		{141, 3803},
		{144, 3798},
		{146, 3793},
		{147, 3788},
		{147, 3783},
		{147, 3779},
		{144, 3773},
		{141, 3766},
		{138, 3759},
		{136, 3752},
		{138, 3747},
		{139, 3741},
		{141, 3734},
		{140, 3725},
		{143, 3716},
		{143, 3703},
		{141, 3693},
		{146, 3690},
		{152, 3688},
		{163, 3681},
		{155, 3634},
		{169, 3539},
		{202, 3400}
	},
	{
		{140,4367},
		{140,4341},
		{143,4320},
		{145,4300},
		{140,4279},
		{144,4259},
		{140,4239},
		{141,4219},
		{142,4200},
		{138,4180},
		{142,4162},
		{139,4143},
		{144,4125},
		{145,4107},
		{146,4088},
		{146,4073},
		{157,4063},
		{159,4043},
		{158,4017},
		{155,3996},
		{166,3986},
		{167,3976},
		{172,3964},
		{171,3949},
		{171,3935},
		{158,3915},
		{147,3896},
		{136,3878},
		{139,3868},
		{139,3857},
		{139,3848},
		{134,3839},
		{136,3831},
		{137,3824},
		{140,3817},
		{140,3811},
		{143,3804},
		{143,3798},
		{144,3793},
		{146,3788},
		{149,3785},
		{151,3781},
		{145,3775},
		{139,3767},
		{134,3761},
		{136,3755},
		{131,3748},
		{135,3742},
		{134,3736},
		{133,3727},
		{138,3717},
		{141,3708},
		{140,3695},
		{153,3689},
		{164,3686},
		{173,3672},
		{174,3605},
		{202,3494},
		{304,3263}
	}
};

/* T3 50C*/
R_PROFILE_STRUCT r_profile_t3[TOTAL_BATTERY_NUMBER][59] = {
	{
		{115, 4387},
		{115, 4343},
		{115, 4320},
		{115, 4298},
		{118, 4278},
		{115, 4257},
		{116, 4237},
		{116, 4217},
		{118, 4198},
		{118, 4178},
		{119, 4159},
		{116, 4139},
		{118, 4121},
		{119, 4102},
		{119, 4084},
		{121, 4066},
		{121, 4049},
		{124, 4033},
		{124, 4017},
		{127, 4001},
		{126, 3986},
		{129, 3971},
		{133, 3958},
		{135, 3943},
		{140, 3930},
		{143, 3914},
		{129, 3893},
		{119, 3875},
		{116, 3862},
		{116, 3851},
		{116, 3842},
		{118, 3833},
		{115, 3824},
		{116, 3817},
		{118, 3810},
		{118, 3804},
		{121, 3798},
		{121, 3792},
		{121, 3787},
		{124, 3782},
		{126, 3778},
		{129, 3774},
		{124, 3765},
		{116, 3752},
		{115, 3743},
		{116, 3736},
		{116, 3730},
		{118, 3724},
		{121, 3718},
		{119, 3710},
		{118, 3700},
		{121, 3690},
		{115, 3677},
		{121, 3674},
		{126, 3672},
		{134, 3667},
		{132, 3645},
		{133, 3571},
		{178, 3400}
	},
	{
		{100,4352},
		{100,4329},
		{100,4308},
		{103,4288},
		{101,4267},
		{103,4247},
		{101,4227},
		{105,4207},
		{104,4188},
		{107,4170},
		{103,4150},
		{102,4131},
		{102,4113},
		{107,4096},
		{105,4078},
		{109,4062},
		{111,4046},
		{109,4028},
		{112,4013},
		{113,3997},
		{120,3984},
		{118,3970},
		{123,3956},
		{126,3942},
		{128,3926},
		{113,3905},
		{106,3886},
		{103,3873},
		{100,3861},
		{99,3851},
		{106,3844},
		{102,3834},
		{106,3827},
		{103,3819},
		{106,3813},
		{106,3806},
		{105,3800},
		{109,3795},
		{114,3791},
		{112,3785},
		{116,3781},
		{112,3774},
		{102,3760},
		{101,3750},
		{100,3744},
		{105,3738},
		{102,3731},
		{105,3726},
		{108,3720},
		{105,3709},
		{104,3699},
		{105,3687},
		{100,3680},
		{108,3679},
		{115,3677},
		{127,3669},
		{113,3623},
		{125,3535},
		{151,3400}
	}
};

/* r-table profile for actual temperature. The size should be the same as T1, T2 and T3*/
R_PROFILE_STRUCT r_profile_temperature[TOTAL_BATTERY_NUMBER][59] = {
	{
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}
	},
	{
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0},
		{0, 0}
	}
};

/* ============================================================
// function prototype
// ============================================================*/
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUCT_P fgauge_get_profile(unsigned int temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUCT_P fgauge_get_profile_r_table(unsigned int temperature);

#endif
