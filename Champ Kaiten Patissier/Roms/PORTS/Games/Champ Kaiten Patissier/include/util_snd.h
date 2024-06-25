#ifndef _UTIL_SND_
#define _UTIL_SND_

enum{
	SOUND_MUSBANK = 32,
	SOUND_CHUNKBANK = 32,
	SOUND_MIXBANK = 8
};

enum {
	BGM_GAME01 = 0,

	SE_SEL = 0,
	SE_COLLECT,
	SE_SHOT,
	SE_SHIPBRK,
	SE_CHIP,
	SE_DMG,
	SE_ENEEXP,
	SE_ENEBRK,
	SE_EXTEND,
	SE_ALERT,
};

void soundInitBuffer(void);
void soundRelease(void);
void soundLoadBuffer(int num, UINT8 *fname, int loop);
void soundLoadBuffer2(int num, UINT8 *fname1, UINT8 *fname2);
void soundLoadBufferSE(int num, UINT8 *fname);
void soundStopBgm(int num);
void soundStopBgmPlaying(void);
int soundIsPlayBgm(void);
void soundPlayBgm(int num);
void soundPlayFadeFlag(int flag, int time);
void soundPlayCtrl(void);
void soundSetVolumeMaster(int vol);
void soundSetVolumeBgm(int vol, int num);
void soundSetVolumeAll(int vol);
void soundSetVolumeMasterBgm(int vol);
void soundStopSe(int num);
void soundPlaySe(int num);
int soundIsPlaySe(int num);
void soundStopSeAll(void);

extern SINT sound_buff[];

#endif /* _UTIL_SND_ */
