int __fastcall sub_19A4C(int a1, int a2, int a3, unsigned int a4)
{
  bool v4; // cc
  __int64 *v5; // r5
  __int64 *v6; // r4
  __int64 i; // r6
  __int64 v8; // t1
  int v9; // r4
  unsigned int v10; // r5
  int v11; // r6
  unsigned int v12; // r4

  v4 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v4 = (unsigned int)(a2 - 1) > 0x3F;
  if ( v4 )
    return -1;
  v5 = (__int64 *)&unk_4A3E8;
  v6 = (__int64 *)(a1 + 128);
  for ( i = 0x6A09E667F3BCC908LL; ; i = v8 )
  {
    *v6++ = i;
    if ( v6 == (__int64 *)(a1 + 192) )
      break;
    v8 = *v5++;
  }
  v9 = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 212) = a2;
  v10 = a4 - 1 + a1;
  v11 = a2 ^ (a4 << 8) ^ 0x1010000 ^ v9;
  v12 = a4;
  *(_DWORD *)(a1 + 128) = v11;
  *(_DWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  do
  {
    ++v12;
    *(_BYTE *)++v10 = 0;
  }
  while ( v12 != 128 );
  if ( a4 )
  {
    sub_199D8(a1, a3, a4);
    *(_DWORD *)(a1 + 208) = 128;
  }
  return 0;
}
