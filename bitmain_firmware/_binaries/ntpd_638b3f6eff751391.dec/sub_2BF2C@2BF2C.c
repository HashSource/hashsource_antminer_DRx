unsigned __int16 *__fastcall sub_2BF2C(unsigned __int16 *a1, int a2, int a3)
{
  _DWORD *v6; // r0
  __int16 v7; // r2
  __int16 v8; // r3
  unsigned int v9; // r7
  unsigned int v10; // r4
  unsigned int v11; // r11
  unsigned int v12; // r8
  unsigned int v13; // r9
  unsigned int v14; // r1
  unsigned int v15; // r12
  unsigned int v16; // r5
  unsigned int v17; // lr
  unsigned int v18; // r6
  unsigned int jitcnt; // r10
  unsigned int errcnt; // r7
  unsigned int stbcnt; // r4
  struct timex s; // [sp+8h] [bp-84h] BYREF

  if ( !dword_CABD8 )
    return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
  memset(&s, 0, sizeof(s));
  if ( ntp_adjtime(&s) < 0 )
    sub_4FE78(3, "get_kernel_info: ntp_adjtime() failed: %m");
  v6 = sub_28654((int)a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), 60);
  v7 = BYTE1(s.status) | (unsigned __int16)(LOWORD(s.status) << 8);
  v8 = BYTE1(s.shift) | (unsigned __int16)(LOWORD(s.shift) << 8);
  v9 = bswap32(s.freq);
  v10 = bswap32(s.maxerror);
  v11 = bswap32(s.ppsfreq);
  v12 = bswap32(s.jitter);
  v13 = bswap32(s.tolerance);
  v14 = bswap32(s.precision);
  v15 = bswap32(s.constant);
  v16 = bswap32(s.stabil);
  v17 = bswap32(s.esterror);
  v18 = bswap32(s.calcnt);
  *v6 = bswap32(s.offset);
  jitcnt = s.jitcnt;
  v6[1] = v9;
  errcnt = s.errcnt;
  v6[2] = v10;
  stbcnt = s.stbcnt;
  v6[3] = v17;
  *((_WORD *)v6 + 8) = v7;
  v6[5] = v15;
  v6[6] = v14;
  *((_WORD *)v6 + 9) = v8;
  v6[7] = v13;
  v6[8] = v11;
  v6[9] = v12;
  v6[10] = v16;
  v6[11] = bswap32(jitcnt);
  v6[12] = v18;
  v6[13] = bswap32(errcnt);
  v6[14] = bswap32(stbcnt);
  sub_2824C();
  return sub_28778();
}
