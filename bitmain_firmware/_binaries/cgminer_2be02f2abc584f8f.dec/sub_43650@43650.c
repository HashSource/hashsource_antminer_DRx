int __fastcall sub_43650(int a1, __int16 a2, __int16 a3)
{
  char *v4; // r4
  int v5; // t1
  char s[2036]; // [sp+Ch] [bp-80Ch] BYREF
  _BYTE v8[8]; // [sp+80Bh] [bp-Dh] BYREF
  char v9; // [sp+813h] [bp-5h] BYREF
  unsigned __int8 v10; // [sp+814h] [bp-4h]
  unsigned __int8 v11; // [sp+815h] [bp-3h]

  v8[1] = 85;
  v8[2] = -86;
  v8[3] = 6;
  v8[4] = 1;
  v8[5] = a2;
  v8[6] = a3;
  v8[7] = (unsigned __int16)(a3 + a2 + 7) >> 8;
  v9 = a3 + a2 + 7;
  pthread_mutex_lock(&stru_75D68);
  v4 = v8;
  do
  {
    v5 = (unsigned __int8)*++v4;
    sub_43628(a1, v5);
  }
  while ( v4 != &v9 );
  sub_2FF48();
  v10 = sub_4363C(a1);
  v11 = sub_4363C(a1);
  pthread_mutex_unlock(&stru_75D68);
  if ( v10 == 1 && v11 == 1 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "set_PIC16F1704_flash_pointer_new");
      sub_3F1C0(5, s, 0);
      return 1;
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
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "set_PIC16F1704_flash_pointer_new",
      v10,
      v11);
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
