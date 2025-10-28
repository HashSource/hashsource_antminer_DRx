int __fastcall sub_470E8(int a1, unsigned int a2)
{
  char *v3; // r4
  int v4; // t1
  char s[2036]; // [sp+Ch] [bp-80Ch] BYREF
  _BYTE v7[8]; // [sp+80Bh] [bp-Dh] BYREF
  char v8; // [sp+813h] [bp-5h] BYREF
  unsigned __int8 v9; // [sp+814h] [bp-4h]
  unsigned __int8 v10; // [sp+815h] [bp-3h]

  v7[1] = 85;
  v7[2] = -86;
  v7[3] = 6;
  v7[4] = 36;
  v7[5] = BYTE1(a2);
  v7[6] = a2;
  v7[7] = (unsigned __int16)((a2 >> 8) + (unsigned __int8)a2 + 42) >> 8;
  v8 = BYTE1(a2) + a2 + 42;
  pthread_mutex_lock(&stru_75D68);
  v3 = v7;
  do
  {
    v4 = (unsigned __int8)*++v3;
    sub_43628(a1, v4);
  }
  while ( v3 != &v8 );
  sub_2FF48();
  v9 = sub_4363C(a1);
  v10 = sub_4363C(a1);
  pthread_mutex_unlock(&stru_75D68);
  sub_2FF48();
  if ( v9 == 36 && v10 == 1 )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(s, 0x800u, "\n--- %s ok\n\n", "save_freq_PIC16F1704_new");
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
    snprintf(
      s,
      0x800u,
      "\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "save_freq_PIC16F1704_new",
      v9,
      v10);
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
