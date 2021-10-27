#include "imm_ext.h"

void signed_ext_12(WORD imm, WORD *imm_ext)
{
    imm = imm & 0x00000FFF;
    *imm_ext = 0 - (imm >> 11) & 0xFFFFF000;
    *imm_ext |= imm;
}

void signed_ext_20(WORD imm, WORD *imm_ext)
{
    imm = imm & 0x000FFFFF;
    *imm_ext = 0 - (imm >> 19) & 0xFFF00000;
    *imm_ext |= imm;
}