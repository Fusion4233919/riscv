#include "register.h"
void Data_Mem(WORD address, BYTE L_S, WORD data_in, WORD *data_out);
void Inst_Mem(WORD address, WORD *data_out);
void PC_Reg(WORD data_in, WORD *data_out)
{
    static WORD PC;
    *data_out = PC;
    PC = data_in;
}
void Registers(BYTE address_r_a, BYTE address_r_b, BYTE address_w, WORD data_in, BYTE W_EN, WORD *data_out_a, WORD *data_out_b)
{
    static WORD registers[32];
    address_r_a &= 0x1F;
    address_r_b &= 0x1F;
    address_w &= 0x1F;
    if (W_EN == 1 && address_w)
    {
        registers[address_w] = data_in;
    }

    *data_out_a = registers[address_r_a];
    *data_out_b = registers[address_r_b];
}