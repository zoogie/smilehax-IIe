# smilehax-IIe

## Intro

This is a new primary exploit for 3DS Smilebasic 3.6.0 USA/EUR (& 3.3.2 JPN). USA/EUR are currently the latest appversion, while JPN can be downgraded from 3.6.3->3.5.0 to 3.3.2.

## Directions 

Directions are provided in the Release archive.<br>
You do need a USA, EUR, or JPN 3DS/2DS and an eshop download of Smilebasic to get started.

## Exploit 

Utf-16 characters can be assigned to subscripted TIME$/DATE$ interpreter sysvars which results in write-only access to all of DATA and some BSS in userland.<br>
TIME$[0]/DATE$[0] actually point to somewhere in rodata, and an overly large subscript can be used to write well past it and into the aforementioned areas.

## Q&A 

Q: IIe?<br>
A: This is a reference to the legendary Apple IIe, one of the BASIC enabled 80's era PCs that inspired Smilebasic/Petit Computer's invention. It's also a reference to the first Smilehax by plutoo, of course.

Q: JPN support?<br>
A: Yes, it's supported now. Instructions are in the Release.

Q: Why is the JPN app version and hack method different from the West?<br>
A: The vuln used here was actually fixed on JPN SB version 3.6.2 (and documented on the dev's JPN site!), so we need to  delete/rename the update file and run the vuln on base app version 3.3.2.<br>
Since 3.3.2 doesn't have DirectSdmc support (which was introduced on 3.6.0 to enable in-app screenshots) we have to download the rop payload via HTTP instead of loading it from the SD card. This is basically (ha) how the first smilehax operated.

Q: Will this work on JPN WiiU since it's latest version 3.6.0 too?<br>
A: Maybe, but I doubt it. The 3ds version allows for about 1.5 MBs of overflowed access - I doubt that would be enough to reach critical areas on the system. Not sure though, go ahead and find out yourself
although I doubt I'd want to mess with it.

Q: Switch?<br>
A: Not a chance.

Q: You [released](https://github.com/zoogie/petit-compwner) an exploit for petit computer not long ago, are these two sploits related?<br>
A: Sort of! Smilehax IIe actually was developed first and the idea of checking official app changelogs for vulns inspired finding petit-compwner's vuln as well.

## Thanks 

- Yellows8 for 3ds ropkit
- Plutoo for the http download template used in smilehax [here](https://github.com/plutooo/smilehax/blob/master/src/installer_stage0.py)
- Everyone (most prolific 3ds dev ever)