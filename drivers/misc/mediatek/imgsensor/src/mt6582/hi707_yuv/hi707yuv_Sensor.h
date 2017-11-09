/*****************************************************************************
 *
 * Filename:
 * ---------
 *   sensor.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 *   Header file of Sensor driver
 *
 *
 * Author:
 * -------
 *   PC Huang (MTK02204)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/* SENSOR FULL SIZE */
   #ifndef __SENSOR_H
 #define __SENSOR_H

	//follow is define by jun
	/* SENSOR READ/WRITE ID */

#define HI707_IMAGE_SENSOR_QVGA_WIDTH       (320)
#define HI707_IMAGE_SENSOR_QVGA_HEIGHT      (240)
#define HI707_IMAGE_SENSOR_VGA_WIDTH        (640)
#define HI707_IMAGE_SENSOR_VGA_HEIGHT       (480)
#define HI707_IMAGE_SENSOR_SXGA_WIDTH       (1280)
#define HI707_IMAGE_SENSOR_SXGA_HEIGHT      (1024)

#define HI707_IMAGE_SENSOR_FULL_WIDTH	   HI707_IMAGE_SENSOR_VGA_WIDTH-12
#define HI707_IMAGE_SENSOR_FULL_HEIGHT	   HI707_IMAGE_SENSOR_VGA_HEIGHT-8

#define HI707_IMAGE_SENSOR_PV_WIDTH   HI707_IMAGE_SENSOR_VGA_WIDTH-12
#define HI707_IMAGE_SENSOR_PV_HEIGHT  HI707_IMAGE_SENSOR_VGA_HEIGHT-8

//SENSOR PIXEL/LINE NUMBERS IN ONE PERIOD
#define HI707_VGA_DEFAULT_PIXEL_NUMS		   (656)
#define HI707_VGA_DEFAULT_LINE_NUMS 		   (500)

#define HI707_QVGA_DEFAULT_PIXEL_NUMS		   (656)
#define HI707_QVGA_DEFAULT_LINE_NUMS		   (254)

/* MAX/MIN FRAME RATE (FRAMES PER SEC.) */
#define HI707_MIN_FRAMERATE_5					(50)
#define HI707_MIN_FRAMERATE_7_5 				(75)
#define HI707_MIN_FRAMERATE_10					(100)
#define HI707_MIN_FRAMERATE_15                  (150)

//Video Fixed Framerate
#define HI707_VIDEO_FIX_FRAMERATE_5 			(50)
#define HI707_VIDEO_FIX_FRAMERATE_7_5			(75)
#define HI707_VIDEO_FIX_FRAMERATE_10			(100)
#define HI707_VIDEO_FIX_FRAMERATE_15			(150)
#define HI707_VIDEO_FIX_FRAMERATE_20			(200)
#define HI707_VIDEO_FIX_FRAMERATE_25			(250)
#define HI707_VIDEO_FIX_FRAMERATE_30			(300)


#define HI707_WRITE_ID		0x60
#define HI707_READ_ID		0x61

	//#define HI707_SCCB_SLAVE_ADDR 0x60

typedef struct _SENSOR_INIT_INFO
{
	  kal_uint8 address;
	  kal_uint8 data;
}HI707_SENSOR_INIT_INFO;
typedef enum __VIDEO_MODE__
{
	  HI707_VIDEO_NORMAL = 0,
	  HI707_VIDEO_MPEG4,
	  HI707_VIDEO_MAX
} HI707_VIDEO_MODE;

struct HI707_sensor_STRUCT
{
      kal_bool first_init;
	  kal_bool Sensor_mode;                 //True: Preview Mode; False: Capture Mode
	  kal_bool night_mode;              //True: Night Mode; False: Auto Mode
	  kal_bool MPEG4_Video_mode;      //Video Mode: MJPEG or MPEG4
	  kal_uint8 mirror;
	  kal_uint32 pv_pclk;               //Preview Pclk
	  kal_uint32 cp_pclk;               //Capture Pclk
	  kal_uint16 pv_dummy_pixels;          //Dummy Pixels
	  kal_uint16 pv_dummy_lines;           //Dummy Lines
	  kal_uint16 cp_dummy_pixels;          //Dummy Pixels
	  kal_uint16 cp_dummy_lines;           //Dummy Lines
	  kal_uint16 fix_framerate;         //Fixed Framerate
	  kal_uint32 wb;
	  kal_uint32 exposure;
	  kal_uint32 effect;
	  kal_uint32 banding;
	  kal_uint16 pv_line_length;
	  kal_uint16 pv_frame_height;
	  kal_uint16 cp_line_length;
	  kal_uint16 cp_frame_height;
	  kal_uint16 video_current_frame_rate;
	  kal_uint16 SceneMode;
	  kal_uint16 video_fps;
};


typedef enum {
    SENSOR_MODE_INIT = 0,
    SENSOR_MODE_PREVIEW,
    SENSOR_MODE_VIDEO,
    SENSOR_MODE_ZSD,
    SENSOR_MODE_CAPTURE
} HI257_SENSOR_MODE;

kal_uint8 HI707_Init_Reg[2][858] = {
{ //60Hz

	0x03,0x00,
	0x01,0x71,//resetop.
	0x01,0x73,
	0x01,0x71,
	0x03,0x20,//page20
	0x10,0x1c,//aeoff
	0x03,0x22,//page22
	0x10,0x7b,//awboff
	0x03,0x00,
	0x08,0x0f,//ParallelNOOutput_PADOut
	0x10,0x00,//VDOCTL1[5:4]subsample:1,1/2,1/4,[0]preview_en
	0x11,0x90,//VDOCTL2,90:FFRoff,94:FFRon
	0x12,0x00,//CLK_CTL
	0x14,0x88,//[7]fix_frm_spd:preventhounting,[3]fix_frm_opt:inc.exp.time
	0x0b,0xaa,
	0x0c,0xaa,
	0x0d,0xaa,
	0xc0,0x95,
	0xc1,0x18,
	0xc2,0x91,
	0xc3,0x00,
	0xc4,0x01,

	0x03,0x00,
	0x20,0x00,//WINROW
	0x21,0x04,//-VGA:04,QVGA,QQVGA:02
	0x22,0x00,//WINCOL
	0x23,0x04,//-VGA,QVGA:04,QQVGA:02
	0x40,0x00,//HBLANK
	0x41,0x90,//-YUV422:0090,BAYER:0158
	0x42,0x00,//VSYNCH
	0x43,0x04,//-YUV422:0004,BAYER:0014

	0x80,0x2e,//don'ttouch
	0x81,0x7e,//don'ttouch
	0x82,0x90,//don'ttouch
	0x83,0x30,//don'ttouch
	0x84,0x2c,//don'ttouch
	0x85,0x4b,//don'ttouch
	0x86,0x01,//don'ttouch
	0x88,0x47,//don'ttouch
	0x89,0x48,//BLChold
	0x90,0x0a,//BLC_TIME_TH_ON
	0x91,0x0a,//BLC_TIME_TH_OFF
	0x92,0xa8,//98,//BLC_AG_TH_ON
	0x93,0xa0,//90,//BLC_AG_TH_OFF

	0x98,0x38,
	0x99,0x00,//41,//OutBLCLHC
	0xa0,0x02,//00,//DarkBLC
	0xa8,0x44,//42,//40,//NormalBLCLHC


	0x98,0x38,//don'ttouch
	0x99,0x40,//OutBLC
	0xa0,0x40,//DarkBLC
	0xa8,0x44,//NormalBLC44-->42



	0xc0,0x95,//PLLMode
	0xc1,0x18,
	0xc2,0x91,//[4]plldiv_en,[3:2]mipi4xclkdiv:bypass,1/2,1/4,1/8,[0]ispclkdiv:1/2,1/4
	0xc3,0x00,
	0xc4,0x01,

	/////////////////////////////Page2-AnalogCircuitControl
	0x03,0x02,
	0x10,0x00,//MODE_TEST
	0x11,0x00,//MODE_DEAD_TEST
	0x13,0x40,//MODE_ANA_TEST
	0x14,0x04,//MODE_MEMORY
	0x18,0x1c,//Analogmode
	0x19,0x00,//[0]pmos_off
	0x1a,0x00,
	0x1b,0x08,
	0x1c,0x9c,//DC-DC
	0x1d,0x03,
	0x20,0x33,//PXbias
	0x21,0x77,//ADC/ASPbias
	0x22,0xa7,//Mainbias
	0x23,0x32,//Clamp
	0x24,0x33,
	0x2b,0x40,//Fixedframecounterend
	0x2d,0x32,//Fixedframecounterstart
	0x31,0x99,//sharedcontrol
	0x32,0x00,
	0x33,0x00,
	0x34,0x3c,
	0x35,0x0d,
	0x3b,0x80,//SF60
	0x50,0x21,//timingcontrol1
	0x51,0x1C,
	0x52,0xaa,
	0x53,0x5a,
	0x54,0x30,
	0x55,0x10,
	0x56,0x0c,
	0x58,0x00,
	0x59,0x0F,
	0x60,0x34,//addr_en-Exp.//RowTimingControl
	0x61,0x3a,
	0x62,0x34,//rx1
	0x63,0x39,
	0x64,0x34,//rx2
	0x65,0x39,
	0x72,0x35,//tx1
	0x73,0x38,
	0x74,0x35,//tx2
	0x75,0x38,
	0x80,0x02,//addr_en-Read.
	0x81,0x2e,
	0x82,0x0d,//rx1
	0x83,0x10,
	0x84,0x0d,//rx2
	0x85,0x10,
	0x92,0x1d,//tx1
	0x93,0x20,
	0x94,0x1d,//tx2
	0x95,0x20,
	0xa0,0x03,//sx
	0xa1,0x2d,
	0xa4,0x2d,//sxb
	0xa5,0x03,
	0xa8,0x12,//wrst
	0xa9,0x1b,
	0xaa,0x22,//wsig
	0xab,0x2b,
	0xac,0x10,//rx_off_rst
	0xad,0x0e,//tx_off_rst
	0xb8,0x33,//rxpwr-exp.
	0xb9,0x35,
	0xbc,0x0c,//rxpwr-read
	0xbd,0x0e,
	0xc0,0x3a,//addr_en1-FixedExp.
	0xc1,0x3f,
	0xc2,0x3a,//addr_en2
	0xc3,0x3f,
	0xc4,0x3a,//sx1
	0xc5,0x3e,
	0xc6,0x3a,//sx2
	0xc7,0x3e,
	0xc8,0x3a,//rx1
	0xc9,0x3e,
	0xca,0x3a,//rx2
	0xcb,0x3e,
	0xcc,0x3b,//tx1
	0xcd,0x3d,
	0xce,0x3b,//tx2
	0xcf,0x3d,
	0xd0,0x33,//Exposuredomainvalid
	0xd1,0x3f,

	/////////////////////////////Page10
	0x03,0x10,//Page10-Format,ImageEffect
	0x10,0x03,//ISPCTL-[7:4]0:YUV322,6:BAYER,[1:0]VYUY,UYVY,YVYU,YUYV
	0x11,0x43,//-[0x1010:1011]YUV422:0343,BAYER:6000
	0x12,0x30,//Yoffet,dyoffseetenable
	0x40,0x00,
	0x41,0x00,//DYOFS00->10->00STEVE_130110(blackscenefacesaturation)
	0x48,0x80,//Contrast88->84_100318
	0x50,0xa0,//e0,//AGBRT
	0x60,0x0b,
	0x61,0x00,//default
	0x62,0x78,//SATB(1.4x)
	0x63,0x78,//SATR(1.2x)
	0x64,0x80,//a0,//AGSAT20130205
	0x66,0x90,//wht_th2
	0x67,0x36,//wht_gainDark(0.4x),Normal(0.75x)

	/////////////////////////////Page11
	0x03,0x11,
	0x10,0x25,//LPF_CTL1//0x01
	0x11,0x07,//1f,//TestSetting
	0x20,0x00,//LPF_AUTO_CTL
	0x21,0x60,//38,//LPF_PGA_TH
	0x23,0x0a,//LPF_TIME_TH
	0x60,0x13,//ZARA_SIGMA_TH//40->10
	0x61,0x85,
	0x62,0x00,//ZARA_HLVL_CTL
	0x63,0x00,//83,//ZARA_LLVL_CTL
	0x64,0x00,//83,//ZARA_DY_CTL
	0x67,0x70,//60,//70,//F0,//Dark
	0x68,0x24,//24,//30,//Middle
	0x69,0x04,//10,//High

	/////////////////////////////Page12
	0x03,0x12,//Page12-2D:YC1D,YC2D,DPC,Demosaic
	0x40,0xd3,//d6,//d7,//YC2D_LPF_CTL1//bc
	0x41,0x09,//YC2D_LPF_CTL2
	0x50,0x18,//10,//18,//TestSetting
	0x51,0x24,//TestSetting
	0x70,0x1f,//GBGR_CTL1//0x1f
	0x71,0x00,//TestSetting
	0x72,0x00,//TestSetting
	0x73,0x00,//TestSetting
	0x74,0x12,//GBGR_G_UNIT_TH//12
	0x75,0x12,//GBGR_RB_UNIT_TH//12
	0x76,0x20,//GBGR_EDGE_TH
	0x77,0x80,//GBGR_HLVL_TH
	0x78,0x88,//GBGR_HLVL_COMP
	0x79,0x18,//TestSetting

	0x90,0x3d,
	0x91,0x34,
	0x99,0x28,
	0x9c,0x05,//14Fordefect
	0x9d,0x08,//15Fordefect
	0x9e,0x28,
	0x9f,0x28,

	0xb0,0x7d,//75WhiteDefect
	0xb5,0x44,
	0xb6,0x82,
	0xb7,0x52,
	0xb8,0x44,
	0xb9,0x15,

	/////////////////////////////Page13
	0x03,0x13,//Page13-Sharpness
	0x10,0x01,
	0x11,0x8f,//89,//forresolution,131119
	0x12,0x14,
	0x13,0x19,
	0x14,0x08,//TestSetting
	0x20,0x05,//03,//SHARP_Negative//forresolution,131119
	0x21,0x05,//04,//03,//SHARP_Positive131105
	0x23,0x25,//SHARP_DY_CTL
	0x24,0x21,//40->33
	0x25,0x08,//SHARP_PGA_TH
	0x26,0x40,//TestSetting
	0x27,0x00,//TestSetting
	0x28,0x08,//TestSetting
	0x29,0x50,//AG_TH
	0x2a,0xe0,//regionratio
	0x2b,0x10,//TestSetting
	0x2c,0x28,//TestSetting
	0x2d,0x40,//TestSetting
	0x2e,0x00,//TestSetting
	0x2f,0x00,//TestSetting
	0x30,0x11,//TestSetting
	0x80,0x05,//SHARP2D_CTL
	0x81,0x07,//TestSetting
	0x90,0x05,//04,//SHARP2D_SLOPE//forresolution,131119
	0x91,0x06,//05,//SHARP2D_DIFF_CTL//forresolution,131119
	0x92,0x00,//SHARP2D_HI_CLIP
	0x93,0x30,//SHARP2D_DY_CTL
	0x94,0x30,//TestSetting
	0x95,0x10,//TestSetting

	/////////////////////////////Page14
	0x03,0x14,//Page14-LensShadingCorrection
	0x10,0x01,
	0x20,0x80,//60,//XCENLHC
	0x21,0x80,//YCEN
	0x22,0x7d,//_20131209//88,//7b,//6a,//50,
	0x23,0x5d,//_20131209//5c,//50,//44,//40,
	0x24,0x48,//_20131209//49,//44,//32,//3d,

	////////////////////////////15page
	0x03,0x15,
	0x10,0x03,
	0x14,0x52,//CMCOFSGM
	0x16,0x3a,//CMCOFSGL
	0x17,0x2f,//CMCSIGN

	0x30,0xf1,
	0x31,0x71,
	0x32,0x00,
	0x33,0x1f,
	0x34,0xe1,
	0x35,0x42,
	0x36,0x01,
	0x37,0x31,
	0x38,0x72,

	0x40,0x90,//CMCOFS
	0x41,0x82,
	0x42,0x12,
	0x43,0x86,
	0x44,0x92,
	0x45,0x18,
	0x46,0x84,
	0x47,0x02,
	0x48,0x02,
	////////////////////////////16page
	0x03,0x16,//gamma
	0x30,0x00,
	0x31,0x08,
	0x32,0x1c,
	0x33,0x2f,
	0x34,0x53,
	0x35,0x76,
	0x36,0x93,
	0x37,0xac,
	0x38,0xc0,
	0x39,0xd0,
	0x3a,0xdc,
	0x3b,0xed,
	0x3c,0xf4,//f7
	0x3d,0xf6,//fc
	0x3e,0xfa,//ff
	////////////////////////////17page
	0x03,0x17,
	0xc0,0x01,
	0xc4,0x4b,//3c,
	0xc5,0x3e,//32,
	/////////////////////////////Page20-AutoExposure
	0x03,0x20,
	0x10,0x0c,//AECTL
	0x11,0x04,
	0x18,0x30,//31,//130521,FlickerTest
	0x20,0x01,//FrameCTL
	0x28,0x27,//FineCTL
	0x29,0xa1,
	0x2a,0xf0,
	0x2b,0x34,
	0x2c,0x2b,//130521,FlickerTest
	0x39,0x22,
	0x3a,0xbe,//_140509 //de,
	0x3b,0x23,
	0x3c,0xde,

	//130521,FlickerTest
	0x60,0x71,//70,//0x71,//AEweight
	0x61,0x00,//0x11,
	0x62,0x71,//70,//0x71,
	0x63,0x11,//00,//0x11,
	0x68,0x32,//3c,//30,//AE_CEN
	0x69,0x6e,//64,//6a,
	0x6A,0x50,//27,//27,
	0x6B,0xa0,//bb,//bb,
	0x70,0x38,//36 //34, //lgit 20140328  //YTarge32
	0x76,0x88,//22,//Unlockbnd1
	0x77,0xfe,//02,//Unlockbnd2
	0x78,0x22,//23//22,20130524//12,//Yth1
	0x79,0x26,//Yth2
	0x7a,0x23,//Yth3
	0x7c,0x1c,//Yth2
	0x7d,0x22,//Yth4

	0x83,0x01,//EXPNormal20.00fps
	0x84,0x24,
	0x85,0xf8,
	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,
	0x88,0x02,//EXPMax(120Hz)10.00fps
	0x89,0x49,
	0x8a,0xf0,
	0xa0,0x02,//EXPMax(100Hz)10.00fps
	0xa1,0x49,
	0xa2,0xf0,
	0x8B,0x3a,//EXP100
	0x8C,0x98,
	0x8D,0x30,//EXP120
	0x8E,0xd4,
	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,
	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x98,0x8c,//OutdoorBRIGHT_MEASURE_TH
	0x99,0x23,

	0xb0,0x1d,
	0xb1,0x14,//14
	0xb2,0xb0,//a0,//80
	0xb3,0x17,//AGLVL//17
	0xb4,0x17,
	0xb5,0x3e,
	0xb6,0x2b,
	0xb7,0x24,
	0xb8,0x21,
	0xb9,0x1f,
	0xba,0x1e,
	0xbb,0x1d,
	0xbc,0x1c,
	0xbd,0x1b,//SteveNight

	0xc0,0x1a,//PGA_sky
	0xc3,0x48,//PGA_dark_on
	0xc4,0x48,//PGA_dark_off

	0x03,0x22,//Page22AWB
	0x10,0xe2,
	0x11,0x2E,//26,
	0x20,0x41,//01//69
	0x21,0x40,
	0x30,0x80,
	0x31,0x80,
	0x38,0x12,
	0x39,0x33,
	0x40,0xf3,//b8,//93,//f0,
	//STEVEYellowish
	0x41,0x54,//0x44,//0x54,
	0x42,0x33,//0x22,//0x33,
	0x43,0xf3,//0xf8,//0xf3,
	0x44,0x55,//0x55,//0x55,
	0x45,0x44,//0x44,//0x44,
	0x46,0x02,//0x08,//0x02,

	0x80,0x3b,//_20131209////40,//R
	0x81,0x20,//20,//G
	0x82,0x44,//_20131209////38,//B

	0x83,0x59,//58,//5a,//52,//RMAX
	0x84,0x20,//1d,//RMIN
	0x85,0x53,//BMAX5a
	0x86,0x24,//BMIN

	0x87,0x49,//48,//4a,//42
	0x88,0x3c,
	0x89,0x3e,
	0x8a,0x34,

	0x8b,0x00,//02,//0x08,//02,//OUTTH
	0x8d,0x24,//3a,//0x11,//22,
	0x8e,0x61,//b3,//0x11,//71,

	0x8f,0x63,//65,//0x63,
	0x90,0x60,//61,//0x60,
	0x91,0x5c,//5C,//0x5c,
	0x92,0x56,//56,//0x56,
	0x93,0x52,//4E,//0x52,
	0x94,0x4c,//43,//0x4c,
	0x95,0x3e,//3A,//0x3e,
	0x96,0x2f,//32,//0x2f,
	0x97,0x28,//2A,//0x28,
	0x98,0x23,//24,//0x23,
	0x99,0x21,//20,//0x21,
	0x9a,0x20,//1C,//0x20,
	0x9b,0x08,//0a,//0x07,

	/////////////////////////////
	//Page48MIPI/////////////
	/////////////////////////////
	0x03,0x48,
	//0x10,0x05,//05,
	0x11,0x0c,//04,//00,con
	0x16,0x88,//88,//c8,//c4,
	0x1a,0x00,//00,
	0x1b,0x35,//00,
	0x1c,0x03,//HSP_LPX//02,
	0x1d,0x05,//HSN_LPX//04,
	0x1e,0x07,//HS_ZERO//07,
	0x1f,0x03,//HS_TRAIL//05,
	0x20,0x00,//HS_EXIT//00,
	0x21,0xb8,//HS_SYNC
	0x28,0x00,//ADD
	0x30,0x05,//05,
	0x31,0x00,//00,
	0x32,0x07,//CLK_ZERO//06,
	0x35,0x01,//CLK_TRAIL//03,
	0x34,0x01,//CLK_PREPARE//02,
	0x36,0x01,//CLKP_LPX//01,
	0x37,0x03,//CLKN_LPX//03,
	0x38,0x02,//CLK_EXIT//00,
	0x39,0xef,//4a,
	0x3c,0x00,//00,
	0x3d,0xfa,//fa,
	0x3f,0x10,//10,
	0x40,0x00,//00,
	0x41,0x20,//20,
	0x42,0x00,//00,
	0x10,0x05,//05,

	0x03,0x20,
	0x10,0xec,//cc,//120hzfirst20130524
	0x03,0x22,//Page22AWB
	0x10,0xfb,

	//===StartStream==
	0x03,0x48,
	0x16,0x80,
	0x03,0x00,
	0x01,0x70,
	0x09,0x00,
	0x03,0x20,
	0x18,0x30
	//===================
},
{ //50Hz

	0x03,0x00,
	0x01,0x71,//resetop.
	0x01,0x73,
	0x01,0x71,
	0x03,0x20,//page20
	0x10,0x1c,//aeoff
	0x03,0x22,//page22
	0x10,0x7b,//awboff
	0x03,0x00,
	0x08,0x0f,//ParallelNOOutput_PADOut
	0x10,0x00,//VDOCTL1[5:4]subsample:1,1/2,1/4,[0]preview_en
	0x11,0x90,//VDOCTL2,90:FFRoff,94:FFRon
	0x12,0x00,//CLK_CTL
	0x14,0x88,//[7]fix_frm_spd:preventhounting,[3]fix_frm_opt:inc.exp.time
	0x0b,0xaa,
	0x0c,0xaa,
	0x0d,0xaa,
	0xc0,0x95,
	0xc1,0x18,
	0xc2,0x91,
	0xc3,0x00,
	0xc4,0x01,

	0x03,0x00,
	0x20,0x00,//WINROW
	0x21,0x04,//-VGA:04,QVGA,QQVGA:02
	0x22,0x00,//WINCOL
	0x23,0x04,//-VGA,QVGA:04,QQVGA:02
	0x40,0x00,//HBLANK
	0x41,0x90,//-YUV422:0090,BAYER:0158
	0x42,0x00,//VSYNCH
	0x43,0x04,//-YUV422:0004,BAYER:0014

	0x80,0x2e,//don'ttouch
	0x81,0x7e,//don'ttouch
	0x82,0x90,//don'ttouch
	0x83,0x30,//don'ttouch
	0x84,0x2c,//don'ttouch
	0x85,0x4b,//don'ttouch
	0x86,0x01,//don'ttouch
	0x88,0x47,//don'ttouch
	0x89,0x48,//BLChold
	0x90,0x0a,//BLC_TIME_TH_ON
	0x91,0x0a,//BLC_TIME_TH_OFF
	0x92,0xa8,//98,//BLC_AG_TH_ON
	0x93,0xa0,//90,//BLC_AG_TH_OFF

	0x98,0x38,
	0x99,0x00,//41,//OutBLCLHC
	0xa0,0x02,//00,//DarkBLC
	0xa8,0x44,//42,//40,//NormalBLCLHC


	0x98,0x38,//don'ttouch
	0x99,0x40,//OutBLC
	0xa0,0x40,//DarkBLC
	0xa8,0x44,//NormalBLC44-->42



	0xc0,0x95,//PLLMode
	0xc1,0x18,
	0xc2,0x91,//[4]plldiv_en,[3:2]mipi4xclkdiv:bypass,1/2,1/4,1/8,[0]ispclkdiv:1/2,1/4
	0xc3,0x00,
	0xc4,0x01,

	/////////////////////////////Page2-AnalogCircuitControl
	0x03,0x02,
	0x10,0x00,//MODE_TEST
	0x11,0x00,//MODE_DEAD_TEST
	0x13,0x40,//MODE_ANA_TEST
	0x14,0x04,//MODE_MEMORY
	0x18,0x1c,//Analogmode
	0x19,0x00,//[0]pmos_off
	0x1a,0x00,
	0x1b,0x08,
	0x1c,0x9c,//DC-DC
	0x1d,0x03,
	0x20,0x33,//PXbias
	0x21,0x77,//ADC/ASPbias
	0x22,0xa7,//Mainbias
	0x23,0x32,//Clamp
	0x24,0x33,
	0x2b,0x40,//Fixedframecounterend
	0x2d,0x32,//Fixedframecounterstart
	0x31,0x99,//sharedcontrol
	0x32,0x00,
	0x33,0x00,
	0x34,0x3c,
	0x35,0x0d,
	0x3b,0x80,//SF60
	0x50,0x21,//timingcontrol1
	0x51,0x1C,
	0x52,0xaa,
	0x53,0x5a,
	0x54,0x30,
	0x55,0x10,
	0x56,0x0c,
	0x58,0x00,
	0x59,0x0F,
	0x60,0x34,//addr_en-Exp.//RowTimingControl
	0x61,0x3a,
	0x62,0x34,//rx1
	0x63,0x39,
	0x64,0x34,//rx2
	0x65,0x39,
	0x72,0x35,//tx1
	0x73,0x38,
	0x74,0x35,//tx2
	0x75,0x38,
	0x80,0x02,//addr_en-Read.
	0x81,0x2e,
	0x82,0x0d,//rx1
	0x83,0x10,
	0x84,0x0d,//rx2
	0x85,0x10,
	0x92,0x1d,//tx1
	0x93,0x20,
	0x94,0x1d,//tx2
	0x95,0x20,
	0xa0,0x03,//sx
	0xa1,0x2d,
	0xa4,0x2d,//sxb
	0xa5,0x03,
	0xa8,0x12,//wrst
	0xa9,0x1b,
	0xaa,0x22,//wsig
	0xab,0x2b,
	0xac,0x10,//rx_off_rst
	0xad,0x0e,//tx_off_rst
	0xb8,0x33,//rxpwr-exp.
	0xb9,0x35,
	0xbc,0x0c,//rxpwr-read
	0xbd,0x0e,
	0xc0,0x3a,//addr_en1-FixedExp.
	0xc1,0x3f,
	0xc2,0x3a,//addr_en2
	0xc3,0x3f,
	0xc4,0x3a,//sx1
	0xc5,0x3e,
	0xc6,0x3a,//sx2
	0xc7,0x3e,
	0xc8,0x3a,//rx1
	0xc9,0x3e,
	0xca,0x3a,//rx2
	0xcb,0x3e,
	0xcc,0x3b,//tx1
	0xcd,0x3d,
	0xce,0x3b,//tx2
	0xcf,0x3d,
	0xd0,0x33,//Exposuredomainvalid
	0xd1,0x3f,

	/////////////////////////////Page10
	0x03,0x10,//Page10-Format,ImageEffect
	0x10,0x03,//ISPCTL-[7:4]0:YUV322,6:BAYER,[1:0]VYUY,UYVY,YVYU,YUYV
	0x11,0x43,//-[0x1010:1011]YUV422:0343,BAYER:6000
	0x12,0x30,//Yoffet,dyoffseetenable
	0x40,0x00,
	0x41,0x00,//DYOFS00->10->00STEVE_130110(blackscenefacesaturation)
	0x48,0x80,//Contrast88->84_100318
	0x50,0xa0,//e0,//AGBRT
	0x60,0x0b,
	0x61,0x00,//default
	0x62,0x78,//SATB(1.4x)
	0x63,0x78,//SATR(1.2x)
	0x64,0x80,//a0,//AGSAT20130205
	0x66,0x90,//wht_th2
	0x67,0x36,//wht_gainDark(0.4x),Normal(0.75x)

	/////////////////////////////Page11
	0x03,0x11,
	0x10,0x25,//LPF_CTL1//0x01
	0x11,0x07,//1f,//TestSetting
	0x20,0x00,//LPF_AUTO_CTL
	0x21,0x60,//38,//LPF_PGA_TH
	0x23,0x0a,//LPF_TIME_TH
	0x60,0x13,//ZARA_SIGMA_TH//40->10
	0x61,0x85,
	0x62,0x00,//ZARA_HLVL_CTL
	0x63,0x00,//83,//ZARA_LLVL_CTL
	0x64,0x00,//83,//ZARA_DY_CTL
	0x67,0x70,//60,//70,//F0,//Dark
	0x68,0x24,//24,//30,//Middle
	0x69,0x04,//10,//High

	/////////////////////////////Page12
	0x03,0x12,//Page12-2D:YC1D,YC2D,DPC,Demosaic
	0x40,0xd3,//d6,//d7,//YC2D_LPF_CTL1//bc
	0x41,0x09,//YC2D_LPF_CTL2
	0x50,0x18,//10,//18,//TestSetting
	0x51,0x24,//TestSetting
	0x70,0x1f,//GBGR_CTL1//0x1f
	0x71,0x00,//TestSetting
	0x72,0x00,//TestSetting
	0x73,0x00,//TestSetting
	0x74,0x12,//GBGR_G_UNIT_TH//12
	0x75,0x12,//GBGR_RB_UNIT_TH//12
	0x76,0x20,//GBGR_EDGE_TH
	0x77,0x80,//GBGR_HLVL_TH
	0x78,0x88,//GBGR_HLVL_COMP
	0x79,0x18,//TestSetting

	0x90,0x3d,
	0x91,0x34,
	0x99,0x28,
	0x9c,0x05,//14Fordefect
	0x9d,0x08,//15Fordefect
	0x9e,0x28,
	0x9f,0x28,

	0xb0,0x7d,//75WhiteDefect
	0xb5,0x44,
	0xb6,0x82,
	0xb7,0x52,
	0xb8,0x44,
	0xb9,0x15,

	/////////////////////////////Page13
	0x03,0x13,//Page13-Sharpness
	0x10,0x01,
	0x11,0x8f,//89,//forresolution,131119
	0x12,0x14,
	0x13,0x19,
	0x14,0x08,//TestSetting
	0x20,0x05,//03,//SHARP_Negative//forresolution,131119
	0x21,0x05,//04,//03,//SHARP_Positive131105
	0x23,0x25,//SHARP_DY_CTL
	0x24,0x21,//40->33
	0x25,0x08,//SHARP_PGA_TH
	0x26,0x40,//TestSetting
	0x27,0x00,//TestSetting
	0x28,0x08,//TestSetting
	0x29,0x50,//AG_TH
	0x2a,0xe0,//regionratio
	0x2b,0x10,//TestSetting
	0x2c,0x28,//TestSetting
	0x2d,0x40,//TestSetting
	0x2e,0x00,//TestSetting
	0x2f,0x00,//TestSetting
	0x30,0x11,//TestSetting
	0x80,0x05,//SHARP2D_CTL
	0x81,0x07,//TestSetting
	0x90,0x05,//04,//SHARP2D_SLOPE//forresolution,131119
	0x91,0x06,//05,//SHARP2D_DIFF_CTL//forresolution,131119
	0x92,0x00,//SHARP2D_HI_CLIP
	0x93,0x30,//SHARP2D_DY_CTL
	0x94,0x30,//TestSetting
	0x95,0x10,//TestSetting

	/////////////////////////////Page14
	0x03,0x14,//Page14-LensShadingCorrection
	0x10,0x01,
	0x20,0x80,//60,//XCENLHC
	0x21,0x80,//YCEN
	0x22,0x7d,//_20131209//88,//7b,//6a,//50,
	0x23,0x5d,//_20131209//5c,//50,//44,//40,
	0x24,0x48,//_20131209//49,//44,//32,//3d,

	////////////////////////////15page
	0x03,0x15,
	0x10,0x03,
	0x14,0x52,//CMCOFSGM
	0x16,0x3a,//CMCOFSGL
	0x17,0x2f,//CMCSIGN

	0x30,0xf1,
	0x31,0x71,
	0x32,0x00,
	0x33,0x1f,
	0x34,0xe1,
	0x35,0x42,
	0x36,0x01,
	0x37,0x31,
	0x38,0x72,

	0x40,0x90,//CMCOFS
	0x41,0x82,
	0x42,0x12,
	0x43,0x86,
	0x44,0x92,
	0x45,0x18,
	0x46,0x84,
	0x47,0x02,
	0x48,0x02,
	////////////////////////////16page
	0x03,0x16,//gamma
	0x30,0x00,
	0x31,0x08,
	0x32,0x1c,
	0x33,0x2f,
	0x34,0x53,
	0x35,0x76,
	0x36,0x93,
	0x37,0xac,
	0x38,0xc0,
	0x39,0xd0,
	0x3a,0xdc,
	0x3b,0xed,
	0x3c,0xf4,//f7
	0x3d,0xf6,//fc
	0x3e,0xfa,//ff
	////////////////////////////17page
	0x03,0x17,
	0xc0,0x01,
	0xc4,0x4b,//3c,
	0xc5,0x3e,//32,
	/////////////////////////////Page20-AutoExposure
	0x03,0x20,
	0x10,0x0c,//AECTL
	0x11,0x04,
	0x18,0x30,//31,//130521,FlickerTest
	0x20,0x01,//FrameCTL
	0x28,0x27,//FineCTL
	0x29,0xa1,
	0x2a,0xf0,
	0x2b,0x34,
	0x2c,0x2b,//130521,FlickerTest
	0x39,0x22,
	0x3a,0xbe,//_140509 //de,
	0x3b,0x23,
	0x3c,0xde,

	//130521,FlickerTest
	0x60,0x71,//70,//0x71,//AEweight
	0x61,0x00,//0x11,
	0x62,0x71,//70,//0x71,
	0x63,0x11,//00,//0x11,
	0x68,0x32,//3c,//30,//AE_CEN
	0x69,0x6e,//64,//6a,
	0x6A,0x50,//27,//27,
	0x6B,0xa0,//bb,//bb,
	0x70,0x38,//36 //34, //lgit 20140328  //YTarge32
	0x76,0x88,//22,//Unlockbnd1
	0x77,0xfe,//02,//Unlockbnd2
	0x78,0x22,//23//22,20130524//12,//Yth1
	0x79,0x26,//Yth2
	0x7a,0x23,//Yth3
	0x7c,0x1c,//Yth2
	0x7d,0x22,//Yth4

	0x83,0x01,//EXPNormal20.00fps
	0x84,0x24,
	0x85,0xf8,
	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,
	0x88,0x02,//EXPMax(120Hz)10.00fps
	0x89,0x49,
	0x8a,0xf0,
	0xa0,0x02,//EXPMax(100Hz)10.00fps
	0xa1,0x49,
	0xa2,0xf0,
	0x8B,0x3a,//EXP100
	0x8C,0x98,
	0x8D,0x30,//EXP120
	0x8E,0xd4,
	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,
	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x98,0x8c,//OutdoorBRIGHT_MEASURE_TH
	0x99,0x23,

	0xb0,0x1d,
	0xb1,0x14,//14
	0xb2,0xb0,//a0,//80
	0xb3,0x17,//AGLVL//17
	0xb4,0x17,
	0xb5,0x3e,
	0xb6,0x2b,
	0xb7,0x24,
	0xb8,0x21,
	0xb9,0x1f,
	0xba,0x1e,
	0xbb,0x1d,
	0xbc,0x1c,
	0xbd,0x1b,//SteveNight

	0xc0,0x1a,//PGA_sky
	0xc3,0x48,//PGA_dark_on
	0xc4,0x48,//PGA_dark_off

	0x03,0x22,//Page22AWB
	0x10,0xe2,
	0x11,0x2E,//26,
	0x20,0x41,//01//69
	0x21,0x40,
	0x30,0x80,
	0x31,0x80,
	0x38,0x12,
	0x39,0x33,
	0x40,0xf3,//b8,//93,//f0,
	//STEVEYellowish
	0x41,0x54,//0x44,//0x54,
	0x42,0x33,//0x22,//0x33,
	0x43,0xf3,//0xf8,//0xf3,
	0x44,0x55,//0x55,//0x55,
	0x45,0x44,//0x44,//0x44,
	0x46,0x02,//0x08,//0x02,

	0x80,0x3b,//_20131209////40,//R
	0x81,0x20,//20,//G
	0x82,0x44,//_20131209////38,//B

	0x83,0x59,//58,//5a,//52,//RMAX
	0x84,0x20,//1d,//RMIN
	0x85,0x53,//BMAX5a
	0x86,0x24,//BMIN

	0x87,0x49,//48,//4a,//42
	0x88,0x3c,
	0x89,0x3e,
	0x8a,0x34,

	0x8b,0x00,//02,//0x08,//02,//OUTTH
	0x8d,0x24,//3a,//0x11,//22,
	0x8e,0x61,//b3,//0x11,//71,

	0x8f,0x63,//65,//0x63,
	0x90,0x60,//61,//0x60,
	0x91,0x5c,//5C,//0x5c,
	0x92,0x56,//56,//0x56,
	0x93,0x52,//4E,//0x52,
	0x94,0x4c,//43,//0x4c,
	0x95,0x3e,//3A,//0x3e,
	0x96,0x2f,//32,//0x2f,
	0x97,0x28,//2A,//0x28,
	0x98,0x23,//24,//0x23,
	0x99,0x21,//20,//0x21,
	0x9a,0x20,//1C,//0x20,
	0x9b,0x08,//0a,//0x07,

	/////////////////////////////
	//Page48MIPI/////////////
	/////////////////////////////
	0x03,0x48,
	//0x10,0x05,//05,
	0x11,0x0c,//04,//00,con
	0x16,0x88,//88,//c8,//c4,
	0x1a,0x00,//00,
	0x1b,0x35,//00,
	0x1c,0x03,//HSP_LPX//02,
	0x1d,0x05,//HSN_LPX//04,
	0x1e,0x07,//HS_ZERO//07,
	0x1f,0x03,//HS_TRAIL//05,
	0x20,0x00,//HS_EXIT//00,
	0x21,0xb8,//HS_SYNC
	0x28,0x00,//ADD
	0x30,0x05,//05,
	0x31,0x00,//00,
	0x32,0x07,//CLK_ZERO//06,
	0x35,0x01,//CLK_TRAIL//03,
	0x34,0x01,//CLK_PREPARE//02,
	0x36,0x01,//CLKP_LPX//01,
	0x37,0x03,//CLKN_LPX//03,
	0x38,0x02,//CLK_EXIT//00,
	0x39,0xef,//4a,
	0x3c,0x00,//00,
	0x3d,0xfa,//fa,
	0x3f,0x10,//10,
	0x40,0x00,//00,
	0x41,0x20,//20,
	0x42,0x00,//00,
	0x10,0x05,//05,

	0x03,0x20,
	0x10,0xec,//cc,//120hzfirst20130524
	0x03,0x22,//Page22AWB
	0x10,0xfb,

	//===StartStream==
	0x03,0x48,
	0x16,0x80,
	0x03,0x00,
	0x01,0x70,
	0x09,0x00,
	0x03,0x20,
	0x18,0x30
	//===================
}
};

kal_uint8 HI707_Preview_Reg[2][86] = {
{ //60Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank4
	0x43,0x04,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x0a,//BLC_TIME_TH_ON
	0x91,0x0a,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup(Val),0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100(Val),0xf5:2/100(Fixed)
	0x30,0x78,//0x78:1/100(Val),0xf8:2/100(Fixed)(AE_Escape_CTL0x781/100secgainreleaseatunlock0)

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x02,//EXPMax(120Hz)10.00fps
	0x89,0x49,
	0x8a,0xf0,

	0xa0,0x02,//EXPMax(100Hz)10.00fps
	0xa1,0x49,
	0xa2,0xf0,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:FIXEDOFF,0x94:FixedON)
	0x01,0x70,//sleepOFF

	0x03,0x00,//dummy1
	0x03,0x00,//dummy2
	0x03,0x00//dummy3
},
{ //50Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank4
	0x43,0x04,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x0a,//BLC_TIME_TH_ON
	0x91,0x0a,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup(Val),0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100(Val),0xf5:2/100(Fixed)
	0x30,0x78,//0x78:1/100(Val),0xf8:2/100(Fixed)(AE_Escape_CTL0x781/100secgainreleaseatunlock0)

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x02,//EXPMax(120Hz)10.00fps
	0x89,0x49,
	0x8a,0xf0,

	0xa0,0x02,//EXPMax(100Hz)10.00fps
	0xa1,0x49,
	0xa2,0xf0,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:FIXEDOFF,0x94:FixedON)
	0x01,0x70,//sleepOFF

	0x03,0x00,//dummy1
	0x03,0x00,//dummy2
	0x03,0x00//dummy3
}
};

kal_uint8 HI707_Video_Reg_15fps[2][98] = {
{ //60Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x01,//Vblank430
	0x43,0xae,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x06,//BLC_TIME_TH_ON
	0x91,0x06,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	//60hz_15Fixed
	0x03,0x20,//Page20
	0x2a,0x90,//0xf0:speedup(Val),0x90:slow(Fixed)
	0x2b,0xf5,//0x34:1/100(Val),0xf5:2/100(Fixed)
	0x30,0xf8,//0x78:1/100(Val),0xf8:2/100(Fixed)(AE_Escape_CTL0x781/100secgainreleaseatunlock0)

	0x83,0x01,//EXPNormal20.00fps
	0x84,0x24,
	0x85,0xf8,

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x01,//EXPMax(120Hz)17.14fps
	0x89,0x55,
	0x8a,0xcc,

	0xa0,0x01,//EXPMax(100Hz)16.67fps
	0xa1,0x5f,
	0xa2,0x90,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x91,0x01,//EXPFix15.00fps
	0x92,0x86,
	0x93,0xa0,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0xa3,0x00,//OutdoorInt
	0xa4,0x30,

	0x03,0x00,
	0x11,0x94,//FixedON(0x11[2]0x90:NoflipFIXEDOFF,0x94:noflipFixedON)
	0x03,0x20,
	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)
	0x01,0x70,//sleepOFF
},
{ //50Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x01,//Vblank430
	0x43,0xae,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x06,//BLC_TIME_TH_ON
	0x91,0x06,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	//60hz_15Fixed
	0x03,0x20,//Page20
	0x2a,0x90,//0xf0:speedup(Val),0x90:slow(Fixed)
	0x2b,0xf5,//0x34:1/100(Val),0xf5:2/100(Fixed)
	0x30,0xf8,//0x78:1/100(Val),0xf8:2/100(Fixed)(AE_Escape_CTL0x781/100secgainreleaseatunlock0)

	0x83,0x01,//EXPNormal20.00fps
	0x84,0x24,
	0x85,0xf8,

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x01,//EXPMax(120Hz)17.14fps
	0x89,0x55,
	0x8a,0xcc,

	0xa0,0x01,//EXPMax(100Hz)16.67fps
	0xa1,0x5f,
	0xa2,0x90,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x91,0x01,//EXPFix15.00fps
	0x92,0x86,
	0x93,0xa0,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0xa3,0x00,//OutdoorInt
	0xa4,0x30,

	0x03,0x00,
	0x11,0x94,//FixedON(0x11[2]0x90:NoflipFIXEDOFF,0x94:noflipFixedON)
	0x03,0x20,
	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)
	0x01,0x70,//sleepOFF
}
};

kal_uint8 HI707_Video_Reg_30fps[2][90] = {
{ //60Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank4
	0x43,0x04,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x06,//BLC_TIME_TH_ON
	0x91,0x06,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup(Val),0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100(Val),0xf5:2/100(Fixed)
	0x30,0x78,//0x78:1/100(Val),0xf8:2/100(Fixed)(AE_Escape_CTL0x781/100secgainreleaseatunlock0)

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x01,//EXPMax60hz15.00fps
	0x89,0x86,
	0x8a,0xa0,

	0xa0,0x01,//EXPMax50hz16.67fps
	0xa1,0x5f,
	0xa2,0x90,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0xa3,0x00,//OutdoorInt
	0xa4,0x30,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:NoflipFIXEDOFF,0x94:noflipFixedON)
	0x01,0x70,//sleepOFF

	0x03,0x00,//dummy1
	0x03,0x00,//dummy2
	0x03,0x00,//dummy3
},
{ //50Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank4
	0x43,0x04,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x06,//BLC_TIME_TH_ON
	0x91,0x06,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup(Val),0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100(Val),0xf5:2/100(Fixed)
	0x30,0x78,//0x78:1/100(Val),0xf8:2/100(Fixed)(AE_Escape_CTL0x781/100secgainreleaseatunlock0)

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x01,//EXPMax60hz15.00fps
	0x89,0x86,
	0x8a,0xa0,

	0xa0,0x01,//EXPMax50hz16.67fps
	0xa1,0x5f,
	0xa2,0x90,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0xa3,0x00,//OutdoorInt
	0xa4,0x30,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:NoflipFIXEDOFF,0x94:noflipFixedON)
	0x01,0x70,//sleepOFF

	0x03,0x00,//dummy1
	0x03,0x00,//dummy2
	0x03,0x00,//dummy3
}
};

kal_uint8 HI707_Night_On_Reg[2][88] = {
{ //60Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	/////Flip&FixedFrame
	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF
	0x18,0x38,//AEresetON

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank
	0x43,0x04,
	
	//BLC
	0x03,0x00,//PAGE0
	0x90,0x14,//BLC_TIME_TH_ON
	0x91,0x14,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup,0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100,0xf5:2/100
	0x30,0xf8,//AE_Escape_CTL0x781/100secgainreleaseatunlock0

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x04,//EXPMax(120Hz)5.00fps
	0x89,0x93,
	0x8a,0xe0,
	0xa0,0x04,//EXPMax(100Hz)5.00fps
	0xa1,0x93,
	0xa2,0xe0,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:FIXEDOFF,0x94:FixedON)
	0x01,0x70,//sleepOFF

	0x03,0x20,
	0x7c,0x01,//YTH2
	0x18,0x30,//AEresetOFF
},
{ //50Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	///// Flip & Fixed Frame
	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF
	0x18,0x38,//AEresetON

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank
	0x43,0x04,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x14,//BLC_TIME_TH_ON
	0x91,0x14,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup,0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100,0xf5:2/100
	0x30,0xf8,//AE_Escape_CTL0x781/100secgainreleaseatunlock0

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x04,//EXPMax(120Hz)5.00fps
	0x89,0x93,
	0x8a,0xe0,
	0xa0,0x04,//EXPMax(100Hz)5.00fps
	0xa1,0x93,
	0xa2,0xe0,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:FIXEDOFF,0x94:FixedON)

	0x01,0x70,//sleepOFF

	0x03,0x20,
	0x7c,0x01,//YTH2
	0x18,0x30,//AEresetOFF
}
};

kal_uint8 HI707_Night_Off_Reg[2][94] = {
{ //60Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF
	0x18,0x38,//AEresetON

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank
	0x43,0x04,
	//BLC
	0x03,0x00,//PAGE0
	0x90,0x0a,//BLC_TIME_TH_ON
	0x91,0x0a,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup,0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100,0xf5:2/100
	0x30,0xf8,//AE_Escape_CTL0x781/100secgainreleaseatunlock0

	0x83,0x01,//EXPNormal20.00fps
	0x84,0x24,
	0x85,0xf8,

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x02,//EXPMax(120Hz)10.00fps
	0x89,0x49,
	0x8a,0xf0,

	0xa0,0x02,//EXPMax(100Hz)10.00fps
	0xa1,0x49,
	0xa2,0xf0,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:FIXEDOFF,0x94:FixedON)

	0x01,0x70,//sleepOFF

	0x03,0x20,
	0x7c,0x1c,//YTH2
	0x18,0x30,//AEresetOFF
},
{ //50Hz
	0x03,0x00,
	0x01,0x71,//SLEEPON

	0x03,0x00,
	0x11,0x90,//FixedOFF

	0x03,0x20,
	0x10,0x0c,//AEOFF
	0x18,0x38,//AEresetON

	0x03,0x00,//Page0
	0x40,0x00,//Hblank144
	0x41,0x90,
	0x42,0x00,//Vblank
	0x43,0x04,

	//BLC
	0x03,0x00,//PAGE0
	0x90,0x0a,//BLC_TIME_TH_ON
	0x91,0x0a,//BLC_TIME_TH_OFF
	0x92,0xa8,//BLC_AG_TH_ON
	0x93,0xa0,//BLC_AG_TH_OFF

	0x03,0x20,//Page20
	0x2a,0xf0,//0xf0:speedup,0x90:slow(Fixed)
	0x2b,0x34,//0x34:1/100,0xf5:2/100
	0x30,0xf8,//AE_Escape_CTL0x781/100secgainreleaseatunlock0

	0x83,0x01,//EXPNormal20.00fps
	0x84,0x24,
	0x85,0xf8,

	0x86,0x00,//EXPMin7500.00fps
	0x87,0xc8,

	0x88,0x02,//EXPMax(120Hz)10.00fps
	0x89,0x49,
	0x8a,0xf0,

	0xa0,0x02,//EXPMax(100Hz)10.00fps
	0xa1,0x49,
	0xa2,0xf0,

	0x8B,0x3a,//EXP100
	0x8C,0x98,

	0x8D,0x30,//EXP120
	0x8E,0xd4,

	0x9c,0x04,//EXPLimit1250.00fps
	0x9d,0xb0,

	0x9e,0x00,//EXPUnit
	0x9f,0xc8,

	0x10,0xec,//AEON(0x9c:50hz,0x8c:60Hz)

	0x03,0x00,

	0x11,0x90,//FixedOFF(0x11[2]0x90:FIXEDOFF,0x94:FixedON)

	0x01,0x70,//sleepOFF

	0x03,0x20,
	0x7c,0x1c,//YTH2
	0x18,0x30,//AEresetOFF
}
};

//export functions
UINT32 HI707Open(void);
UINT32 HI707GetResolution(MSDK_SENSOR_RESOLUTION_INFO_STRUCT *pSensorResolution);
UINT32 HI707GetInfo(MSDK_SCENARIO_ID_ENUM ScenarioId, MSDK_SENSOR_INFO_STRUCT *pSensorInfo, MSDK_SENSOR_CONFIG_STRUCT *pSensorConfigData);
UINT32 HI707Control(MSDK_SCENARIO_ID_ENUM ScenarioId, MSDK_SENSOR_EXPOSURE_WINDOW_STRUCT *pImageWindow, MSDK_SENSOR_CONFIG_STRUCT *pSensorConfigData);
UINT32 HI707FeatureControl(MSDK_SENSOR_FEATURE_ENUM FeatureId, UINT8 *pFeaturePara,UINT32 *pFeatureParaLen);
UINT32 HI707Close(void);


#endif /* __SENSOR_H */
