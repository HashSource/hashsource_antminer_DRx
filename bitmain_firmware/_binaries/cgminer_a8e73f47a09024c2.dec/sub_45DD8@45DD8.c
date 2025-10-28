int __fastcall sub_45DD8(int a1, int a2)
{
  int v3; // r3
  __int16 v4; // r2
  int v5; // r1
  char *v6; // r3
  char v7; // t1
  char *v8; // r4
  int v9; // t1
  char s[2040]; // [sp+8h] [bp-818h] BYREF
  _BYTE v12[4]; // [sp+807h] [bp-19h] BYREF
  char v13; // [sp+80Bh] [bp-15h] BYREF
  int v14; // [sp+80Ch] [bp-14h]
  int v15; // [sp+810h] [bp-10h]
  int v16; // [sp+814h] [bp-Ch] BYREF
  char v17; // [sp+818h] [bp-8h]
  char v18; // [sp+819h] [bp-7h] BYREF
  unsigned __int8 v19; // [sp+81Ch] [bp-4h]
  unsigned __int8 v20; // [sp+81Dh] [bp-3h]

  v3 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v4 = 34;
  do
    v4 += *(unsigned __int8 *)(a2 + v3++);
  while ( v3 != 12 );
  v12[1] = 85;
  v12[2] = -86;
  v12[3] = 16;
  v13 = 18;
  v5 = a2 - 1;
  v6 = &v13;
  do
  {
    v7 = *(_BYTE *)++v5;
    *++v6 = v7;
  }
  while ( v6 != (char *)&v16 + 3 );
  v17 = HIBYTE(v4);
  v18 = v4;
  pthread_mutex_lock(&stru_7CE20);
  v8 = v12;
  do
  {
    v9 = (unsigned __int8)*++v8;
    sub_449F0(a1, v9);
  }
  while ( v8 != &v18 );
  sub_30168();
  v19 = sub_44A04(a1);
  v20 = sub_44A04(a1);
  pthread_mutex_unlock(&stru_7CE20);
  sub_30168();
  if ( v19 == 18 && v20 == 1 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "write_hash_ID_PIC16F1704_new");
      sub_3F178(5, s, 0);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "write_hash_ID_PIC16F1704_new",
      v19,
      v20);
    sub_3F178(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
