#ifndef MUX_H
#define MUX_H
#include "define.h"
void MUX2_5(BYTE I0, BYTE I1, BYTE s, BYTE *O);
void MUX4_5(BYTE I0, BYTE I1, BYTE I2, BYTE I3, BYTE s, BYTE *O);
void MUX2_32(WORD I0, WORD I1, BYTE s, WORD *O);
void MUX4_32(WORD I0, WORD I1, WORD I2, WORD I3, BYTE s, WORD *O);

#endif // MUX_H