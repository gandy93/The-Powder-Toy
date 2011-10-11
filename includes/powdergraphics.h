#ifndef PGRAPHICS_H
#define PGRAPHICS_H

#define PMODE		0x000000FF
#define PMODE_NONE	0x00000000
#define PMODE_FLAT	0x00000001
#define PMODE_BLOB	0x00000002
#define PMODE_BLUR 0x00000004
#define PMODE_GLOW 0x00000008
#define PMODE_SPARK 0x00000010
#define PMODE_FLARE 0x00000020
#define PMODE_LFLARE 0x00000040

#define FIREMODE	0x0000FF00
#define FIRE_ADD	0x00000100
#define FIRE_BLEND	0x00000200

#endif
