#ifndef _BASIC_OP_H

#define _BASIC_OP_H
#include <basic_op_proto.h>

#define MAX_32 (int)0x7fffffffL
#define MIN_32 (int)0x80000000L

#define MAX_16 (short)0x7fff
#define MIN_16 (short)0x8000

/* for all the macros satuaration bits (SATA,SATP,SATW) should be cleared 
   to enable saturation.
   In order to control the saturation environment of the Compiler use the 
   compilation switch: -TENV:saturation_default=[on/off]
   By default, (when user does not indicate anything) Compiler assumes 
   'off' which means that the saturation is disabled globally. When ‘on’ 
   the Compiler assumes that the user globally enabled saturation.

   The user can change the saturation bits in 2 ways:
   - Edit the default startup code. In particular, the initConfigRegs 
     function in crt0_init_config_regs.c file and link it with 
	 the application. By default this code disables saturation.
   - Use __asm__ statement in the main function in order to override the 
     defaults which are set in the Compiler startup code.
*/

#define add(x,y) (_add(x, y))
#define sub(x,y) (_sub(x, y))
#define abs_s(var1) (_abs_s(var1))
#define shl(var1, var2) (_shl(var1, var2))
#define shlNs(var1, var2) (_shlNs(var1, var2))
#define shr(var1, var2) (_shr(var1, var2))
#define shr_r(x, y) (_shr_r(x, y))
#define mult(x,y) (_mult(x,y))
#define mult_r(x,y) (_mult_r(x,y))
#define mac_r(L_var3, var1, var2) (_mac_r(L_var3, var1, var2))
#define msu_r(L_var3, var1, var2) (_msu_r(L_var3, var1, var2))
#define negate(x) (_negate(x))
#define extract_h(x) (_extract_h(x))
#define extract_l(x) (_extract_l(x))
#define round(x) (_round(x))
#define norm_s(x) (__exp(_L_deposit_h((short)(x))))
#define norm_l(x) (__exp(x))
#define div_s(x, y) ((x == y) ? 0x7fff : ((x<<15)/y))

#define L_mult(x,y) (_L_mult(x,y))
#define L_mac(res, x, y) (_L_mac(res, x, y))
#define L_msu(res, x, y) (_L_msu(res, x, y))
#define L_add(x,y) (_L_add(x,y))
#define L_sub(x,y) (_L_sub(x,y))
#define L_mult0(x,y) ((int)((short)x*(short)y))
#define L_mac0(res, x, y) (L_add(res, L_mult0(x, y)))
#define L_msu0(res, x, y) (L_sub(res, L_mult0(x, y)))
#define L_negate(x) (_L_negate(x))
#define L_shl(var1, var2) (_L_shl(var1, var2))
#define L_shlNs(var1, var2) (_L_shlNs(var1, var2))
#define L_shr(var1, var2) (_L_shr(var1, var2))
#define L_deposit_h(x) (_L_deposit_h(x))
#define L_deposit_l(x) (_L_deposit_l(x))
#define L_abs(x) (_L_abs(x))
#define L_mpy_ll(x, y) (_L_mpy_ll(x, y))
#define L_mpy_ls(x, y) (_L_mpy_ls(x, y))
#define L_shr_r(x, y) (_L_shr_r(x, y))
#define L_Extract(L_var3, var1, var2) (_L_Extract(L_var3, var1, var2))
#define L_EXTRACT(L_var3, var1, var2) (_L_EXTRACT(L_var3, var1, var2))
#define L_Comp(var1, var2) (_L_Comp(var1, var2))
#define Mpy_32(var1, var2, var3, var4) (_Mpy_32(var1, var2, var3, var4))
#define Mpy_32_16(var1, var2, var3) (_Mpy_32_16(var1, var2, var3))
#define Div_32(L_var3, var1, var2) (_Div_32(L_var3, var1, var2))
#define Mac_32(L_var5, var1, var2, var3, var4) (_Mac_32(L_var5, var1, var2, var3, var4))
#define Mac_32_16(L_var4, var1, var2, var3) (_Mac_32_16(L_var4, var1, var2, var3))

#define get_overflow() (_get_overflow())
#define clr_overflow() (_clr_overflow())


/* 40-bit (acc_t) intrinsics */
#define L_add40(L_var1, L_var2) (_L_add40(L_var1, L_var2))
#define L_sub40(L_var1, L_var2) (_L_sub40(L_var1, L_var2))
#define L_mac40(L_var3, var1, var2) (_L_mac40(L_var3, var1, var2))
#define L_msu40(L_var3, var1, var2) (_L_msu40(L_var3, var1, var2))
#define L_shr40(L_var1, var2) (_L_shr40(L_var1, var2))
#define L_shl40(L_var1, var2) (_L_shl40(L_var1, var2))
#define L_shl40Ns(L_var1, var2) (_L_shl40Ns(L_var1, var2))
#define L_sat32_40(L_var1) (_L_sat32_40(L_var1))
#define norm32_l40(L_var1) (_norm32_l40(L_var1))
#define extract_l40(L_var1) (_extract_l40(L_var1))
#define L_deposit_l40(L_var1, var_in) (_L_deposit_l40(L_var1, var_in))
#define L_abs40(var1) (_L_abs40(var1))
#define L_neg40(var1) (_L_neg40(var1))
#define maxNs(var1, var2) (_maxNs(var1, var2))
#define L_maxNs(var1, var2) (_L_maxNs(var1, var2))
#define L_max40Ns(var1, var2) (_L_max40Ns(var1, var2))
#define minNs(var1, var2) (_minNs(var1, var2))
#define L_minNs(var1, var2) (_L_minNs(var1, var2))
#define L_min40Ns(var1, var2) (_L_min40Ns(var1, var2))
#define L_mpy40Nf(var1, var2) (_L_mpy40Nf(var1, var2))
#define L_mpy40Ns(var1, var2) (_L_mpy40Ns(var1, var2))
#define L_mpy40(var1, var2) (_L_mpy40(var1, var2))
#define L_mpysu40Nf(var1, var2) (_L_mpysu40Nf(var1, var2))
#define L_mpysu40(var1, var2) (_L_mpysu40(var1, var2))
#define L_mac40Ns(var1, var2, var3) (_L_mac40Ns(var1, var2, var3))
#define L_mac40Nf(var1, var2, var3) (_L_mac40Nf(var1, var2, var3))
#define L_msu40Ns(var1, var2, var3) (_L_msu40Ns(var1, var2, var3))
#define L_msu40Nf(var1, var2, var3) (_L_msu40Nf(var1, var2, var3))
#define L_expmant32_40(var1, var2) (_L_expmant32_40(var1, var2))
#define L_macsu40Nf(var1, var2, var3) (_L_macsu40Nf(var1, var2, var3))
#define L_macsu40(var1, var2, var3)   (_L_macsu40(var1, var2, var3))
#define L_msusu40Nf(var1, var2, var3) (_L_msusu40Nf(var1, var2, var3))
#define L_msusu40(var1, var2, var3)   (_L_msusu40(var1, var2, var3))
#define L_round40(var1)   (_L_round40(var1))
#define L_round40Ns(var1) (_L_round40Ns(var1))

#define L_shlst40(var1, var2, var3) (_L_shlst40(var1, var2, var3))
#define L_shlstr40Ns(var1, var2, var3) (_L_shlstr40Ns(var1, var2, var3))
#define L_shlstr40(var1, var2, var3) (_L_shlstr40(var1, var2, var3))

#endif /* _BASIC_OP_H */
