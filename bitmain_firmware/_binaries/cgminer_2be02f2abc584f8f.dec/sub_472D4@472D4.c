int __fastcall sub_472D4(int a1, _WORD *a2)
{
  char *v4; // r4
  int v5; // t1
  char *v6; // r4
  unsigned int v8; // r2
  int v9; // r3
  char s[2024]; // [sp+18h] [bp-814h] BYREF
  _BYTE v11[4]; // [sp+817h] [bp-15h] BYREF
  char v12[4]; // [sp+81Bh] [bp-11h] BYREF
  char v13; // [sp+81Fh] [bp-Dh] BYREF
  int v14; // [sp+820h] [bp-Ch]
  __int16 v15; // [sp+824h] [bp-8h] BYREF

  v14 = 255;
  v15 = 0;
  v11[1] = 85;
  v11[2] = -86;
  v11[3] = 4;
  strcpy(v12, "%");
  v12[2] = 41;
  pthread_mutex_lock(&stru_75D68);
  v4 = v11;
  do
  {
    v5 = (unsigned __int8)*++v4;
    sub_43628(a1, v5);
  }
  while ( v4 != &v12[2] );
  sub_2FF48();
  v6 = &v13;
  do
    *++v6 = sub_4363C(a1);
  while ( v6 != (char *)&v15 + 1 );
  pthread_mutex_unlock(&stru_75D68);
  sub_2FF48();
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(
      s,
      0x800u,
      "--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, re"
      "ad_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n",
      "get_PIC16F1704_freq_new",
      (unsigned __int8)v14,
      BYTE1(v14),
      BYTE2(v14),
      HIBYTE(v14),
      (unsigned __int8)v15,
      HIBYTE(v15));
    sub_3F1C0(7, s, 0);
  }
  if ( BYTE1(v14) == 37 && (unsigned __int8)v14 == 6 )
  {
    v8 = BYTE2(v14) + HIBYTE(v14) + 43;
    if ( (unsigned __int8)v15 == v8 >> 8 && HIBYTE(v15) == (unsigned __int8)v8 )
    {
      v9 = HIBYTE(v14) | (BYTE2(v14) << 8);
      *a2 = _byteswap_ushort(HIWORD(v14));
      if ( byte_75C09 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
        {
          snprintf(s, 0x800u, "\n--- %s ok, freq = %d\n\n", "get_PIC16F1704_freq_new", v9);
          sub_3F1C0(7, s, 0);
          return 1;
        }
        else
        {
          return 1;
        }
      }
      else
      {
        return 1;
      }
    }
    else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(s, 0x800u, "\n--- %s failed! crc = 0x%04x\n\n", "get_PIC16F1704_freq_new", BYTE2(v14) + HIBYTE(v14) + 43);
      sub_3F1C0(3, s, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(s, 0x800u, aSFailed_1, "get_PIC16F1704_freq_new");
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
