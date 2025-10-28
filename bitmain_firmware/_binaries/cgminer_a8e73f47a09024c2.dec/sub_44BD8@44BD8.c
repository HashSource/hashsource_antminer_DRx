int __fastcall sub_44BD8(int a1, int a2)
{
  int v3; // r3
  __int16 v4; // r2
  int v5; // r1
  char *v6; // r3
  char v7; // t1
  char *v8; // r4
  int v9; // t1
  char s[2036]; // [sp+Ch] [bp-81Ch] BYREF
  _BYTE v12[4]; // [sp+80Bh] [bp-1Dh] BYREF
  char v13; // [sp+80Fh] [bp-19h] BYREF
  int v14; // [sp+810h] [bp-18h]
  int v15; // [sp+814h] [bp-14h]
  int v16; // [sp+818h] [bp-10h]
  int v17; // [sp+81Ch] [bp-Ch] BYREF
  char v18; // [sp+820h] [bp-8h]
  char v19; // [sp+821h] [bp-7h] BYREF
  unsigned __int8 v20; // [sp+824h] [bp-4h]
  unsigned __int8 v21; // [sp+825h] [bp-3h]

  v3 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v4 = 22;
  do
    v4 += *(unsigned __int8 *)(a2 + v3++);
  while ( v3 != 16 );
  v12[1] = 85;
  v12[2] = -86;
  v12[3] = 20;
  v13 = 2;
  v5 = a2 - 1;
  v6 = &v13;
  do
  {
    v7 = *(_BYTE *)++v5;
    *++v6 = v7;
  }
  while ( v6 != (char *)&v17 + 3 );
  v18 = HIBYTE(v4);
  v19 = v4;
  pthread_mutex_lock(&stru_7CE20);
  v8 = v12;
  do
  {
    v9 = (unsigned __int8)*++v8;
    sub_449F0(a1, v9);
  }
  while ( v8 != &v19 );
  sub_30168();
  v20 = sub_44A04(a1);
  v21 = sub_44A04(a1);
  pthread_mutex_unlock(&stru_7CE20);
  if ( v20 == 2 && v21 == 1 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "send_data_to_PIC16F1704_new");
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
      "send_data_to_PIC16F1704_new",
      v20,
      v21);
    sub_3F178(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
