#include <stdio.h>
#include <dos.h>

//based on https://lateblt.tripod.com/bit24.txt

static const char* descriptions[]={
  "00: 40x25 Black and White text (CGA,EGA,MCGA,VGA)",
  "01: 40x25 16 color text (CGA,EGA,MCGA,VGA)",
  "02: 80x25 16 shades of gray text (CGA,EGA,MCGA,VGA)",
  "03: 80x25 16 color text (CGA,EGA,MCGA,VGA)",
  "04: 320x200 4 color graphics (CGA,EGA,MCGA,VGA)",
  "05: 320x200 4 color graphics (CGA,EGA,MCGA,VGA)",
  "06: 640x200 B/W graphics (CGA,EGA,MCGA,VGA)",
  "07: 80x25 Monochrome text (MDA,HERC,EGA,VGA)",
  "08: 160x200 16 color graphics (PCjr)",
  "09: 320x200 16 color graphics (PCjr)",
  "0A: 640x200 4 color graphics (PCjr)",
  "0D: 320x200 16 color graphics (EGA,VGA)",
  "0E: 640x200 16 color graphics (EGA,VGA)",
  "0F: 640x350 Monochrome graphics (EGA,VGA)",
  "10: 640x350 16 color graphics (EGA or VGA with 128K)\n"
  "    640x350 4 color graphics (64K EGA)",
  "11: 640x480 B/W graphics (MCGA,VGA)",
  "12: 640x480 16 color graphics (VGA)",
  "13: 320x200 256 color graphics (MCGA,VGA)"
};


int main(int argc, char** argv){
  int mode=-1;

  if (argc==2){
    sscanf(argv[1],"%x",&mode);
  }
  if ((0<=mode)&&(mode<=0x13)){
      _AX=mode;
      geninterrupt(0x10);
  }else{
    printf("Usage: %s MODE where MODE is one of\n",argv[0]);
    for (int i=0;i<sizeof(descriptions)/sizeof(descriptions[0]);++i){
      printf("%s\n",descriptions[i]);
    }
  }
  return 0;
}
