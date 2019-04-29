#ifndef _BASIC_OP_PROTO_H

#define _BASIC_OP_PROTO_H

/* intrinsics prototypes */

#define VOID void
#define SINT16 short
#define UINT16 unsigned short
#define SINT32 int
#define SINT40 acc_t

SINT32 _add       (SINT16, SINT16);
SINT32 _sub       (SINT16, SINT16);
SINT32 _abs_s     (SINT16);
SINT16 _shl       (SINT16, SINT16);
SINT16 _shlNs     (SINT16, SINT16);
SINT16 _shr       (SINT16, SINT16);
SINT16 _shr_r     (SINT16, SINT16);
SINT32 _mult      (SINT16, SINT16);
SINT32 _mult_r    (SINT16, SINT16);
SINT16 _mac_r     (SINT32, SINT16, SINT16);
SINT16 _msu_r     (SINT32, SINT16, SINT16);
SINT32 _negate    (SINT16);
SINT32 _extract_h (SINT32);
SINT32 _extract_l (SINT32);
SINT32 _round     (SINT32);
SINT32 __exp      (SINT32);



SINT32 _L_mult      (SINT16, SINT16);
SINT32 _L_mac       (SINT32, SINT16, SINT16);
SINT32 _L_msu       (SINT32, SINT16, SINT16);
SINT32 _L_add       (SINT32, SINT32);
SINT32 _L_sub       (SINT32, SINT32);
SINT32 _L_negate    (SINT32);
SINT32 _L_shl       (SINT32, SINT16);
SINT32 _L_shlNs     (SINT32, SINT16);
SINT32 _L_shr       (SINT32, SINT16);
SINT32 _L_deposit_h (SINT16);
SINT32 _L_deposit_l (SINT16);
SINT32 _L_abs       (SINT32);
SINT32 _L_mpy_ll    (SINT32, SINT32);
SINT32 _L_mpy_ls    (SINT32, SINT16);
SINT32 _L_shr_r     (SINT32, SINT16);
VOID   _L_Extract   (SINT32, VOID*, VOID*);
VOID   _L_EXTRACT   (SINT32, SINT16, SINT16);
SINT32 _L_Comp      (SINT16, SINT16);
SINT32 _Mpy_32      (SINT16, SINT16, SINT16, SINT16);
SINT32 _Mpy_32_16   (SINT16, SINT16, SINT16);
SINT32 _Div_32      (SINT32, SINT16, SINT16);
SINT32 _Mac_32      (SINT32, SINT16, SINT16, SINT16, SINT16);
SINT32 _Mac_32_16   (SINT32, SINT16, SINT16, SINT16);

SINT32 _get_overflow();
SINT32 _clr_overflow();

SINT40 _L_add40        (SINT40, SINT40);
SINT40 _L_sub40        (SINT40, SINT40);
SINT40 _L_mac40        (SINT40, SINT16, SINT16);
SINT40 _L_msu40        (SINT40, SINT16, SINT16);
SINT40 _L_shr40        (SINT40, SINT16);
SINT40 _L_shl40        (SINT40, SINT16);
SINT40 _L_shl40Ns      (SINT40, SINT16);
SINT40 _L_sat32_40     (SINT40);
SINT16 _norm32_l40     (SINT40);
SINT16 _extract_l40    (SINT40);
SINT40 _L_deposit_l40  (SINT40, SINT16);
SINT40 _L_abs40        (SINT40);
SINT40 _L_neg40        (SINT40);
SINT16 _maxNs          (SINT16, SINT16);
SINT32 _L_maxNs        (SINT32, SINT32);
SINT40 _L_max40Ns      (SINT40, SINT40);
SINT16 _minNs          (SINT16, SINT16);
SINT32 _L_minNs        (SINT32, SINT32);
SINT40 _L_min40Ns      (SINT40, SINT40);
SINT40 _L_mpy40Nf      (SINT16, SINT16);
SINT40 _L_mpy40Ns      (SINT16, SINT16);
SINT40 _L_mpy40        (SINT16, SINT16);
SINT40 _L_mpysu40Nf    (SINT16, UINT16);
SINT40 _L_mpysu40      (SINT16, UINT16);
SINT40 _L_mac40Ns      (SINT40, SINT16, SINT16);
SINT40 _L_mac40Nf      (SINT40, SINT16, SINT16);
SINT40 _L_msu40Ns      (SINT40, SINT16, SINT16);
SINT40 _L_msu40Nf      (SINT40, SINT16, SINT16);
SINT16 _L_expmant32_40 (SINT40, SINT40);
SINT40 _L_macsu40Nf    (SINT40, SINT16, UINT16);
SINT40 _L_macsu40      (SINT40, SINT16, UINT16);
SINT40 _L_msusu40Nf    (SINT40, SINT16, UINT16);
SINT40 _L_msusu40      (SINT40, SINT16, UINT16);
SINT40 _L_round40      (SINT40);
SINT40 _L_round40Ns    (SINT40);

SINT40 _L_shlst40      (SINT40, SINT16, VOID*);
SINT40 _L_shlstr40Ns   (SINT40, SINT16, VOID*);
SINT40 _L_shlstr40     (SINT40, SINT16, VOID*);

#undef VOID
#undef SINT16
#undef UINT16
#undef SINT32
#undef SINT40

#endif /* _BASIC_OP_PROTO_H */
