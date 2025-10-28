int __fastcall sub_44838(int a1, int a2)
{
  char *v4; // r4
  int v5; // t1
  char s[2036]; // [sp+Ch] [bp-810h] BYREF
  _BYTE v8[7]; // [sp+80Bh] [bp-11h] BYREF
  char v9; // [sp+812h] [bp-Ah] BYREF
  unsigned __int8 v10; // [sp+814h] [bp-8h]
  unsigned __int8 v11; // [sp+815h] [bp-7h]

  v8[1] = 85;
  v8[2] = -86;
  v8[3] = 5;
  v8[4] = 16;
  v8[5] = a2;
  v8[6] = (unsigned __int16)(a2 + 21) >> 8;
  v9 = a2 + 21;
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
  sub_2FF48();
  if ( v10 == 16 && v11 == 1 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "%s ok, voltage = 0x%02x", "set_PIC16F1704_voltage_new", a2);
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
      "set_PIC16F1704_voltage_new",
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
