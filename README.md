# Background
This program sets the video mode in DOS.
It can be used in setupts where MiSTer is connected to a 15Khz monitor and the font is too small to be readable.

# Usage 
setvmode XX where XX is the videomode, in hex

0: 40x25 Black and White text (CGA,EGA,MCGA,VGA)
01: 40x25 16 color text (CGA,EGA,MCGA,VGA)
02: 80x25 16 shades of gray text (CGA,EGA,MCGA,VGA)
03: 80x25 16 color text (CGA,EGA,MCGA,VGA)
04: 320x200 4 color graphics (CGA,EGA,MCGA,VGA)
05: 320x200 4 color graphics (CGA,EGA,MCGA,VGA)
06: 640x200 B/W graphics (CGA,EGA,MCGA,VGA)
07: 80x25 Monochrome text (MDA,HERC,EGA,VGA)
08: 160x200 16 color graphics (PCjr)
09: 320x200 16 color graphics (PCjr)
0A: 640x200 4 color graphics (PCjr)
0D: 320x200 16 color graphics (EGA,VGA)
0E: 640x200 16 color graphics (EGA,VGA)
0F: 640x350 Monochrome graphics (EGA,VGA)
10: 640x350 16 color graphics (EGA or VGA with 128K)
    640x350 4 color graphics (64K EGA)
11: 640x480 B/W graphics (MCGA,VGA)
12: 640x480 16 color graphics (VGA)
13: 320x200 256 color graphics (MCGA,VGA)

# Compilation 

The source file can be compiled using Turbo C++. 