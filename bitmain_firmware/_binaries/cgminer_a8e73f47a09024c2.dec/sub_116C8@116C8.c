int __fastcall sub_116C8(int a1, int a2)
{
  unsigned __int64 v4; // r2
  unsigned __int64 v5; // r0
  unsigned int v6; // r3
  int result; // r0
  unsigned int v8; // r1

  v4 = *(unsigned int *)(a1 + 208);
  v5 = *(_QWORD *)(a1 + 192) + v4;
  *(_QWORD *)(a1 + 192) = v5;
  if ( v5 < v4 )
    ++*(_QWORD *)(a1 + 200);
  v6 = *(_DWORD *)(a1 + 208);
  if ( v6 <= 0x7F )
  {
    do
      *(_BYTE *)(a1 + v6++) = 0;
    while ( v6 != 128 );
    *(_DWORD *)(a1 + 208) = 128;
  }
  result = (int)sub_B570(a1, 1);
  if ( *(_DWORD *)(a1 + 212) )
  {
    v8 = 0;
    do
    {
      result = 8 * (v8 & 7);
      *(_BYTE *)(a2 + v8) = *(_QWORD *)(a1 + (v8 & 0xFFFFFFF8) + 128) >> result;
      ++v8;
    }
    while ( *(_DWORD *)(a1 + 212) > v8 );
  }
  return result;
}
