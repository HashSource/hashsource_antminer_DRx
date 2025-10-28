int __fastcall sub_4538C(int a1)
{
  char *v2; // r4
  int v3; // t1
  char *v4; // r4
  int v5; // r4
  char s[2024]; // [sp+18h] [bp-810h] BYREF
  _BYTE v8[6]; // [sp+817h] [bp-11h] BYREF
  char v9; // [sp+81Dh] [bp-Bh] BYREF
  char v10; // [sp+81Fh] [bp-9h] BYREF
  int v11; // [sp+820h] [bp-8h]
  __int16 v12; // [sp+824h] [bp-4h] BYREF

  v11 = 255;
  v12 = 0;
  v8[5] = 0;
  v8[1] = 85;
  v8[2] = -86;
  v8[3] = 4;
  v8[4] = 22;
  v9 = 26;
  pthread_mutex_lock(&stru_75D68);
  v2 = v8;
  do
  {
    v3 = (unsigned __int8)*++v2;
    sub_43628(a1, v3);
  }
  while ( v2 != &v9 );
  sub_2FF48();
  v4 = &v10;
  do
    *++v4 = sub_4363C(a1);
  while ( v4 != (char *)&v12 + 1 );
  pthread_mutex_unlock(&stru_75D68);
  v5 = BYTE1(v11);
  if ( BYTE1(v11) == 22 && BYTE2(v11) == 1 )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(s, 0x800u, "%s ok", "heart_beat_PIC16F1704_new");
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
  else if ( (byte_78D98 || byte_75C08 || dword_734EC > 2)
         && ((snprintf(s, 0x800u, "%s failed!", "heart_beat_PIC16F1704_new"), sub_3F1C0(3, s, 0), byte_78D98)
          || byte_75C08)
         || dword_734EC > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n",
      "heart_beat_PIC16F1704_new",
      (unsigned __int8)v11,
      v5,
      BYTE2(v11),
      HIBYTE(v11),
      (unsigned __int8)v12,
      HIBYTE(v12));
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
