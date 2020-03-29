make clean
cp defines_360u.h defines.h
make
cp payload.bin petitcom_us.icn

make clean
cp defines_360e.h defines.h
make
cp payload.bin petitcom_eu.icn

cp *.icn e:/
pause