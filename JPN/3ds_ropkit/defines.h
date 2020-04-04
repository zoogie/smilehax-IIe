#define ROP_POPPC 0x00112a70
#define POP_R1PC 0x001f50fc
#define POP_R3PC 0x0011b258
#define POP_R2R6PC 0x001ea798
#define POP_R4LR_BXR1 0x00144cc4
#define POP_R4R8LR_BXR2 0x001496ac
#define POP_R4R5R6PC 0x0010d20c
#define POP_R4FPPC 0x0010e35c
#define POP_R4R8PC 0x0010dba8

#define ROP_STR_R1TOR0 0x0011af90
#define ROP_STR_R0TOR1 0x0013f110
#define ROP_LDR_R0FROMR0 0x00129104
#define ROP_ADDR0_TO_R1 0x00117514

#define MEMCPY 0x001f4b3c

#define svcSleepThread 0x001e5708

#define GSPGPU_FlushDataCache 0x00126aa4
#define GSPGPU_SERVHANDLEADR 0x002f785c

#define IFile_Read 0x001ec19c
#define IFile_Write 0x0010fb60

//      FAIL:				#define ROP_POPR3_ADDSPR3_POPPC 
#define STACK_PIVOT 0x001f4698 // ldmda r2, {ip, sp, lr, pc} ^
#define POP_R0PC 0x00134124
#define ROP_LDRR1R1_STRR1R0 0x0024c554
#define POP_R5R6PC 0x0022b608
#define ROP_CMPR0R1_ALT0 0x0025a8ac
#define MEMSET32_OTHER 0x001f4dbc
#define svcControlMemory 0x001f3984
//      FAIL:				#define ROP_INITOBJARRAY 
#define svcCreateThread 0x0010d0a0
#define svcConnectToPort 0x001167b8
#define svcGetProcessId 0x001e56ec
//      FAIL:				#define THROWFATALERR_IPC 
#define SRV_GETSERVICEHANDLE 0x001ef85c
#define CFGIPC_SecureInfoGetRegion 0x00205eb0
#define ROP_COND_THROWFATALERR 0x00109c58
#define GXLOW_CMD4 0x00126ba8
#define GSP_SHAREDMEM_SETUPFRAMEBUF 0x001269a0
#define GSPTHREAD_OBJECTADDR 0x002dac40
#define FS_MountSdmc 0x0010fca8
//      FAIL:				#define FS_MountSavedata 
#define IFile_Open 0x001ec284
#define IFile_Close 0x001f301c
#define IFile_Seek 0x001e4164
