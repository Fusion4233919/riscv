#include "define.h"
void Data_Mem(WORD address, BYTE L_S, WORD data_in, WORD *data_out);
void Inst_Mem(WORD address, WORD *data_out);
void PC_Reg(WORD data_in, WORD *data_out);
void Registers(BYTE address_r_a, BYTE address_r_b, BYTE address_w, WORD data_in, BYTE W_EN, WORD *data_out_a, WORD *data_out_b);