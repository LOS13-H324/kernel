#ifndef _CUST_BATTERY_METER_TABLE_LGC_H
#define _CUST_BATTERY_METER_TABLE_LGC_H

#define Q_MAX_POS_50_LGC		1973
#define Q_MAX_POS_25_LGC		1956
#define Q_MAX_POS_0_LGC			1747
#define Q_MAX_NEG_10_LGC		1549

#define Q_MAX_POS_50_H_CURRENT_LGC	1901
#define Q_MAX_POS_25_H_CURRENT_LGC	1854
#define Q_MAX_POS_0_H_CURRENT_LGC	1465
#define Q_MAX_NEG_10_H_CURRENT_LGC	673

/* Battery profile data LG Chemical */

#define BATTERY_PROFILE_SIZE_LGC sizeof(battery_profile_t2_LGC) / sizeof(BATTERY_PROFILE_STRUC);
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0_LGC[] =
{
	{0	,	4265},	// VC : 4265	0mA
	{2	,	4245},	// VC : 3964	27mA
	{3	,	4228},	// VC : 3938	53mA
	{5	,	4210},	// VC : 3915	80mA
	{7	,	4194},	// VC : 3894	106mA
	{9	,	4175},	// VC : 3871	133mA
	{10	,	4158},	// VC : 3840	160mA
	{12	,	4138},	// VC : 3809	186mA
	{14	,	4117},	// VC : 3769	213mA
	{15	,	4089},	// VC : 3725	240mA
	{17	,	4060},	// VC : 3663	266mA
	{19	,	4037},	// VC : 3613	293mA
	{21	,	4021},	// VC : 3589	319mA
	{22	,	4005},	// VC : 3569	346mA
	{24	,	3990},	// VC : 3553	373mA
	{26	,	3977},	// VC : 3540	399mA
	{28	,	3965},	// VC : 3527	426mA
	{29	,	3953},	// VC : 3506	452mA
	{31	,	3941},	// VC : 3492	479mA
	{33	,	3927},	// VC : 3482	506mA
	{34	,	3913},	// VC : 3470	532mA
	{36	,	3899},	// VC : 3459	559mA
	{38	,	3888},	// VC : 3442	585mA
	{40	,	3878},	// VC : 3427	612mA
	{41	,	3869},	// VC : 3416	639mA
	{43	,	3861},	// VC : 3403	665mA
	{45	,	3853},	// VC : 3393	692mA
	{46	,	3847},	// VC : 3384	719mA
	{48	,	3840},	// VC : 3373	745mA
	{50	,	3834},	// VC : 3367	772mA
	{52	,	3828},	// VC : 3358	798mA
	{53	,	3821},	// VC : 3348	825mA
	{55	,	3817},	// VC : 3338	852mA
	{57	,	3811},	// VC : 3334	878mA
	{58	,	3807},	// VC : 3327	905mA
	{60	,	3801},	// VC : 3316	931mA
	{62	,	3798},	// VC : 3302	958mA
	{64	,	3793},	// VC : 3295	985mA
	{65	,	3789},	// VC : 3283	1011mA
	{67	,	3785},	// VC : 3274	1038mA
	{69	,	3778},	// VC : 3267	1064mA
	{70	,	3773},	// VC : 3254	1091mA
	{72	,	3766},	// VC : 3238	1118mA
	{74	,	3758},	// VC : 3222	1144mA
	{76	,	3748},	// VC : 3206	1171mA
	{77	,	3739},	// VC : 3188	1198mA
	{79	,	3730},	// VC : 3171	1224mA
	{81	,	3719},	// VC : 3150	1251mA
	{82	,	3712},	// VC : 3131	1277mA
	{84	,	3706},	// VC : 3112	1304mA
	{86	,	3699},	// VC : 3091	1331mA
	{88	,	3694},	// VC : 3068	1357mA
	{89	,	3686},	// VC : 3043	1384mA
	{91	,	3672},	// VC : 3013	1410mA
	{93	,	3642},	// VC : 2974	1437mA
	{95	,	3593},	// VC : 2913	1464mA
	{96	,	3529},	// VC : 2824	1490mA
	{97	,	3494},	// VC : 2799	1505mA
	{98	,	3474},	// VC : 2797	1514mA
	{98	,	3457},	// VC : 2799	1521mA
	{99	,	3444},	// VC : 2799	1527mA
	{99	,	3436},	// VC : 2798	1532mA
	{99	,	3427},	// VC : 2797	1536mA
	{99	,	3418},	// VC : 2797	1540mA
	{100	,	3412},	// VC : 2798	1544mA
	{100	,	3406},	// VC : 2796	1547mA
	{100	,	3399},	// VC : 2797	1550mA
	{100	,	3395},	// VC : 2798	1552mA
	{100	,	3390},	// VC : 2798	1554mA
	{100	,	3386},	// VC : 2798	1556mA
	{100	,	3382},	// VC : 2799	1558mA
	{100	,	3378},	// VC : 2797	1560mA
	{100	,	3375},	// VC : 2800	1562mA
	{100	,	3372},	// VC : 2799	1563mA
	{100	,	3367},	// VC : 2793	1565mA
	{100	,	3365},	// VC : 2795	1566mA
	{100	,	3363},	// VC : 2799	1568mA
	{100	,	3361},	// VC : 2797	1569mA
	{100	,	3359},	// VC : 2800	1570mA
	{100	,	3356},	// VC : 2799	1571mA
	{100	,	3355},	// VC : 2799	1572mA
	{100	,	3350},	// VC : 2798	1573mA
	{100	,	3347},	// VC : 2790	1575mA
	{100	,	3346},	// VC : 2796	1575mA
	{100	,	3345},	// VC : 2799	1576mA
	{100	,	3343},	// VC : 2798	1577mA
	{100	,	3341},	// VC : 2795	1578mA
	{100	,	3338},	// VC : 2798	1579mA
	{100	,	3336},	// VC : 2795	1580mA
	{100	,	3334},	// VC : 2796	1580mA
	{100	,	3333},	// VC : 2799	1581mA
	{100	,	3330},	// VC : 2789	1582mA
	{100	,	3329},	// VC : 2799	1582mA
	{100	,	3328},	// VC : 2795	1583mA

};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1_LGC[] =
{
	{0	,	4281},	// VC : 4281	0mA
	{2	,	4245},	// VC : 4061	27mA
	{3	,	4226},	// VC : 4032	53mA
	{5	,	4210},	// VC : 4011	80mA
	{6	,	4194},	// VC : 3992	106mA
	{8	,	4179},	// VC : 3977	133mA
	{9	,	4166},	// VC : 3960	160mA
	{11	,	4152},	// VC : 3945	186mA
	{12	,	4138},	// VC : 3930	213mA
	{14	,	4125},	// VC : 3912	240mA
	{15	,	4111},	// VC : 3899	266mA
	{17	,	4097},	// VC : 3885	293mA
	{18	,	4086},	// VC : 3870	319mA
	{20	,	4075},	// VC : 3852	346mA
	{21	,	4061},	// VC : 3834	373mA
	{23	,	4048},	// VC : 3817	399mA
	{24	,	4034},	// VC : 3806	426mA
	{26	,	4021},	// VC : 3790	452mA
	{27	,	4008},	// VC : 3779	479mA
	{29	,	3993},	// VC : 3764	506mA
	{30	,	3979},	// VC : 3753	532mA
	{32	,	3964},	// VC : 3738	559mA
	{33	,	3948},	// VC : 3728	585mA
	{35	,	3933},	// VC : 3714	612mA
	{37	,	3921},	// VC : 3703	639mA
	{38	,	3909},	// VC : 3691	665mA
	{40	,	3898},	// VC : 3680	692mA
	{41	,	3890},	// VC : 3672	719mA
	{43	,	3882},	// VC : 3660	745mA
	{44	,	3874},	// VC : 3652	772mA
	{46	,	3866},	// VC : 3644	798mA
	{47	,	3859},	// VC : 3633	825mA
	{49	,	3853},	// VC : 3625	852mA
	{50	,	3846},	// VC : 3615	878mA
	{52	,	3839},	// VC : 3606	905mA
	{53	,	3834},	// VC : 3598	931mA
	{55	,	3829},	// VC : 3590	958mA
	{56	,	3822},	// VC : 3583	985mA
	{58	,	3818},	// VC : 3577	1011mA
	{59	,	3813},	// VC : 3567	1038mA
	{61	,	3807},	// VC : 3560	1064mA
	{62	,	3801},	// VC : 3553	1091mA
	{64	,	3797},	// VC : 3544	1118mA
	{65	,	3792},	// VC : 3539	1144mA
	{67	,	3785},	// VC : 3530	1171mA
	{69	,	3780},	// VC : 3521	1198mA
	{70	,	3775},	// VC : 3515	1224mA
	{72	,	3766},	// VC : 3501	1251mA
	{73	,	3759},	// VC : 3494	1277mA
	{75	,	3750},	// VC : 3480	1304mA
	{76	,	3739},	// VC : 3466	1331mA
	{78	,	3726},	// VC : 3450	1357mA
	{79	,	3714},	// VC : 3433	1384mA
	{81	,	3707},	// VC : 3421	1410mA
	{82	,	3704},	// VC : 3412	1437mA
	{84	,	3701},	// VC : 3401	1464mA
	{85	,	3698},	// VC : 3387	1490mA
	{87	,	3695},	// VC : 3369	1517mA
	{88	,	3691},	// VC : 3349	1543mA
	{90	,	3675},	// VC : 3325	1570mA
	{91	,	3645},	// VC : 3281	1597mA
	{93	,	3614},	// VC : 3231	1623mA
	{94	,	3582},	// VC : 3180	1650mA
	{96	,	3542},	// VC : 3116	1677mA
	{97	,	3495},	// VC : 3042	1703mA
	{99	,	3441},	// VC : 2949	1730mA
	{100	,	3379},	// VC : 2818	1756mA
	{100	,	3343},	// VC : 2799	1773mA
	{100	,	3319},	// VC : 2799	1784mA
	{100	,	3298},	// VC : 2796	1793mA
	{100	,	3281},	// VC : 2800	1800mA
	{100	,	3267},	// VC : 2797	1805mA
	{100	,	3253},	// VC : 2800	1810mA
	{100	,	3244},	// VC : 2799	1814mA
	{100	,	3234},	// VC : 2800	1817mA
	{100	,	3226},	// VC : 2800	1820mA
	{100	,	3216},	// VC : 2795	1822mA
	{100	,	3209},	// VC : 2800	1824mA
	{100	,	3202},	// VC : 2794	1826mA
	{100	,	3197},	// VC : 2796	1828mA
	{100	,	3191},	// VC : 2793	1829mA
	{100	,	3187},	// VC : 2797	1831mA
	{100	,	3181},	// VC : 2798	1832mA
	{100	,	3176},	// VC : 2791	1833mA
	{100	,	3172},	// VC : 2795	1834mA
	{100	,	3167},	// VC : 2790	1835mA
	{100	,	3162},	// VC : 2799	1835mA
	{100	,	3158},	// VC : 2790	1836mA
	{100	,	3155},	// VC : 2793	1837mA
	{100	,	3151},	// VC : 2792	1837mA
	{100	,	3145},	// VC : 2788	1838mA
	{100	,	3144},	// VC : 2795	1838mA
	{100	,	3140},	// VC : 2789	1839mA
	{100	,	3137},	// VC : 2787	1839mA
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2_LGC[] =
{
	{0	,	4281},	// VC : 4281	0mA
	{2	,	4245},	// VC : 4061	27mA
	{3	,	4226},	// VC : 4032	53mA
	{5	,	4210},	// VC : 4011	80mA
	{6	,	4194},	// VC : 3992	106mA
	{8	,	4179},	// VC : 3977	133mA
	{9	,	4166},	// VC : 3960	160mA
	{11	,	4152},	// VC : 3945	186mA
	{12	,	4138},	// VC : 3930	213mA
	{14	,	4125},	// VC : 3912	240mA
	{15	,	4111},	// VC : 3899	266mA
	{17	,	4097},	// VC : 3885	293mA
	{18	,	4086},	// VC : 3870	319mA
	{20	,	4075},	// VC : 3852	346mA
	{21	,	4061},	// VC : 3834	373mA
	{23	,	4048},	// VC : 3817	399mA
	{24	,	4034},	// VC : 3806	426mA
	{26	,	4021},	// VC : 3790	452mA
	{27	,	4008},	// VC : 3779	479mA
	{29	,	3993},	// VC : 3764	506mA
	{30	,	3979},	// VC : 3753	532mA
	{32	,	3964},	// VC : 3738	559mA
	{33	,	3948},	// VC : 3728	585mA
	{35	,	3933},	// VC : 3714	612mA
	{37	,	3921},	// VC : 3703	639mA
	{38	,	3909},	// VC : 3691	665mA
	{40	,	3898},	// VC : 3680	692mA
	{41	,	3890},	// VC : 3672	719mA
	{43	,	3882},	// VC : 3660	745mA
	{44	,	3874},	// VC : 3652	772mA
	{46	,	3866},	// VC : 3644	798mA
	{47	,	3859},	// VC : 3633	825mA
	{49	,	3853},	// VC : 3625	852mA
	{50	,	3846},	// VC : 3615	878mA
	{52	,	3839},	// VC : 3606	905mA
	{53	,	3834},	// VC : 3598	931mA
	{55	,	3829},	// VC : 3590	958mA
	{56	,	3822},	// VC : 3583	985mA
	{58	,	3818},	// VC : 3577	1011mA
	{59	,	3813},	// VC : 3567	1038mA
	{61	,	3807},	// VC : 3560	1064mA
	{62	,	3801},	// VC : 3553	1091mA
	{64	,	3797},	// VC : 3544	1118mA
	{65	,	3792},	// VC : 3539	1144mA
	{67	,	3785},	// VC : 3530	1171mA
	{69	,	3780},	// VC : 3521	1198mA
	{70	,	3775},	// VC : 3515	1224mA
	{72	,	3766},	// VC : 3501	1251mA
	{73	,	3759},	// VC : 3494	1277mA
	{75	,	3750},	// VC : 3480	1304mA
	{76	,	3739},	// VC : 3466	1331mA
	{78	,	3726},	// VC : 3450	1357mA
	{79	,	3714},	// VC : 3433	1384mA
	{81	,	3707},	// VC : 3421	1410mA
	{82	,	3704},	// VC : 3412	1437mA
	{84	,	3701},	// VC : 3401	1464mA
	{85	,	3698},	// VC : 3387	1490mA
	{87	,	3695},	// VC : 3369	1517mA
	{88	,	3691},	// VC : 3349	1543mA
	{90	,	3675},	// VC : 3325	1570mA
	{91	,	3645},	// VC : 3281	1597mA
	{93	,	3614},	// VC : 3231	1623mA
	{94	,	3582},	// VC : 3180	1650mA
	{96	,	3542},	// VC : 3116	1677mA
	{97	,	3495},	// VC : 3042	1703mA
	{99	,	3441},	// VC : 2949	1730mA
	{100	,	3379},	// VC : 2818	1756mA
	{100	,	3343},	// VC : 2799	1773mA
	{100	,	3319},	// VC : 2799	1784mA
	{100	,	3298},	// VC : 2796	1793mA
	{100	,	3281},	// VC : 2800	1800mA
	{100	,	3267},	// VC : 2797	1805mA
	{100	,	3253},	// VC : 2800	1810mA
	{100	,	3244},	// VC : 2799	1814mA
	{100	,	3234},	// VC : 2800	1817mA
	{100	,	3226},	// VC : 2800	1820mA
	{100	,	3216},	// VC : 2795	1822mA
	{100	,	3209},	// VC : 2800	1824mA
	{100	,	3202},	// VC : 2794	1826mA
	{100	,	3197},	// VC : 2796	1828mA
	{100	,	3191},	// VC : 2793	1829mA
	{100	,	3187},	// VC : 2797	1831mA
	{100	,	3181},	// VC : 2798	1832mA
	{100	,	3176},	// VC : 2791	1833mA
	{100	,	3172},	// VC : 2795	1834mA
	{100	,	3167},	// VC : 2790	1835mA
	{100	,	3162},	// VC : 2799	1835mA
	{100	,	3158},	// VC : 2790	1836mA
	{100	,	3155},	// VC : 2793	1837mA
	{100	,	3151},	// VC : 2792	1837mA
	{100	,	3145},	// VC : 2788	1838mA
	{100	,	3144},	// VC : 2795	1838mA
	{100	,	3140},	// VC : 2789	1839mA
	{100	,	3137},	// VC : 2787	1839mA
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3_LGC[] =
{
	{0	,	4332},	// VC : 4332	0mA
	{1	,	4315},	// VC : 4255	27mA
	{3	,	4300},	// VC : 4239	53mA
	{4	,	4284},	// VC : 4224	80mA
	{5	,	4271},	// VC : 4209	106mA
	{7	,	4256},	// VC : 4194	133mA
	{8	,	4241},	// VC : 4178	160mA
	{9	,	4227},	// VC : 4164	186mA
	{11	,	4213},	// VC : 4150	213mA
	{12	,	4199},	// VC : 4135	240mA
	{13	,	4185},	// VC : 4122	266mA
	{15	,	4171},	// VC : 4107	293mA
	{16	,	4157},	// VC : 4093	319mA
	{18	,	4143},	// VC : 4078	346mA
	{19	,	4130},	// VC : 4064	373mA
	{20	,	4117},	// VC : 4051	399mA
	{22	,	4104},	// VC : 4037	426mA
	{23	,	4091},	// VC : 4025	452mA
	{24	,	4078},	// VC : 4011	479mA
	{26	,	4066},	// VC : 3997	506mA
	{27	,	4055},	// VC : 3985	532mA
	{28	,	4043},	// VC : 3973	559mA
	{30	,	4032},	// VC : 3960	585mA
	{31	,	4019},	// VC : 3948	612mA
	{32	,	4008},	// VC : 3936	639mA
	{34	,	3997},	// VC : 3924	665mA
	{35	,	3987},	// VC : 3911	692mA
	{36	,	3976},	// VC : 3899	719mA
	{38	,	3965},	// VC : 3886	745mA
	{39	,	3950},	// VC : 3874	772mA
	{40	,	3933},	// VC : 3862	798mA
	{42	,	3916},	// VC : 3849	825mA
	{43	,	3903},	// VC : 3840	852mA
	{45	,	3894},	// VC : 3829	878mA
	{46	,	3885},	// VC : 3822	905mA
	{47	,	3876},	// VC : 3814	931mA
	{49	,	3869},	// VC : 3805	958mA
	{50	,	3862},	// VC : 3797	985mA
	{51	,	3854},	// VC : 3790	1011mA
	{53	,	3849},	// VC : 3782	1038mA
	{54	,	3842},	// VC : 3776	1064mA
	{55	,	3835},	// VC : 3768	1091mA
	{57	,	3829},	// VC : 3761	1118mA
	{58	,	3824},	// VC : 3754	1144mA
	{59	,	3817},	// VC : 3748	1171mA
	{61	,	3813},	// VC : 3742	1198mA
	{62	,	3806},	// VC : 3736	1224mA
	{63	,	3801},	// VC : 3731	1251mA
	{65	,	3793},	// VC : 3724	1277mA
	{66	,	3782},	// VC : 3716	1304mA
	{67	,	3773},	// VC : 3707	1331mA
	{69	,	3767},	// VC : 3699	1357mA
	{70	,	3758},	// VC : 3693	1384mA
	{71	,	3751},	// VC : 3684	1410mA
	{73	,	3742},	// VC : 3677	1437mA
	{74	,	3735},	// VC : 3670	1464mA
	{76	,	3726},	// VC : 3661	1490mA
	{77	,	3715},	// VC : 3649	1517mA
	{78	,	3702},	// VC : 3638	1543mA
	{80	,	3691},	// VC : 3623	1570mA
	{81	,	3682},	// VC : 3617	1597mA
	{82	,	3679},	// VC : 3614	1623mA
	{84	,	3677},	// VC : 3611	1650mA
	{85	,	3674},	// VC : 3607	1677mA
	{86	,	3672},	// VC : 3603	1703mA
	{88	,	3667},	// VC : 3597	1730mA
	{89	,	3652},	// VC : 3578	1756mA
	{90	,	3639},	// VC : 3546	1783mA
	{92	,	3616},	// VC : 3523	1810mA
	{93	,	3590},	// VC : 3494	1836mA
	{94	,	3560},	// VC : 3461	1863mA
	{96	,	3524},	// VC : 3421	1889mA
	{97	,	3485},	// VC : 3376	1916mA
	{98	,	3448},	// VC : 3332	1943mA
	{100	,	3408},	// VC : 3283	1969mA
	{100	,	3356},	// VC : 3222	1996mA
	{100	,	3280},	// VC : 3129	2022mA
	{100	,	3159},	// VC : 2952	2049mA
	{100	,	3044},	// VC : 2797	2063mA
	{100	,	2990},	// VC : 2798	2068mA
	{100	,	2960},	// VC : 2796	2071mA
	{100	,	2942},	// VC : 2797	2073mA
	{100	,	2927},	// VC : 2794	2074mA
	{100	,	2918},	// VC : 2796	2076mA
	{100	,	2906},	// VC : 2791	2077mA
	{100	,	2903},	// VC : 2797	2078mA
	{100	,	2896},	// VC : 2793	2078mA
	{100	,	2894},	// VC : 2800	2079mA
	{100	,	2889},	// VC : 2793	2079mA
	{100	,	2888},	// VC : 2799	2080mA
	{100	,	2882},	// VC : 2792	2080mA
	{100	,	2882},	// VC : 2792	2081mA
	{100	,	2882},	// VC : 2795	2081mA
	{100	,	2879},	// VC : 2794	2081mA
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature_LGC[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },

};

#define R_PROFILE_SIZE_LGC sizeof(r_profile_t2_LGC) / sizeof(R_PROFILE_STRUC);
// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0_LGC[] =
{
	{753	,	4265},		// VC : 4265	0mA
	{703	,	4245},		// VC : 3964	27mA
	{725	,	4228},		// VC : 3938	53mA
	{738	,	4210},		// VC : 3915	80mA
	{750	,	4194},		// VC : 3894	106mA
	{760	,	4175},		// VC : 3871	133mA
	{795	,	4158},		// VC : 3840	160mA
	{823	,	4138},		// VC : 3809	186mA
	{870	,	4117},		// VC : 3769	213mA
	{910	,	4089},		// VC : 3725	240mA
	{993	,	4060},		// VC : 3663	266mA
	{1060	,	4037},		// VC : 3613	293mA
	{1080	,	4021},		// VC : 3589	319mA
	{1090	,	4005},		// VC : 3569	346mA
	{1093	,	3990},		// VC : 3553	373mA
	{1093	,	3977},		// VC : 3540	399mA
	{1095	,	3965},		// VC : 3527	426mA
	{1118	,	3953},		// VC : 3506	452mA
	{1123	,	3941},		// VC : 3492	479mA
	{1113	,	3927},		// VC : 3482	506mA
	{1108	,	3913},		// VC : 3470	532mA
	{1100	,	3899},		// VC : 3459	559mA
	{1115	,	3888},		// VC : 3442	585mA
	{1128	,	3878},		// VC : 3427	612mA
	{1133	,	3869},		// VC : 3416	639mA
	{1145	,	3861},		// VC : 3403	665mA
	{1150	,	3853},		// VC : 3393	692mA
	{1158	,	3847},		// VC : 3384	719mA
	{1168	,	3840},		// VC : 3373	745mA
	{1168	,	3834},		// VC : 3367	772mA
	{1175	,	3828},		// VC : 3358	798mA
	{1183	,	3821},		// VC : 3348	825mA
	{1198	,	3817},		// VC : 3338	852mA
	{1193	,	3811},		// VC : 3334	878mA
	{1200	,	3807},		// VC : 3327	905mA
	{1213	,	3801},		// VC : 3316	931mA
	{1240	,	3798},		// VC : 3302	958mA
	{1245	,	3793},		// VC : 3295	985mA
	{1265	,	3789},		// VC : 3283	1011mA
	{1278	,	3785},		// VC : 3274	1038mA
	{1278	,	3778},		// VC : 3267	1064mA
	{1298	,	3773},		// VC : 3254	1091mA
	{1320	,	3766},		// VC : 3238	1118mA
	{1340	,	3758},		// VC : 3222	1144mA
	{1355	,	3748},		// VC : 3206	1171mA
	{1378	,	3739},		// VC : 3188	1198mA
	{1398	,	3730},		// VC : 3171	1224mA
	{1423	,	3719},		// VC : 3150	1251mA
	{1453	,	3712},		// VC : 3131	1277mA
	{1485	,	3706},		// VC : 3112	1304mA
	{1520	,	3699},		// VC : 3091	1331mA
	{1565	,	3694},		// VC : 3068	1357mA
	{1608	,	3686},		// VC : 3043	1384mA
	{1648	,	3672},		// VC : 3013	1410mA
	{1670	,	3642},		// VC : 2974	1437mA
	{1700	,	3593},		// VC : 2913	1464mA
	{1763	,	3529},		// VC : 2824	1490mA
	{1738	,	3494},		// VC : 2799	1505mA
	{1693	,	3474},		// VC : 2797	1514mA
	{1645	,	3457},		// VC : 2799	1521mA
	{1613	,	3444},		// VC : 2799	1527mA
	{1595	,	3436},		// VC : 2798	1532mA
	{1575	,	3427},		// VC : 2797	1536mA
	{1553	,	3418},		// VC : 2797	1540mA
	{1535	,	3412},		// VC : 2798	1544mA
	{1525	,	3406},		// VC : 2796	1547mA
	{1505	,	3399},		// VC : 2797	1550mA
	{1493	,	3395},		// VC : 2798	1552mA
	{1480	,	3390},		// VC : 2798	1554mA
	{1470	,	3386},		// VC : 2798	1556mA
	{1458	,	3382},		// VC : 2799	1558mA
	{1453	,	3378},		// VC : 2797	1560mA
	{1438	,	3375},		// VC : 2800	1562mA
	{1433	,	3372},		// VC : 2799	1563mA
	{1435	,	3367},		// VC : 2793	1565mA
	{1425	,	3365},		// VC : 2795	1566mA
	{1410	,	3363},		// VC : 2799	1568mA
	{1410	,	3361},		// VC : 2797	1569mA
	{1398	,	3359},		// VC : 2800	1570mA
	{1393	,	3356},		// VC : 2799	1571mA
	{1390	,	3355},		// VC : 2799	1572mA
	{1380	,	3350},		// VC : 2798	1573mA
	{1393	,	3347},		// VC : 2790	1575mA
	{1375	,	3346},		// VC : 2796	1575mA
	{1365	,	3345},		// VC : 2799	1576mA
	{1363	,	3343},		// VC : 2798	1577mA
	{1365	,	3341},		// VC : 2795	1578mA
	{1350	,	3338},		// VC : 2798	1579mA
	{1353	,	3336},		// VC : 2795	1580mA
	{1345	,	3334},		// VC : 2796	1580mA
	{1335	,	3333},		// VC : 2799	1581mA
	{1353	,	3330},		// VC : 2789	1582mA
	{1325	,	3329},		// VC : 2799	1582mA
	{1333	,	3328},		// VC : 2795	1583mA
};

// T1 0C
R_PROFILE_STRUC r_profile_t1_LGC[] =
{
	{460	,	4281},		// VC : 4281	0mA
	{460	,	4245},		// VC : 4061	27mA
	{485	,	4226},		// VC : 4032	53mA
	{498	,	4210},		// VC : 4011	80mA
	{505	,	4194},		// VC : 3992	106mA
	{505	,	4179},		// VC : 3977	133mA
	{515	,	4166},		// VC : 3960	160mA
	{518	,	4152},		// VC : 3945	186mA
	{520	,	4138},		// VC : 3930	213mA
	{533	,	4125},		// VC : 3912	240mA
	{530	,	4111},		// VC : 3899	266mA
	{530	,	4097},		// VC : 3885	293mA
	{540	,	4086},		// VC : 3870	319mA
	{558	,	4075},		// VC : 3852	346mA
	{568	,	4061},		// VC : 3834	373mA
	{578	,	4048},		// VC : 3817	399mA
	{570	,	4034},		// VC : 3806	426mA
	{578	,	4021},		// VC : 3790	452mA
	{573	,	4008},		// VC : 3779	479mA
	{573	,	3993},		// VC : 3764	506mA
	{565	,	3979},		// VC : 3753	532mA
	{565	,	3964},		// VC : 3738	559mA
	{550	,	3948},		// VC : 3728	585mA
	{548	,	3933},		// VC : 3714	612mA
	{545	,	3921},		// VC : 3703	639mA
	{545	,	3909},		// VC : 3691	665mA
	{545	,	3898},		// VC : 3680	692mA
	{545	,	3890},		// VC : 3672	719mA
	{555	,	3882},		// VC : 3660	745mA
	{555	,	3874},		// VC : 3652	772mA
	{555	,	3866},		// VC : 3644	798mA
	{565	,	3859},		// VC : 3633	825mA
	{570	,	3853},		// VC : 3625	852mA
	{578	,	3846},		// VC : 3615	878mA
	{583	,	3839},		// VC : 3606	905mA
	{590	,	3834},		// VC : 3598	931mA
	{598	,	3829},		// VC : 3590	958mA
	{598	,	3822},		// VC : 3583	985mA
	{603	,	3818},		// VC : 3577	1011mA
	{615	,	3813},		// VC : 3567	1038mA
	{618	,	3807},		// VC : 3560	1064mA
	{620	,	3801},		// VC : 3553	1091mA
	{633	,	3797},		// VC : 3544	1118mA
	{633	,	3792},		// VC : 3539	1144mA
	{638	,	3785},		// VC : 3530	1171mA
	{648	,	3780},		// VC : 3521	1198mA
	{650	,	3775},		// VC : 3515	1224mA
	{663	,	3766},		// VC : 3501	1251mA
	{663	,	3759},		// VC : 3494	1277mA
	{675	,	3750},		// VC : 3480	1304mA
	{683	,	3739},		// VC : 3466	1331mA
	{690	,	3726},		// VC : 3450	1357mA
	{703	,	3714},		// VC : 3433	1384mA
	{715	,	3707},		// VC : 3421	1410mA
	{730	,	3704},		// VC : 3412	1437mA
	{750	,	3701},		// VC : 3401	1464mA
	{778	,	3698},		// VC : 3387	1490mA
	{815	,	3695},		// VC : 3369	1517mA
	{855	,	3691},		// VC : 3349	1543mA
	{875	,	3675},		// VC : 3325	1570mA
	{910	,	3645},		// VC : 3281	1597mA
	{958	,	3614},		// VC : 3231	1623mA
	{1005	,	3582},		// VC : 3180	1650mA
	{1065	,	3542},		// VC : 3116	1677mA
	{1133	,	3495},		// VC : 3042	1703mA
	{1230	,	3441},		// VC : 2949	1730mA
	{1403	,	3379},		// VC : 2818	1756mA
	{1360	,	3343},		// VC : 2799	1773mA
	{1300	,	3319},		// VC : 2799	1784mA
	{1255	,	3298},		// VC : 2796	1793mA
	{1203	,	3281},		// VC : 2800	1800mA
	{1175	,	3267},		// VC : 2797	1805mA
	{1133	,	3253},		// VC : 2800	1810mA
	{1113	,	3244},		// VC : 2799	1814mA
	{1085	,	3234},		// VC : 2800	1817mA
	{1065	,	3226},		// VC : 2800	1820mA
	{1053	,	3216},		// VC : 2795	1822mA
	{1023	,	3209},		// VC : 2800	1824mA
	{1020	,	3202},		// VC : 2794	1826mA
	{1003	,	3197},		// VC : 2796	1828mA
	{995	,	3191},		// VC : 2793	1829mA
	{975	,	3187},		// VC : 2797	1831mA
	{958	,	3181},		// VC : 2798	1832mA
	{963	,	3176},		// VC : 2791	1833mA
	{943	,	3172},		// VC : 2795	1834mA
	{943	,	3167},		// VC : 2790	1835mA
	{908	,	3162},		// VC : 2799	1835mA
	{920	,	3158},		// VC : 2790	1836mA
	{905	,	3155},		// VC : 2793	1837mA
	{898	,	3151},		// VC : 2792	1837mA
	{893	,	3145},		// VC : 2788	1838mA
	{873	,	3144},		// VC : 2795	1838mA
	{878	,	3140},		// VC : 2789	1839mA
	{875	,	3137},		// VC : 2787	1839mA
};

// T2 25C
R_PROFILE_STRUC r_profile_t2_LGC[] =
{
	{203	,	4324},		// VC : 4324	0mA
	{203	,	4307},		// VC : 4226	27mA
	{200	,	4290},		// VC : 4210	53mA
	{208	,	4276},		// VC : 4193	80mA
	{208	,	4261},		// VC : 4178	107mA
	{205	,	4246},		// VC : 4164	133mA
	{208	,	4232},		// VC : 4149	160mA
	{208	,	4218},		// VC : 4135	186mA
	{208	,	4203},		// VC : 4120	213mA
	{210	,	4190},		// VC : 4106	240mA
	{215	,	4176},		// VC : 4090	266mA
	{220	,	4163},		// VC : 4075	293mA
	{215	,	4149},		// VC : 4063	320mA
	{218	,	4135},		// VC : 4048	346mA
	{223	,	4123},		// VC : 4034	373mA
	{223	,	4110},		// VC : 4021	399mA
	{223	,	4096},		// VC : 4007	426mA
	{230	,	4085},		// VC : 3993	453mA
	{233	,	4072},		// VC : 3979	479mA
	{238	,	4061},		// VC : 3966	506mA
	{238	,	4048},		// VC : 3953	533mA
	{243	,	4036},		// VC : 3939	559mA
	{248	,	4025},		// VC : 3926	586mA
	{248	,	4012},		// VC : 3913	612mA
	{250	,	4001},		// VC : 3901	639mA
	{253	,	3990},		// VC : 3889	666mA
	{255	,	3979},		// VC : 3877	692mA
	{250	,	3966},		// VC : 3866	719mA
	{240	,	3950},		// VC : 3854	745mA
	{230	,	3935},		// VC : 3843	772mA
	{218	,	3918},		// VC : 3831	799mA
	{215	,	3906},		// VC : 3820	825mA
	{215	,	3896},		// VC : 3810	852mA
	{215	,	3887},		// VC : 3801	879mA
	{215	,	3879},		// VC : 3793	905mA
	{213	,	3871},		// VC : 3786	932mA
	{215	,	3864},		// VC : 3778	958mA
	{220	,	3857},		// VC : 3769	985mA
	{223	,	3850},		// VC : 3761	1012mA
	{223	,	3844},		// VC : 3755	1038mA
	{220	,	3837},		// VC : 3749	1065mA
	{225	,	3831},		// VC : 3741	1092mA
	{230	,	3827},		// VC : 3735	1118mA
	{228	,	3820},		// VC : 3729	1145mA
	{230	,	3816},		// VC : 3724	1172mA
	{230	,	3810},		// VC : 3718	1198mA
	{230	,	3805},		// VC : 3713	1225mA
	{233	,	3800},		// VC : 3707	1251mA
	{235	,	3795},		// VC : 3701	1278mA
	{238	,	3790},		// VC : 3695	1305mA
	{233	,	3783},		// VC : 3690	1331mA
	{228	,	3776},		// VC : 3685	1358mA
	{228	,	3768},		// VC : 3677	1385mA
	{220	,	3759},		// VC : 3671	1411mA
	{223	,	3751},		// VC : 3662	1438mA
	{220	,	3742},		// VC : 3654	1465mA
	{225	,	3732},		// VC : 3642	1491mA
	{225	,	3720},		// VC : 3630	1518mA
	{223	,	3706},		// VC : 3617	1544mA
	{215	,	3696},		// VC : 3610	1571mA
	{215	,	3692},		// VC : 3606	1598mA
	{228	,	3692},		// VC : 3601	1624mA
	{228	,	3689},		// VC : 3598	1651mA
	{240	,	3687},		// VC : 3591	1677mA
	{258	,	3684},		// VC : 3581	1704mA
	{258	,	3669},		// VC : 3566	1731mA
	{310	,	3651},		// VC : 3527	1757mA
	{333	,	3629},		// VC : 3496	1784mA
	{345	,	3605},		// VC : 3467	1811mA
	{363	,	3574},		// VC : 3429	1837mA
	{383	,	3537},		// VC : 3384	1864mA
	{420	,	3499},		// VC : 3331	1891mA
	{480	,	3460},		// VC : 3268	1917mA
	{543	,	3421},		// VC : 3204	1944mA
	{615	,	3377},		// VC : 3131	1970mA
	{718	,	3315},		// VC : 3028	1997mA
	{920	,	3227},		// VC : 2859	2024mA
	{900	,	3160},		// VC : 2800	2036mA
	{773	,	3104},		// VC : 2795	2043mA
	{665	,	3060},		// VC : 2794	2048mA
	{583	,	3028},		// VC : 2795	2051mA
	{520	,	3003},		// VC : 2795	2053mA
	{488	,	2986},		// VC : 2791	2055mA
	{445	,	2974},		// VC : 2796	2057mA
	{425	,	2961},		// VC : 2791	2058mA
	{398	,	2955},		// VC : 2796	2059mA
	{390	,	2950},		// VC : 2794	2059mA
	{378	,	2941},		// VC : 2790	2060mA
	{355	,	2940},		// VC : 2798	2061mA
	{350	,	2936},		// VC : 2796	2061mA
	{343	,	2930},		// VC : 2793	2062mA
	{345	,	2929},		// VC : 2791	2062mA
	{325	,	2928},		// VC : 2798	2062mA
	{328	,	2923},		// VC : 2792	2063mA
};

// T3 50C
R_PROFILE_STRUC r_profile_t3_LGC[] =
{
	{150	,	4332},		// VC : 4332	0mA
	{150	,	4315},		// VC : 4255	27mA
	{153	,	4300},		// VC : 4239	53mA
	{150	,	4284},		// VC : 4224	80mA
	{155	,	4271},		// VC : 4209	106mA
	{155	,	4256},		// VC : 4194	133mA
	{158	,	4241},		// VC : 4178	160mA
	{158	,	4227},		// VC : 4164	186mA
	{158	,	4213},		// VC : 4150	213mA
	{160	,	4199},		// VC : 4135	240mA
	{158	,	4185},		// VC : 4122	266mA
	{160	,	4171},		// VC : 4107	293mA
	{160	,	4157},		// VC : 4093	319mA
	{163	,	4143},		// VC : 4078	346mA
	{165	,	4130},		// VC : 4064	373mA
	{165	,	4117},		// VC : 4051	399mA
	{168	,	4104},		// VC : 4037	426mA
	{165	,	4091},		// VC : 4025	452mA
	{168	,	4078},		// VC : 4011	479mA
	{173	,	4066},		// VC : 3997	506mA
	{175	,	4055},		// VC : 3985	532mA
	{175	,	4043},		// VC : 3973	559mA
	{180	,	4032},		// VC : 3960	585mA
	{178	,	4019},		// VC : 3948	612mA
	{180	,	4008},		// VC : 3936	639mA
	{183	,	3997},		// VC : 3924	665mA
	{190	,	3987},		// VC : 3911	692mA
	{193	,	3976},		// VC : 3899	719mA
	{198	,	3965},		// VC : 3886	745mA
	{190	,	3950},		// VC : 3874	772mA
	{178	,	3933},		// VC : 3862	798mA
	{168	,	3916},		// VC : 3849	825mA
	{158	,	3903},		// VC : 3840	852mA
	{163	,	3894},		// VC : 3829	878mA
	{158	,	3885},		// VC : 3822	905mA
	{155	,	3876},		// VC : 3814	931mA
	{160	,	3869},		// VC : 3805	958mA
	{163	,	3862},		// VC : 3797	985mA
	{160	,	3854},		// VC : 3790	1011mA
	{168	,	3849},		// VC : 3782	1038mA
	{165	,	3842},		// VC : 3776	1064mA
	{168	,	3835},		// VC : 3768	1091mA
	{170	,	3829},		// VC : 3761	1118mA
	{175	,	3824},		// VC : 3754	1144mA
	{173	,	3817},		// VC : 3748	1171mA
	{178	,	3813},		// VC : 3742	1198mA
	{175	,	3806},		// VC : 3736	1224mA
	{175	,	3801},		// VC : 3731	1251mA
	{173	,	3793},		// VC : 3724	1277mA
	{165	,	3782},		// VC : 3716	1304mA
	{165	,	3773},		// VC : 3707	1331mA
	{170	,	3767},		// VC : 3699	1357mA
	{163	,	3758},		// VC : 3693	1384mA
	{168	,	3751},		// VC : 3684	1410mA
	{163	,	3742},		// VC : 3677	1437mA
	{163	,	3735},		// VC : 3670	1464mA
	{163	,	3726},		// VC : 3661	1490mA
	{165	,	3715},		// VC : 3649	1517mA
	{160	,	3702},		// VC : 3638	1543mA
	{170	,	3691},		// VC : 3623	1570mA
	{163	,	3682},		// VC : 3617	1597mA
	{163	,	3679},		// VC : 3614	1623mA
	{165	,	3677},		// VC : 3611	1650mA
	{168	,	3674},		// VC : 3607	1677mA
	{173	,	3672},		// VC : 3603	1703mA
	{175	,	3667},		// VC : 3597	1730mA
	{185	,	3652},		// VC : 3578	1756mA
	{233	,	3639},		// VC : 3546	1783mA
	{233	,	3616},		// VC : 3523	1810mA
	{240	,	3590},		// VC : 3494	1836mA
	{248	,	3560},		// VC : 3461	1863mA
	{258	,	3524},		// VC : 3421	1889mA
	{273	,	3485},		// VC : 3376	1916mA
	{290	,	3448},		// VC : 3332	1943mA
	{313	,	3408},		// VC : 3283	1969mA
	{335	,	3356},		// VC : 3222	1996mA
	{378	,	3280},		// VC : 3129	2022mA
	{518	,	3159},		// VC : 2952	2049mA
	{618	,	3044},		// VC : 2797	2063mA
	{480	,	2990},		// VC : 2798	2068mA
	{410	,	2960},		// VC : 2796	2071mA
	{363	,	2942},		// VC : 2797	2073mA
	{333	,	2927},		// VC : 2794	2074mA
	{305	,	2918},		// VC : 2796	2076mA
	{288	,	2906},		// VC : 2791	2077mA
	{265	,	2903},		// VC : 2797	2078mA
	{258	,	2896},		// VC : 2793	2078mA
	{235	,	2894},		// VC : 2800	2079mA
	{240	,	2889},		// VC : 2793	2079mA
	{223	,	2888},		// VC : 2799	2080mA
	{225	,	2882},		// VC : 2792	2080mA
	{225	,	2882},		// VC : 2792	2081mA
	{218	,	2882},		// VC : 2795	2081mA
	{213	,	2879},		// VC : 2794	2081mA
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature_LGC[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
};

#endif /* _CUST_BATTERY_METER_TABLE_LGC_H */
