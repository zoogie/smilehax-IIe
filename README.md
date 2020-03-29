# smilehax-IIe

## Intro

This is a new primary exploit for 3DS Smilebasic 3.6.0(latest). USA and EUR are supported.

## Directions 

Directions are provided in the Release archive.<br>
You do need a USA or EUR 3DS/2DS and an eshop download of Smilebasic to get started.

## Exploit 

Utf-16 characters can be assigned to subscripted TIME$/DATE$ interpreter sysvars which results in write-only access to all of DATA and some BSS in userland.<br>
TIME$[0] actually points to somewhere in rodata, and an overly large subscript can be used to write well past it into the aforementioned areas.

## Q&A 

Q: IIe?
A: A reference to the Apple IIe, one of the BASIC enabled 80's era PCs that inspired Smilebasic/Petit Computer's invention. It's also a reference to the first Smilehax by plutoo, of course.

Q: JPN support?
A: The vuln was actually fixed on JPN SB version 3.6.2 (and documented on the dev's JPN site!), however, you can delete/rename the update file and run the vuln on base app version 3.3.2.<br>
I have not implemented JPN support, I'm just saying it's possible.

Q: Will this work on JPN WiiU since it's latest version 3.6.0 too?
A: Maybe, but I doubt it. The 3ds version allows for about 1.5 MBs of overflowed access - I doubt that would be enough to reach critical areas on the system. Not sure though, go ahead and find out yourself
although I doubt I'd want to mess with it.

Q: Switch?
A: Not a chance.

## Thanks 

- Yellows8 for 3ds ropkit