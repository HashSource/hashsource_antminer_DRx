int __fastcall sub_444A8(int a1)
{
  char *v2; // r4
  int v3; // t1
  char s[2036]; // [sp+Ch] [bp-80Ch] BYREF
  _BYTE v6[6]; // [sp+80Bh] [bp-Dh] BYREF
  char v7; // [sp+811h] [bp-7h] BYREF
  unsigned __int8 v8; // [sp+814h] [bp-4h]
  unsigned __int8 v9; // [sp+815h] [bp-3h]

  v6[5] = 0;
  v6[1] = 85;
  v6[2] = -86;
  v6[3] = 4;
  v6[4] = 6;
  v7 = 10;
  pthread_mutex_lock(&stru_75D68);
  v2 = v6;
  do
  {
    v3 = (unsigned __int8)*++v2;
    sub_43628(a1, v3);
  }
  while ( v2 != &v7 );
  sub_2FF48();
  v8 = sub_4363C(a1);
  v9 = sub_4363C(a1);
  pthread_mutex_unlock(&stru_75D68);
  sub_2FF48();
  if ( v8 == 6 && v9 == 1 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "jump_from_loader_to_app_PIC16F1704_new");
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
      "jump_from_loader_to_app_PIC16F1704_new",
      v8,
      v9);
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
