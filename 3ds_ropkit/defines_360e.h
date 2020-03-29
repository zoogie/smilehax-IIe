#define ROP_POPPC 0x00112140
#define POP_R1PC 0x0020c6e8
#define POP_R3PC 0x0011a808
#define POP_R2R6PC 0x002013f0
#define POP_R4LR_BXR1 0x00144a98
#define POP_R4R8LR_BXR2 0x00148cd4
#define POP_R4R5R6PC 0x0010d324
#define POP_R4FPPC 0x0010d110
#define POP_R4R8PC 0x0010dbcc

#define ROP_STR_R1TOR0 0x0011a540
#define ROP_STR_R0TOR1 0x0013eec4
#define ROP_LDR_R0FROMR0 0x001279e0
#define ROP_ADDR0_TO_R1 0x00116a38

#define MEMCPY 0x0020c060

#define svcSleepThread 0x001fc4fc

#define GSPGPU_FlushDataCache 0x0011ffb4
#define GSPGPU_SERVHANDLEADR 0x003208a0

#define IFile_Read 0x002033c8
#define IFile_Write 0x0020f9d4

//      FAIL:				#define ROP_POPR3_ADDSPR3_POPPC *
#define STACK_PIVOT 0x0020b76c // ldmda r2, {ip, sp, lr, pc} ^
#define POP_R0PC 0x00132898
#define ROP_LDRR1R1_STRR1R0 0x00259cfc
#define POP_R5R6PC 0x00238db0
//      FAIL:				#define ROP_CMPR0R1 *
#define ROP_CMPR0R1_ALT0 0x00272e70
//      FAIL:				#define MEMSET32_OTHER *
#define MEMSET32_OTHER 0x0020c2e0
#define svcControlMemory 0x0020ab0c
//      FAIL:				#define ROP_INITOBJARRAY *
#define svcCreateThread 0x0010d1b8
#define svcConnectToPort 0x00115d80
#define svcGetProcessId 0x001fbd90
//      FAIL:				#define THROWFATALERR_IPC *
#define SRV_GETSERVICEHANDLE 0x00206914
#define CFGIPC_SecureInfoGetRegion 0x00213500
#define ROP_COND_THROWFATALERR 0x0010996c
#define GXLOW_CMD4 0x001254e8
#define GSP_SHAREDMEM_SETUPFRAMEBUF 0x0011ff20
#define GSPTHREAD_OBJECTADDR 0x00303c40
#define FS_MountSdmc 0x0020faa4
//      FAIL:				#define FS_MountSavedata *
#define IFile_Open 0x002034b0
#define IFile_Close 0x0020a220
#define IFile_Seek 0x001fa710
