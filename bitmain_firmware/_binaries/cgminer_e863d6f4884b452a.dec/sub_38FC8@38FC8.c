int __fastcall sub_38FC8(int a1, int a2)
{
  int v3; // r0
  __int16 v4; // r3
  int v5; // r1
  int v6; // r2
  __int16 v7; // t1
  char *v8; // r1
  char v9; // t1
  char *v10; // r4
  int v11; // r5
  int v12; // t1
  __int64 v13; // r4
  int result; // r0
  char v15; // [sp+Bh] [bp-815h] BYREF
  _DWORD v16[4]; // [sp+Ch] [bp-814h] BYREF
  char v17; // [sp+1Ch] [bp-804h]
  char v18; // [sp+1Dh] [bp-803h] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v3 = a2 - 1;
  v4 = 34;
  v5 = a2 + 11;
  v6 = v3;
  memset(&v16[1], 0, 12);
  do
  {
    v7 = *(unsigned __int8 *)++v6;
    v4 += v7;
  }
  while ( v6 != v5 );
  v8 = (char *)v16 + 3;
  v16[0] = 303082069;
  do
  {
    v9 = *(_BYTE *)++v3;
    *++v8 = v9;
  }
  while ( v3 != v6 );
  v17 = HIBYTE(v4);
  v10 = &v15;
  v11 = (a1 << 16) | 0x400000;
  v18 = v4;
  pthread_mutex_lock(&stru_6FC94);
  do
  {
    v12 = (unsigned __int8)*++v10;
    sub_382C4(v12 | v11);
  }
  while ( &v18 != v10 );
  sub_2A810();
  LODWORD(v13) = sub_3832C(v11);
  HIDWORD(v13) = sub_3832C(v11);
  pthread_mutex_unlock(&stru_6FC94);
  sub_2A810();
  if ( v13 == 0x100000012LL )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "write_hash_ID_PIC16F1704_new");
      sub_343C4(5, s, 0);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else if ( byte_73320 || (result = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "write_hash_ID_PIC16F1704_new",
      (_DWORD)v13,
      HIDWORD(v13));
    sub_343C4(3, s, 0);
    return 0;
  }
  return result;
}
