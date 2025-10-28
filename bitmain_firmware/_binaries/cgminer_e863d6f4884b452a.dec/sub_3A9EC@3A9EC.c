int __fastcall sub_3A9EC(int a1, _WORD *a2)
{
  int *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  int *v7; // r4
  int v8; // r5
  unsigned int v9; // r3
  int v11; // r1
  int v12; // [sp+18h] [bp-814h] BYREF
  __int16 v13; // [sp+1Ch] [bp-810h]
  char v14; // [sp+1Eh] [bp-80Eh] BYREF
  int v15; // [sp+20h] [bp-80Ch] BYREF
  __int16 v16; // [sp+24h] [bp-808h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v15 = 621062741;
  v16 = 10496;
  v3 = &v15;
  v12 = 255;
  v4 = (a1 << 16) | 0x400000;
  v13 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( v3 == (int *)((char *)&v16 + 1) )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (int *)((char *)v3 + 1);
  }
  v7 = &v12;
  sub_2A810();
  do
  {
    *(_BYTE *)v7 = sub_3832C(v4);
    v7 = (int *)((char *)v7 + 1);
  }
  while ( v7 != (int *)&v14 );
  pthread_mutex_unlock(&stru_6FC94);
  sub_2A810();
  v8 = BYTE1(v12);
  if ( byte_6FA71 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
    {
      if ( BYTE1(v12) != 37 )
        goto LABEL_24;
      if ( (unsigned __int8)v12 == 6 )
        goto LABEL_12;
LABEL_20:
      if ( byte_6FA70 )
        goto LABEL_21;
LABEL_24:
      if ( dword_6D35C <= 2 )
        return 0;
      goto LABEL_21;
    }
    snprintf(
      s,
      0x800u,
      "--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, re"
      "ad_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n",
      "get_PIC16F1704_freq_new",
      (unsigned __int8)v12,
      BYTE1(v12),
      BYTE2(v12),
      HIBYTE(v12),
      (unsigned __int8)v13,
      HIBYTE(v13));
    sub_343C4(7, s, 0);
  }
  if ( v8 != 37 || (unsigned __int8)v12 != 6 )
  {
    if ( byte_73320 )
    {
LABEL_21:
      snprintf(s, 0x800u, aSFailed_1, "get_PIC16F1704_freq_new");
LABEL_22:
      sub_343C4(3, s, 0);
      return 0;
    }
    goto LABEL_20;
  }
LABEL_12:
  v9 = BYTE2(v12) + HIBYTE(v12) + 43;
  if ( (unsigned __int8)v13 != v9 >> 8 || HIBYTE(v13) != (unsigned __int8)v9 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return 0;
    snprintf(s, 0x800u, "\n--- %s failed! crc = 0x%04x\n\n", "get_PIC16F1704_freq_new", BYTE2(v12) + HIBYTE(v12) + 43);
    goto LABEL_22;
  }
  v11 = HIBYTE(v12) | (BYTE2(v12) << 8);
  *a2 = _byteswap_ushort(HIWORD(v12));
  if ( !byte_6FA71 || !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
    return 1;
  snprintf(s, 0x800u, "\n--- %s ok, freq = %d\n\n", "get_PIC16F1704_freq_new", v11);
  sub_343C4(7, s, 0);
  return 1;
}
