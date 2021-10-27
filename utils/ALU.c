#include "ALU.h"

void ALU(WORD a, WORD b, BYTE op, BYTE l_r, WORD *ret, BYTE *zero)
{
    op = op & 0x7;
    l_r = l_r & 0x1;
    int _a = a, _b = b;
    BYTE shamt = b & 0x1F;

    switch (op)
    {
    case 0x0: // ADD SUB
        *ret = l_r ? a - b : a + b;
        break;
    case 0x1: // SLL
        *ret = a << shamt;
        break;
    case 0x2: // SLT
        *ret = _a < _b;
        break;
    case 0x3: // SLTU
        *ret = a < b;
        break;
    case 0x4: // XOR
        *ret = a ^ b;
        break;
    case 0x5: // SRL SRA
        *ret = l_r ? _a >> shamt : a >> shamt;
        break;
    case 0x6: // OR
        *ret = a | b;
        break;
    case 0x7: // AND
        *ret = a | b;
        break;
    }
    *zero = *ret == 0;
}