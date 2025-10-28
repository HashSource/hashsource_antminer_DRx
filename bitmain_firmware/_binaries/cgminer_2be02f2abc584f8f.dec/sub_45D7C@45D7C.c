int __fastcall sub_45D7C(int a1, int a2)
{
  int v3; // r3
  __int16 v4; // r2
  int v5; // r1
  char *v6; // r3
  char v7; // t1
  char *v8; // r4
  int v9; // t1
  char s[2036]; // [sp+Ch] [bp-814h] BYREF
  _BYTE v12[4]; // [sp+80Bh] [bp-15h] BYREF
  char v13; // [sp+80Fh] [bp-11h] BYREF
  int v14; // [sp+810h] [bp-10h]
  int v15; // [sp+814h] [bp-Ch] BYREF
  char v16; // [sp+818h] [bp-8h]
  char v17; // [sp+819h] [bp-7h] BYREF
  unsigned __int8 v18; // [sp+81Ch] [bp-4h]
  unsigned __int8 v19; // [sp+81Dh] [bp-3h]

  v3 = 0;
  v14 = 0;
  v15 = 0;
  v4 = 46;
  do
    v4 += *(unsigned __int8 *)(a2 + v3++);
  while ( v3 != 8 );
  v12[1] = 85;
  v12[2] = -86;
  v12[3] = 12;
  v13 = 34;
  v5 = a2 - 1;
  v6 = &v13;
  do
  {
    v7 = *(_BYTE *)++v5;
    *++v6 = v7;
  }
  while ( v6 != (char *)&v15 + 3 );
  v16 = HIBYTE(v4);
  v17 = v4;
  pthread_mutex_lock(&stru_75D68);
  v8 = v12;
  do
  {
    v9 = (unsigned __int8)*++v8;
    sub_43628(a1, v9);
  }
  while ( v8 != &v17 );
  sub_2FF48();
  v18 = sub_4363C(a1);
  v19 = sub_4363C(a1);
  pthread_mutex_unlock(&stru_75D68);
  sub_2FF48();
  if ( v18 == 34 && v19 == 1 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "write_temperature_offset_PIC16F1704_new");
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
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x",
      "write_temperature_offset_PIC16F1704_new",
      v18,
      v19);
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
