#ifndef _CUST_BATTERY_METER_TABLE_LGC_H
#define _CUST_BATTERY_METER_TABLE_LGC_H

#define Q_MAX_POS_50_LGC		2946
#define Q_MAX_POS_25_LGC		2963
#define Q_MAX_POS_0_LGC			2841
#define Q_MAX_NEG_10_LGC		2542

#define Q_MAX_POS_50_H_CURRENT_LGC	2923
#define Q_MAX_POS_25_H_CURRENT_LGC	2928
#define Q_MAX_POS_0_H_CURRENT_LGC	2542
#define Q_MAX_NEG_10_H_CURRENT_LGC	1806

/* Battery profile data LG Chemical */

#define BATTERY_PROFILE_SIZE_LGC sizeof(battery_profile_t2_LGC) / sizeof(BATTERY_PROFILE_STRUC);
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0_LGC[] =
{
	{0	,	4288},	// VC : 4288	0mA
	{2	,	4258},	// VC : 4064	60mA
	{5	,	4228},	// VC : 4028	120mA
	{7	,	4194},	// VC : 3987	180mA
	{9	,	4159},	// VC : 3938	240mA
	{12	,	4126},	// VC : 3880	300mA
	{14	,	4100},	// VC : 3833	360mA
	{17	,	4078},	// VC : 3796	420mA
	{19	,	4053},	// VC : 3764	480mA
	{21	,	4029},	// VC : 3734	540mA
	{24	,	4006},	// VC : 3717	600mA
	{26	,	3986},	// VC : 3697	660mA
	{28	,	3968},	// VC : 3676	720mA
	{31	,	3951},	// VC : 3653	779mA
	{33	,	3936},	// VC : 3636	839mA
	{35	,	3918},	// VC : 3619	899mA
	{38	,	3900},	// VC : 3603	959mA
	{40	,	3883},	// VC : 3583	1019mA
	{42	,	3868},	// VC : 3564	1079mA
	{45	,	3852},	// VC : 3550	1139mA
	{47	,	3840},	// VC : 3539	1199mA
	{50	,	3829},	// VC : 3524	1259mA
	{52	,	3820},	// VC : 3506	1319mA
	{54	,	3812},	// VC : 3493	1379mA
	{57	,	3803},	// VC : 3483	1439mA
	{59	,	3798},	// VC : 3474	1499mA
	{61	,	3794},	// VC : 3461	1559mA
	{64	,	3791},	// VC : 3445	1619mA
	{66	,	3786},	// VC : 3428	1679mA
	{68	,	3784},	// VC : 3415	1739mA
	{71	,	3781},	// VC : 3402	1799mA
	{73	,	3776},	// VC : 3385	1859mA
	{75	,	3771},	// VC : 3359	1919mA
	{78	,	3763},	// VC : 3337	1979mA
	{80	,	3752},	// VC : 3317	2039mA
	{83	,	3741},	// VC : 3287	2098mA
	{85	,	3729},	// VC : 3253	2158mA
	{87	,	3718},	// VC : 3218	2218mA
	{89	,	3708},	// VC : 3198	2269mA
	{90	,	3705},	// VC : 3200	2296mA
	{91	,	3702},	// VC : 3200	2319mA
	{92	,	3700},	// VC : 3199	2337mA
	{93	,	3698},	// VC : 3199	2353mA
	{93	,	3695},	// VC : 3200	2368mA
	{94	,	3695},	// VC : 3200	2380mA
	{94	,	3693},	// VC : 3199	2392mA
	{94	,	3693},	// VC : 3199	2401mA
	{95	,	3692},	// VC : 3200	2411mA
	{95	,	3690},	// VC : 3199	2421mA
	{96	,	3689},	// VC : 3199	2428mA
	{96	,	3688},	// VC : 3197	2436mA
	{96	,	3689},	// VC : 3199	2442mA
	{96	,	3689},	// VC : 3199	2449mA
	{97	,	3688},	// VC : 3199	2456mA
	{97	,	3686},	// VC : 3200	2462mA
	{97	,	3686},	// VC : 3199	2468mA
	{97	,	3684},	// VC : 3198	2474mA
	{98	,	3684},	// VC : 3200	2480mA
	{98	,	3682},	// VC : 3199	2485mA
	{98	,	3681},	// VC : 3199	2489mA
	{98	,	3682},	// VC : 3198	2494mA
	{98	,	3680},	// VC : 3199	2499mA
	{98	,	3680},	// VC : 3199	2503mA
	{99	,	3678},	// VC : 3199	2507mA
	{99	,	3677},	// VC : 3199	2511mA
	{99	,	3677},	// VC : 3200	2515mA
	{99	,	3674},	// VC : 3199	2518mA
	{99	,	3674},	// VC : 3200	2521mA
	{99	,	3672},	// VC : 3198	2525mA
	{99	,	3670},	// VC : 3198	2528mA
	{100	,	3669},	// VC : 3197	2531mA
	{100	,	3668},	// VC : 3199	2533mA
	{100	,	3666},	// VC : 3199	2536mA
	{100	,	3664},	// VC : 3195	2538mA
	{100	,	3663},	// VC : 3196	2540mA
	{100	,	3661},	// VC : 3198	2542mA
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1_LGC[] =
{
	{0	,	4298},	// VC : 4298	0mA
	{2	,	4261},	// VC : 4125	60mA
	{4	,	4233},	// VC : 4093	120mA
	{6	,	4209},	// VC : 4067	180mA
	{8	,	4187},	// VC : 4043	240mA
	{11	,	4163},	// VC : 4018	300mA
	{13	,	4142},	// VC : 3993	360mA
	{15	,	4121},	// VC : 3972	420mA
	{17	,	4099},	// VC : 3949	480mA
	{19	,	4084},	// VC : 3928	540mA
	{21	,	4062},	// VC : 3901	599mA
	{23	,	4041},	// VC : 3876	659mA
	{25	,	4017},	// VC : 3852	719mA
	{27	,	3998},	// VC : 3833	779mA
	{30	,	3981},	// VC : 3819	839mA
	{32	,	3967},	// VC : 3799	899mA
	{34	,	3953},	// VC : 3783	959mA
	{36	,	3937},	// VC : 3767	1019mA
	{38	,	3919},	// VC : 3752	1079mA
	{40	,	3901},	// VC : 3736	1139mA
	{42	,	3881},	// VC : 3721	1199mA
	{44	,	3866},	// VC : 3708	1259mA
	{46	,	3852},	// VC : 3698	1319mA
	{49	,	3839},	// VC : 3684	1379mA
	{51	,	3829},	// VC : 3674	1439mA
	{53	,	3821},	// VC : 3663	1499mA
	{55	,	3813},	// VC : 3654	1559mA
	{57	,	3804},	// VC : 3643	1619mA
	{59	,	3799},	// VC : 3635	1679mA
	{61	,	3792},	// VC : 3624	1739mA
	{63	,	3788},	// VC : 3620	1799mA
	{65	,	3785},	// VC : 3611	1859mA
	{68	,	3783},	// VC : 3601	1919mA
	{70	,	3780},	// VC : 3595	1979mA
	{72	,	3778},	// VC : 3581	2039mA
	{74	,	3776},	// VC : 3572	2098mA
	{76	,	3771},	// VC : 3556	2158mA
	{78	,	3763},	// VC : 3536	2218mA
	{80	,	3754},	// VC : 3518	2278mA
	{82	,	3741},	// VC : 3494	2338mA
	{84	,	3724},	// VC : 3462	2398mA
	{87	,	3704},	// VC : 3433	2458mA
	{89	,	3696},	// VC : 3412	2518mA
	{91	,	3689},	// VC : 3382	2578mA
	{93	,	3683},	// VC : 3338	2638mA
	{95	,	3673},	// VC : 3283	2698mA
	{97	,	3630},	// VC : 3198	2751mA
	{98	,	3602},	// VC : 3199	2771mA
	{98	,	3584},	// VC : 3199	2782mA
	{98	,	3570},	// VC : 3199	2790mA
	{98	,	3558},	// VC : 3199	2796mA
	{99	,	3548},	// VC : 3198	2801mA
	{99	,	3541},	// VC : 3200	2806mA
	{99	,	3534},	// VC : 3198	2809mA
	{99	,	3526},	// VC : 3197	2813mA
	{99	,	3521},	// VC : 3197	2815mA
	{99	,	3517},	// VC : 3198	2818mA
	{99	,	3512},	// VC : 3197	2820mA
	{99	,	3507},	// VC : 3197	2822mA
	{99	,	3502},	// VC : 3199	2824mA
	{99	,	3498},	// VC : 3200	2826mA
	{100	,	3496},	// VC : 3200	2827mA
	{100	,	3491},	// VC : 3196	2829mA
	{100	,	3489},	// VC : 3197	2830mA
	{100	,	3486},	// VC : 3197	2831mA
	{100	,	3483},	// VC : 3199	2832mA
	{100	,	3480},	// VC : 3194	2834mA
	{100	,	3475},	// VC : 3195	2835mA
	{100	,	3474},	// VC : 3197	2836mA
	{100	,	3471},	// VC : 3192	2836mA
	{100	,	3468},	// VC : 3196	2837mA
	{100	,	3467},	// VC : 3198	2838mA
	{100	,	3463},	// VC : 3196	2839mA
	{100	,	3462},	// VC : 3194	2839mA
	{100	,	3460},	// VC : 3198	2840mA
	{100	,	3458},	// VC : 3190	2841mA
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2_LGC[] =
{
	{0	,	4330},	// VC : 4330	0mA
	{2	,	4299},	// VC : 4242	60mA
	{4	,	4275},	// VC : 4217	120mA
	{6	,	4250},	// VC : 4193	180mA
	{8	,	4227},	// VC : 4170	240mA
	{10	,	4203},	// VC : 4146	300mA
	{12	,	4180},	// VC : 4123	360mA
	{14	,	4159},	// VC : 4100	420mA
	{16	,	4137},	// VC : 4077	480mA
	{18	,	4116},	// VC : 4055	540mA
	{20	,	4097},	// VC : 4033	600mA
	{22	,	4076},	// VC : 4012	660mA
	{24	,	4058},	// VC : 3993	720mA
	{26	,	4037},	// VC : 3971	781mA
	{28	,	4018},	// VC : 3949	841mA
	{30	,	4000},	// VC : 3930	901mA
	{32	,	3985},	// VC : 3911	961mA
	{34	,	3970},	// VC : 3896	1021mA
	{36	,	3956},	// VC : 3880	1081mA
	{39	,	3941},	// VC : 3863	1141mA
	{41	,	3928},	// VC : 3847	1201mA
	{43	,	3911},	// VC : 3833	1261mA
	{45	,	3894},	// VC : 3817	1321mA
	{47	,	3871},	// VC : 3804	1381mA
	{49	,	3854},	// VC : 3793	1441mA
	{51	,	3839},	// VC : 3782	1501mA
	{53	,	3830},	// VC : 3771	1561mA
	{55	,	3821},	// VC : 3761	1621mA
	{57	,	3814},	// VC : 3753	1681mA
	{59	,	3805},	// VC : 3745	1741mA
	{61	,	3799},	// VC : 3737	1801mA
	{63	,	3793},	// VC : 3731	1861mA
	{65	,	3790},	// VC : 3724	1921mA
	{67	,	3785},	// VC : 3720	1981mA
	{69	,	3780},	// VC : 3715	2041mA
	{71	,	3776},	// VC : 3709	2101mA
	{73	,	3773},	// VC : 3706	2161mA
	{75	,	3770},	// VC : 3702	2221mA
	{77	,	3763},	// VC : 3697	2281mA
	{79	,	3755},	// VC : 3690	2341mA
	{81	,	3746},	// VC : 3679	2401mA
	{83	,	3735},	// VC : 3665	2461mA
	{85	,	3716},	// VC : 3647	2521mA
	{87	,	3696},	// VC : 3625	2581mA
	{89	,	3685},	// VC : 3615	2642mA
	{91	,	3682},	// VC : 3605	2702mA
	{93	,	3679},	// VC : 3594	2762mA
	{95	,	3671},	// VC : 3576	2822mA
	{97	,	3610},	// VC : 3515	2882mA
	{99	,	3480},	// VC : 3366	2942mA
	{100	,	3330},	// VC : 3199	2982mA
	{100	,	3300},	// VC : 3198	2989mA
	{100	,	3285},	// VC : 3200	2992mA
	{100	,	3279},	// VC : 3199	2994mA
	{100	,	3274},	// VC : 3198	2995mA
	{100	,	3270},	// VC : 3199	2996mA
	{100	,	3267},	// VC : 3200	2996mA
	{100	,	3265},	// VC : 3198	2997mA
	{100	,	3264},	// VC : 3200	2997mA
	{100	,	3264},	// VC : 3198	2997mA
	{100	,	3263},	// VC : 3199	2998mA
	{100	,	3263},	// VC : 3197	2998mA
	{100	,	3262},	// VC : 3199	2998mA
	{100	,	3262},	// VC : 3198	2998mA
	{100	,	3261},	// VC : 3198	2998mA
	{100	,	3260},	// VC : 3197	2999mA
	{100	,	3260},	// VC : 3195	2999mA
	{100	,	3259},	// VC : 3195	2999mA
	{100	,	3258},	// VC : 3193	2999mA
	{100	,	3258},	// VC : 3195	2999mA
	{100	,	3258},	// VC : 3198	2999mA
	{100	,	3256},	// VC : 3193	2999mA
	{100	,	3256},	// VC : 3192	3000mA
	{100	,	3254},	// VC : 3190	3000mA
	{100	,	3253},	// VC : 3190	3000mA
	{100	,	3253},	// VC : 3192	3000mA
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3_LGC[] =
{
	{0	,	4336},	// VC : 4336	0mA
	{2	,	4309},	// VC : 4262	60mA
	{4	,	4284},	// VC : 4236	120mA
	{6	,	4260},	// VC : 4214	180mA
	{8	,	4236},	// VC : 4190	240mA
	{10	,	4213},	// VC : 4167	300mA
	{12	,	4190},	// VC : 4142	360mA
	{14	,	4169},	// VC : 4119	420mA
	{16	,	4147},	// VC : 4096	480mA
	{18	,	4125},	// VC : 4075	540mA
	{20	,	4104},	// VC : 4052	600mA
	{22	,	4083},	// VC : 4033	659mA
	{24	,	4064},	// VC : 4011	719mA
	{26	,	4044},	// VC : 3992	779mA
	{28	,	4026},	// VC : 3971	839mA
	{31	,	4008},	// VC : 3953	899mA
	{33	,	3991},	// VC : 3937	959mA
	{35	,	3976},	// VC : 3918	1019mA
	{37	,	3959},	// VC : 3903	1079mA
	{39	,	3945},	// VC : 3886	1139mA
	{41	,	3930},	// VC : 3869	1199mA
	{43	,	3917},	// VC : 3852	1259mA
	{45	,	3901},	// VC : 3835	1319mA
	{47	,	3877},	// VC : 3818	1379mA
	{49	,	3857},	// VC : 3806	1439mA
	{51	,	3844},	// VC : 3793	1499mA
	{53	,	3834},	// VC : 3784	1559mA
	{55	,	3824},	// VC : 3775	1619mA
	{57	,	3815},	// VC : 3766	1679mA
	{59	,	3806},	// VC : 3756	1739mA
	{61	,	3801},	// VC : 3749	1799mA
	{63	,	3794},	// VC : 3739	1859mA
	{65	,	3788},	// VC : 3734	1919mA
	{67	,	3783},	// VC : 3727	1979mA
	{69	,	3778},	// VC : 3721	2039mA
	{71	,	3772},	// VC : 3715	2099mA
	{73	,	3760},	// VC : 3707	2159mA
	{75	,	3750},	// VC : 3699	2219mA
	{77	,	3744},	// VC : 3693	2278mA
	{79	,	3736},	// VC : 3684	2338mA
	{81	,	3726},	// VC : 3674	2398mA
	{83	,	3717},	// VC : 3664	2458mA
	{85	,	3699},	// VC : 3647	2518mA
	{88	,	3677},	// VC : 3627	2578mA
	{90	,	3672},	// VC : 3619	2638mA
	{92	,	3669},	// VC : 3614	2698mA
	{94	,	3664},	// VC : 3607	2758mA
	{96	,	3650},	// VC : 3593	2818mA
	{98	,	3574},	// VC : 3514	2878mA
	{100	,	3433},	// VC : 3364	2938mA
	{100	,	3277},	// VC : 3200	2976mA
	{100	,	3258},	// VC : 3199	2979mA
	{100	,	3252},	// VC : 3199	2981mA
	{100	,	3251},	// VC : 3200	2982mA
	{100	,	3249},	// VC : 3199	2982mA
	{100	,	3248},	// VC : 3199	2983mA
	{100	,	3246},	// VC : 3198	2983mA
	{100	,	3245},	// VC : 3198	2983mA
	{100	,	3246},	// VC : 3198	2983mA
	{100	,	3246},	// VC : 3198	2984mA
	{100	,	3245},	// VC : 3199	2984mA
	{100	,	3244},	// VC : 3198	2984mA
	{100	,	3243},	// VC : 3199	2984mA
	{100	,	3244},	// VC : 3198	2984mA
	{100	,	3243},	// VC : 3198	2984mA
	{100	,	3242},	// VC : 3198	2984mA
	{100	,	3242},	// VC : 3195	2984mA
	{100	,	3241},	// VC : 3198	2984mA
	{100	,	3241},	// VC : 3196	2985mA
	{100	,	3242},	// VC : 3195	2985mA
	{100	,	3239},	// VC : 3194	2985mA
	{100	,	3240},	// VC : 3195	2985mA
	{100	,	3237},	// VC : 3193	2985mA
	{100	,	3238},	// VC : 3193	2985mA
	{100	,	3237},	// VC : 3192	2985mA
	{100	,	3235},	// VC : 3191	2985mA
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
};

#define R_PROFILE_SIZE_LGC sizeof(r_profile_t2_LGC) / sizeof(R_PROFILE_STRUC);
// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0_LGC[] =
{
	{360	,	4288},		// VC : 4288	0mA
	{485	,	4258},		// VC : 4064	60mA
	{500	,	4228},		// VC : 4028	120mA
	{518	,	4194},		// VC : 3987	180mA
	{553	,	4159},		// VC : 3938	240mA
	{615	,	4126},		// VC : 3880	300mA
	{668	,	4100},		// VC : 3833	360mA
	{705	,	4078},		// VC : 3796	420mA
	{723	,	4053},		// VC : 3764	480mA
	{738	,	4029},		// VC : 3734	540mA
	{723	,	4006},		// VC : 3717	600mA
	{723	,	3986},		// VC : 3697	660mA
	{730	,	3968},		// VC : 3676	720mA
	{745	,	3951},		// VC : 3653	779mA
	{750	,	3936},		// VC : 3636	839mA
	{748	,	3918},		// VC : 3619	899mA
	{743	,	3900},		// VC : 3603	959mA
	{750	,	3883},		// VC : 3583	1019mA
	{760	,	3868},		// VC : 3564	1079mA
	{755	,	3852},		// VC : 3550	1139mA
	{753	,	3840},		// VC : 3539	1199mA
	{763	,	3829},		// VC : 3524	1259mA
	{785	,	3820},		// VC : 3506	1319mA
	{798	,	3812},		// VC : 3493	1379mA
	{800	,	3803},		// VC : 3483	1439mA
	{810	,	3798},		// VC : 3474	1499mA
	{833	,	3794},		// VC : 3461	1559mA
	{865	,	3791},		// VC : 3445	1619mA
	{895	,	3786},		// VC : 3428	1679mA
	{923	,	3784},		// VC : 3415	1739mA
	{948	,	3781},		// VC : 3402	1799mA
	{978	,	3776},		// VC : 3385	1859mA
	{1030	,	3771},		// VC : 3359	1919mA
	{1065	,	3763},		// VC : 3337	1979mA
	{1088	,	3752},		// VC : 3317	2039mA
	{1135	,	3741},		// VC : 3287	2098mA
	{1190	,	3729},		// VC : 3253	2158mA
	{1250	,	3718},		// VC : 3218	2218mA
	{1275	,	3708},		// VC : 3198	2269mA
	{1263	,	3705},		// VC : 3200	2296mA
	{1255	,	3702},		// VC : 3200	2319mA
	{1253	,	3700},		// VC : 3199	2337mA
	{1248	,	3698},		// VC : 3199	2353mA
	{1238	,	3695},		// VC : 3200	2368mA
	{1238	,	3695},		// VC : 3200	2380mA
	{1235	,	3693},		// VC : 3199	2392mA
	{1235	,	3693},		// VC : 3199	2401mA
	{1230	,	3692},		// VC : 3200	2411mA
	{1228	,	3690},		// VC : 3199	2421mA
	{1225	,	3689},		// VC : 3199	2428mA
	{1228	,	3688},		// VC : 3197	2436mA
	{1225	,	3689},		// VC : 3199	2442mA
	{1225	,	3689},		// VC : 3199	2449mA
	{1223	,	3688},		// VC : 3199	2456mA
	{1215	,	3686},		// VC : 3200	2462mA
	{1218	,	3686},		// VC : 3199	2468mA
	{1215	,	3684},		// VC : 3198	2474mA
	{1210	,	3684},		// VC : 3200	2480mA
	{1208	,	3682},		// VC : 3199	2485mA
	{1205	,	3681},		// VC : 3199	2489mA
	{1210	,	3682},		// VC : 3198	2494mA
	{1203	,	3680},		// VC : 3199	2499mA
	{1203	,	3680},		// VC : 3199	2503mA
	{1198	,	3678},		// VC : 3199	2507mA
	{1195	,	3677},		// VC : 3199	2511mA
	{1193	,	3677},		// VC : 3200	2515mA
	{1188	,	3674},		// VC : 3199	2518mA
	{1185	,	3674},		// VC : 3200	2521mA
	{1185	,	3672},		// VC : 3198	2525mA
	{1180	,	3670},		// VC : 3198	2528mA
	{1180	,	3669},		// VC : 3197	2531mA
	{1173	,	3668},		// VC : 3199	2533mA
	{1168	,	3666},		// VC : 3199	2536mA
	{1173	,	3664},		// VC : 3195	2538mA
	{1168	,	3663},		// VC : 3196	2540mA
	{1158	,	3661},		// VC : 3198	2542mA
};

// T1 0C
R_PROFILE_STRUC r_profile_t1_LGC[] =
{
	{268	,	4298},		// VC : 4298	0mA
	{340	,	4261},		// VC : 4125	60mA
	{350	,	4233},		// VC : 4093	120mA
	{355	,	4209},		// VC : 4067	180mA
	{360	,	4187},		// VC : 4043	240mA
	{363	,	4163},		// VC : 4018	300mA
	{373	,	4142},		// VC : 3993	360mA
	{373	,	4121},		// VC : 3972	420mA
	{375	,	4099},		// VC : 3949	480mA
	{390	,	4084},		// VC : 3928	540mA
	{403	,	4062},		// VC : 3901	599mA
	{413	,	4041},		// VC : 3876	659mA
	{413	,	4017},		// VC : 3852	719mA
	{413	,	3998},		// VC : 3833	779mA
	{405	,	3981},		// VC : 3819	839mA
	{420	,	3967},		// VC : 3799	899mA
	{425	,	3953},		// VC : 3783	959mA
	{425	,	3937},		// VC : 3767	1019mA
	{418	,	3919},		// VC : 3752	1079mA
	{413	,	3901},		// VC : 3736	1139mA
	{400	,	3881},		// VC : 3721	1199mA
	{395	,	3866},		// VC : 3708	1259mA
	{385	,	3852},		// VC : 3698	1319mA
	{388	,	3839},		// VC : 3684	1379mA
	{388	,	3829},		// VC : 3674	1439mA
	{395	,	3821},		// VC : 3663	1499mA
	{398	,	3813},		// VC : 3654	1559mA
	{403	,	3804},		// VC : 3643	1619mA
	{410	,	3799},		// VC : 3635	1679mA
	{420	,	3792},		// VC : 3624	1739mA
	{420	,	3788},		// VC : 3620	1799mA
	{435	,	3785},		// VC : 3611	1859mA
	{455	,	3783},		// VC : 3601	1919mA
	{463	,	3780},		// VC : 3595	1979mA
	{493	,	3778},		// VC : 3581	2039mA
	{510	,	3776},		// VC : 3572	2098mA
	{538	,	3771},		// VC : 3556	2158mA
	{568	,	3763},		// VC : 3536	2218mA
	{590	,	3754},		// VC : 3518	2278mA
	{618	,	3741},		// VC : 3494	2338mA
	{655	,	3724},		// VC : 3462	2398mA
	{678	,	3704},		// VC : 3433	2458mA
	{710	,	3696},		// VC : 3412	2518mA
	{768	,	3689},		// VC : 3382	2578mA
	{863	,	3683},		// VC : 3338	2638mA
	{975	,	3673},		// VC : 3283	2698mA
	{1080	,	3630},		// VC : 3198	2751mA
	{1008	,	3602},		// VC : 3199	2771mA
	{963	,	3584},		// VC : 3199	2782mA
	{928	,	3570},		// VC : 3199	2790mA
	{898	,	3558},		// VC : 3199	2796mA
	{875	,	3548},		// VC : 3198	2801mA
	{853	,	3541},		// VC : 3200	2806mA
	{840	,	3534},		// VC : 3198	2809mA
	{823	,	3526},		// VC : 3197	2813mA
	{810	,	3521},		// VC : 3197	2815mA
	{798	,	3517},		// VC : 3198	2818mA
	{788	,	3512},		// VC : 3197	2820mA
	{775	,	3507},		// VC : 3197	2822mA
	{758	,	3502},		// VC : 3199	2824mA
	{745	,	3498},		// VC : 3200	2826mA
	{740	,	3496},		// VC : 3200	2827mA
	{738	,	3491},		// VC : 3196	2829mA
	{730	,	3489},		// VC : 3197	2830mA
	{723	,	3486},		// VC : 3197	2831mA
	{710	,	3483},		// VC : 3199	2832mA
	{715	,	3480},		// VC : 3194	2834mA
	{700	,	3475},		// VC : 3195	2835mA
	{693	,	3474},		// VC : 3197	2836mA
	{698	,	3471},		// VC : 3192	2836mA
	{680	,	3468},		// VC : 3196	2837mA
	{673	,	3467},		// VC : 3198	2838mA
	{668	,	3463},		// VC : 3196	2839mA
	{670	,	3462},		// VC : 3194	2839mA
	{655	,	3460},		// VC : 3198	2840mA
	{670	,	3458},		// VC : 3190	2841mA
};

// T2 25C
R_PROFILE_STRUC r_profile_t2_LGC[] =
{
	{150	,	4330},		// VC : 4330	0mA
	{143	,	4299},		// VC : 4242	60mA
	{145	,	4275},		// VC : 4217	120mA
	{143	,	4250},		// VC : 4193	180mA
	{143	,	4227},		// VC : 4170	240mA
	{143	,	4203},		// VC : 4146	300mA
	{143	,	4180},		// VC : 4123	360mA
	{148	,	4159},		// VC : 4100	420mA
	{150	,	4137},		// VC : 4077	480mA
	{153	,	4116},		// VC : 4055	540mA
	{160	,	4097},		// VC : 4033	600mA
	{160	,	4076},		// VC : 4012	660mA
	{163	,	4058},		// VC : 3993	720mA
	{165	,	4037},		// VC : 3971	781mA
	{173	,	4018},		// VC : 3949	841mA
	{175	,	4000},		// VC : 3930	901mA
	{185	,	3985},		// VC : 3911	961mA
	{185	,	3970},		// VC : 3896	1021mA
	{190	,	3956},		// VC : 3880	1081mA
	{195	,	3941},		// VC : 3863	1141mA
	{203	,	3928},		// VC : 3847	1201mA
	{195	,	3911},		// VC : 3833	1261mA
	{193	,	3894},		// VC : 3817	1321mA
	{168	,	3871},		// VC : 3804	1381mA
	{153	,	3854},		// VC : 3793	1441mA
	{143	,	3839},		// VC : 3782	1501mA
	{148	,	3830},		// VC : 3771	1561mA
	{150	,	3821},		// VC : 3761	1621mA
	{153	,	3814},		// VC : 3753	1681mA
	{150	,	3805},		// VC : 3745	1741mA
	{155	,	3799},		// VC : 3737	1801mA
	{155	,	3793},		// VC : 3731	1861mA
	{165	,	3790},		// VC : 3724	1921mA
	{163	,	3785},		// VC : 3720	1981mA
	{163	,	3780},		// VC : 3715	2041mA
	{168	,	3776},		// VC : 3709	2101mA
	{168	,	3773},		// VC : 3706	2161mA
	{170	,	3770},		// VC : 3702	2221mA
	{165	,	3763},		// VC : 3697	2281mA
	{163	,	3755},		// VC : 3690	2341mA
	{168	,	3746},		// VC : 3679	2401mA
	{175	,	3735},		// VC : 3665	2461mA
	{173	,	3716},		// VC : 3647	2521mA
	{178	,	3696},		// VC : 3625	2581mA
	{175	,	3685},		// VC : 3615	2642mA
	{193	,	3682},		// VC : 3605	2702mA
	{213	,	3679},		// VC : 3594	2762mA
	{238	,	3671},		// VC : 3576	2822mA
	{238	,	3610},		// VC : 3515	2882mA
	{285	,	3480},		// VC : 3366	2942mA
	{328	,	3330},		// VC : 3199	2982mA
	{255	,	3300},		// VC : 3198	2989mA
	{213	,	3285},		// VC : 3200	2992mA
	{200	,	3279},		// VC : 3199	2994mA
	{190	,	3274},		// VC : 3198	2995mA
	{178	,	3270},		// VC : 3199	2996mA
	{168	,	3267},		// VC : 3200	2996mA
	{168	,	3265},		// VC : 3198	2997mA
	{160	,	3264},		// VC : 3200	2997mA
	{165	,	3264},		// VC : 3198	2997mA
	{160	,	3263},		// VC : 3199	2998mA
	{165	,	3263},		// VC : 3197	2998mA
	{158	,	3262},		// VC : 3199	2998mA
	{160	,	3262},		// VC : 3198	2998mA
	{158	,	3261},		// VC : 3198	2998mA
	{158	,	3260},		// VC : 3197	2999mA
	{163	,	3260},		// VC : 3195	2999mA
	{160	,	3259},		// VC : 3195	2999mA
	{163	,	3258},		// VC : 3193	2999mA
	{158	,	3258},		// VC : 3195	2999mA
	{150	,	3258},		// VC : 3198	2999mA
	{158	,	3256},		// VC : 3193	2999mA
	{160	,	3256},		// VC : 3192	3000mA
	{160	,	3254},		// VC : 3190	3000mA
	{158	,	3253},		// VC : 3190	3000mA
	{153	,	3253},		// VC : 3192	3000mA
};

// T3 50C
R_PROFILE_STRUC r_profile_t3_LGC[] =
{
	{150	,	4336},		// VC : 4336	0mA
	{118	,	4309},		// VC : 4262	60mA
	{120	,	4284},		// VC : 4236	120mA
	{115	,	4260},		// VC : 4214	180mA
	{115	,	4236},		// VC : 4190	240mA
	{115	,	4213},		// VC : 4167	300mA
	{120	,	4190},		// VC : 4142	360mA
	{125	,	4169},		// VC : 4119	420mA
	{128	,	4147},		// VC : 4096	480mA
	{125	,	4125},		// VC : 4075	540mA
	{130	,	4104},		// VC : 4052	600mA
	{125	,	4083},		// VC : 4033	659mA
	{133	,	4064},		// VC : 4011	719mA
	{130	,	4044},		// VC : 3992	779mA
	{138	,	4026},		// VC : 3971	839mA
	{138	,	4008},		// VC : 3953	899mA
	{135	,	3991},		// VC : 3937	959mA
	{145	,	3976},		// VC : 3918	1019mA
	{140	,	3959},		// VC : 3903	1079mA
	{148	,	3945},		// VC : 3886	1139mA
	{153	,	3930},		// VC : 3869	1199mA
	{163	,	3917},		// VC : 3852	1259mA
	{165	,	3901},		// VC : 3835	1319mA
	{148	,	3877},		// VC : 3818	1379mA
	{128	,	3857},		// VC : 3806	1439mA
	{128	,	3844},		// VC : 3793	1499mA
	{125	,	3834},		// VC : 3784	1559mA
	{123	,	3824},		// VC : 3775	1619mA
	{123	,	3815},		// VC : 3766	1679mA
	{125	,	3806},		// VC : 3756	1739mA
	{130	,	3801},		// VC : 3749	1799mA
	{138	,	3794},		// VC : 3739	1859mA
	{135	,	3788},		// VC : 3734	1919mA
	{140	,	3783},		// VC : 3727	1979mA
	{143	,	3778},		// VC : 3721	2039mA
	{143	,	3772},		// VC : 3715	2099mA
	{133	,	3760},		// VC : 3707	2159mA
	{128	,	3750},		// VC : 3699	2219mA
	{128	,	3744},		// VC : 3693	2278mA
	{130	,	3736},		// VC : 3684	2338mA
	{130	,	3726},		// VC : 3674	2398mA
	{133	,	3717},		// VC : 3664	2458mA
	{130	,	3699},		// VC : 3647	2518mA
	{125	,	3677},		// VC : 3627	2578mA
	{133	,	3672},		// VC : 3619	2638mA
	{138	,	3669},		// VC : 3614	2698mA
	{143	,	3664},		// VC : 3607	2758mA
	{143	,	3650},		// VC : 3593	2818mA
	{150	,	3574},		// VC : 3514	2878mA
	{173	,	3433},		// VC : 3364	2938mA
	{193	,	3277},		// VC : 3200	2976mA
	{148	,	3258},		// VC : 3199	2979mA
	{133	,	3252},		// VC : 3199	2981mA
	{128	,	3251},		// VC : 3200	2982mA
	{125	,	3249},		// VC : 3199	2982mA
	{123	,	3248},		// VC : 3199	2983mA
	{120	,	3246},		// VC : 3198	2983mA
	{118	,	3245},		// VC : 3198	2983mA
	{120	,	3246},		// VC : 3198	2983mA
	{120	,	3246},		// VC : 3198	2984mA
	{115	,	3245},		// VC : 3199	2984mA
	{115	,	3244},		// VC : 3198	2984mA
	{110	,	3243},		// VC : 3199	2984mA
	{115	,	3244},		// VC : 3198	2984mA
	{113	,	3243},		// VC : 3198	2984mA
	{110	,	3242},		// VC : 3198	2984mA
	{118	,	3242},		// VC : 3195	2984mA
	{108	,	3241},		// VC : 3198	2984mA
	{113	,	3241},		// VC : 3196	2985mA
	{118	,	3242},		// VC : 3195	2985mA
	{113	,	3239},		// VC : 3194	2985mA
	{113	,	3240},		// VC : 3195	2985mA
	{110	,	3237},		// VC : 3193	2985mA
	{113	,	3238},		// VC : 3193	2985mA
	{113	,	3237},		// VC : 3192	2985mA
	{110	,	3235},		// VC : 3191	2985mA
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
};

#endif /* _CUST_BATTERY_METER_TABLE_LGC_H */
