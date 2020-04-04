cd 3ds_ropkit
rm payload.bin payload.elf
make
cd ..
python inject.py
pause