unsigned __int16 *__fastcall sub_2C308(unsigned __int16 *result, int a2)
{
  unsigned __int16 *v2; // r4
  unsigned int v4; // r8
  unsigned __int16 *v5; // r6
  int v6; // r7
  unsigned int v7; // r3
  int v8; // r7
  int v9; // r3
  int v10; // r2
  __int16 *v11; // r9
  int v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // t1
  const char *v16; // r0
  __int16 v17; // r3
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // lr
  unsigned int v22; // r11
  int v23; // r11
  unsigned int v24; // r3
  int v25; // r1
  int v26; // r0
  int v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r0
  int v30; // r1
  int v31; // r2
  bool v32; // zf
  int v33; // r1
  double v34; // d16
  int v35; // r3
  unsigned __int16 *v36; // [sp+18h] [bp-Ch]

  v2 = result;
  v4 = *((_DWORD *)result + 22);
  v5 = result + 4;
  v6 = *((_DWORD *)result + 16);
  if ( dword_7CF4C <= 2 )
  {
    v7 = *((unsigned __int8 *)result + 92);
    if ( (v7 & 0x80) == 0 )
      goto LABEL_3;
LABEL_25:
    v8 = 1;
    goto LABEL_5;
  }
  result = (unsigned __int16 *)printf(
                                 "process_private: impl %d req %d\n",
                                 *((unsigned __int8 *)result + 94),
                                 *((unsigned __int8 *)result + 95));
  v7 = *((unsigned __int8 *)v2 + 92);
  if ( (v7 & 0x80) != 0 )
    goto LABEL_25;
LABEL_3:
  if ( (v7 & 0x40) != 0 )
  {
    v8 = 2;
    goto LABEL_5;
  }
  v9 = (v7 >> 3) & 7;
  if ( v9 > 4 )
  {
    v8 = 3;
    goto LABEL_5;
  }
  if ( !v9 )
  {
    v8 = 4;
    goto LABEL_5;
  }
  if ( (*((_BYTE *)v2 + 93) & 0x7F) != 0 )
  {
    v8 = 5;
    goto LABEL_5;
  }
  if ( (v2[48] & 0xF0) != 0 )
  {
    v8 = 6;
    goto LABEL_5;
  }
  result = (unsigned __int16 *)(unsigned __int16)((v2[49] << 8) | HIBYTE(v2[49]));
  if ( (unsigned int)result >> 12 )
  {
    v8 = 7;
LABEL_5:
    if ( (dword_7BE6C & 2) != 0 && dword_CB548 >= (unsigned int)dword_7FF5C )
    {
      v16 = (const char *)sub_50CD0(v5);
      result = (unsigned __int16 *)sub_4FE78(3, "process_private: drop test %d failed, pkt from %s", v8, v16);
      dword_7FF5C = dword_CB548 + 60;
    }
    return result;
  }
  if ( *((_DWORD *)v2 + 22) <= 7u )
  {
    v8 = 8;
    goto LABEL_5;
  }
  v10 = *((unsigned __int8 *)v2 + 94);
  dword_7FD48 = v9;
  if ( v10 )
  {
    if ( (unsigned int)(v10 - 2) > 1 )
      return sub_286DC(v5, v6, v10, *((_BYTE *)v2 + 95), 1);
    v11 = &word_7A314;
  }
  else
  {
    v11 = &word_7A308;
  }
  v12 = *v11;
  if ( v12 == -1 )
    return sub_286DC(v5, v6, v10, *((_BYTE *)v2 + 95), 2);
  v13 = *((unsigned __int8 *)v2 + 95);
  if ( v12 != v13 )
  {
    do
    {
      v15 = v11[6];
      v11 += 6;
      v14 = v15;
      if ( v15 == -1 )
        return sub_286DC(v5, v6, v10, *((_BYTE *)v2 + 95), 2);
    }
    while ( v14 != v13 );
  }
  if ( dword_7CF4C > 3 )
  {
    puts("found request in tables");
    LOWORD(result) = (v2[49] << 8) | HIBYTE(v2[49]);
  }
  v17 = v11[2];
  v18 = (unsigned __int16)result & 0xFFF;
  if ( v17 != v18 && v11[3] != v18 && (v2[47] != 2563 || v18 != 16) )
  {
    if ( dword_7CF4C > 2 )
      printf("process_private: wrong item size, received %d, should be %d or %d\n", v18, v17, v11[3]);
    return sub_286DC(v5, v6, *((_BYTE *)v2 + 94), *((_BYTE *)v2 + 95), 3);
  }
  if ( v11[2] && (((unsigned __int16)(v2[48] << 8) | HIBYTE(v2[48])) & 0xFFFu) * v18 > v4 - 8 )
  {
    if ( dword_7CF4C > 2 )
      puts("process_private: not enough data");
    return sub_286DC(v5, v6, *((_BYTE *)v2 + 94), *((_BYTE *)v2 + 95), 3);
  }
  v19 = *((unsigned __int8 *)v2 + 94);
  if ( v19 == 2 )
  {
    dword_7FF54 = 0;
  }
  else
  {
    if ( v19 != 3 )
      return sub_286DC(v5, v6, v19, *((_BYTE *)v2 + 95), 3);
    dword_7FF54 = 1;
  }
  v36 = v2 + 46;
  if ( !v11[1] || !dword_CB46C )
    goto LABEL_64;
  v20 = (((unsigned __int16)(v2[48] << 8) | HIBYTE(v2[48])) & 0xFFF) * v18;
  if ( v4 < v20 + 36 )
    return sub_286DC(v5, v6, v19, *((_BYTE *)v2 + 95), 3);
  v21 = *((char *)v2 + 93);
  v22 = (v20 + 19) & 0xFFFFFFFC;
  if ( v4 > v22 + 24 )
    v23 = 20;
  else
    v23 = v4 - v22;
  if ( v21 >= 0 )
  {
    v24 = *(_DWORD *)((char *)v36 + v4 - v23);
LABEL_60:
    if ( dword_7CF4C > 4 )
    {
      printf(
        "failed auth %d info_auth_keyid %u pkt keyid %u maclen %lu\n",
        (unsigned int)v21 >> 31,
        dword_CB50C,
        bswap32(v24),
        v23);
      v24 = *(_DWORD *)((char *)v36 + v4 - v23);
    }
    sub_4FE78(
      7,
      "process_private: failed auth %d info_auth_keyid %u pkt keyid %u maclen %lu\n",
      (unsigned int)*((char *)v2 + 93) >> 31,
      dword_CB50C,
      bswap32(v24),
      v23);
    return sub_286DC(v5, v6, *((_BYTE *)v2 + 94), *((_BYTE *)v2 + 95), 7);
  }
  v24 = *(_DWORD *)((char *)v36 + v4 - v23);
  if ( !dword_CB50C || dword_CB50C != bswap32(v24) )
    goto LABEL_60;
  if ( v4 > 0xD8 )
  {
    if ( dword_7CF4C > 4 )
      printf("bad pkt length %lu\n", v4);
    sub_4FE78(3, "process_private: bad pkt length %lu", v4);
    LOBYTE(v19) = *((_BYTE *)v2 + 94);
    return sub_286DC(v5, v6, v19, *((_BYTE *)v2 + 95), 3);
  }
  if ( !a2 || !sub_4DD08(dword_CB50C) )
  {
    if ( dword_7CF4C > 4 )
      printf("failed auth mod_okay %d\n", a2);
    sub_4FE78(7, "process_private: failed auth mod_okay %d\n", a2);
    return sub_286DC(v5, v6, *((_BYTE *)v2 + 94), *((_BYTE *)v2 + 95), 7);
  }
  v26 = *((_DWORD *)v2 + 20);
  if ( !v26 )
    v25 = *((_DWORD *)v2 + 19);
  v27 = bswap32(*(_DWORD *)((char *)v36 + v4 - v23 - 8));
  if ( !v26 )
    v27 -= v25;
  v28 = bswap32(*(_DWORD *)((char *)v36 + v4 - v23 - 4));
  if ( v26 )
  {
    v29 = -v26;
    v30 = (unsigned __int16)v29 + (unsigned __int16)v28;
    v31 = HIWORD(v29) + HIWORD(v28);
    if ( (v30 & 0x10000) != 0 )
      ++v31;
    v32 = (v31 & 0x10000) == 0;
    v28 = (unsigned __int16)v30 | (v31 << 16);
    v27 += ~*((_DWORD *)v2 + 19);
    if ( !v32 )
      ++v27;
  }
  v33 = v28;
  if ( v27 < 0 )
  {
    if ( v28 )
    {
      v33 = -v28;
      v35 = ~v27;
    }
    else
    {
      v35 = -v27;
    }
    v34 = -((double)v35 + (double)(unsigned int)v33 * 2.32830644e-10);
  }
  else
  {
    v34 = (double)v27 + (double)v28 * 2.32830644e-10;
  }
  if ( fabs(v34) > 10.0 )
  {
    if ( dword_7CF4C > 4 )
      printf("xmit/rcv timestamp delta %g > INFO_TS_MAXSKEW %g\n", v34, 10.0);
    return sub_286DC(v5, v6, *((_BYTE *)v2 + 94), *((_BYTE *)v2 + 95), 7);
  }
  if ( !sub_4E4E4(dword_CB50C, v36, v4 - v23, v23) )
  {
    if ( dword_7CF4C > 4 )
      puts("authdecrypt failed");
    return sub_286DC(v5, v6, *((_BYTE *)v2 + 94), *((_BYTE *)v2 + 95), 7);
  }
LABEL_64:
  if ( dword_7CF4C > 2 )
    puts("process_private: all okay, into handler");
  return (unsigned __int16 *)(*((int (__fastcall **)(unsigned __int16 *, int, unsigned __int16 *))v11 + 2))(v5, v6, v36);
}
