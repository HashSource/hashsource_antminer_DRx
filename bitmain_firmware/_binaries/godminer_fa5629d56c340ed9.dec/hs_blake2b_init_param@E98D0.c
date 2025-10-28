int __fastcall hs_blake2b_init_param(_DWORD *a1, unsigned __int8 *a2)
{
  int *v4; // r3
  __int64 *v5; // r2
  __int64 v6; // r0
  int *v7; // lr
  __int64 v8; // t1
  unsigned __int8 *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // t1
  int v13; // r2

  memset(a1, 0, 0xF0u);
  v4 = a1 - 2;
  v5 = (__int64 *)&unk_17AF30;
  v6 = 0x6A09E667F3BCC908LL;
  v7 = a1 - 2;
  while ( 1 )
  {
    *((_QWORD *)v7 + 1) = v6;
    v7 += 2;
    if ( v7 == a1 + 14 )
      break;
    v8 = *v5++;
    v6 = v8;
  }
  v9 = a2;
  do
  {
    v10 = *(_DWORD *)v9;
    v11 = *((_DWORD *)v9 + 1);
    v9 += 8;
    v12 = v4[2];
    v4 += 2;
    v13 = v4[1];
    *v4 = v12 ^ v10;
    v4[1] = v13 ^ v11;
  }
  while ( v4 != v7 );
  a1[57] = *a2;
  return 0;
}
