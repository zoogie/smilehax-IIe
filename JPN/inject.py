import sys

with open("POST5_J_31745_9221.bin","rb") as f:
	otherapp_old=f.read()
with open("N3DS_J_31745_9221.bin","rb") as f:
	otherapp_new=f.read()
	
with open("3ds_ropkit/payload.bin","rb") as f:
	ropkit=f.read()
	
with open("rop.bin","wb") as f:
	f.write(b"\x00"*0x20000)
	f.seek(0)
	f.write(ropkit)
	f.seek(0x10000)
	f.write(otherapp_new)
	f.seek(0x18000)
	f.write(otherapp_old)