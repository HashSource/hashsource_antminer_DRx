int __fastcall sub_5960C(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r3
  _DWORD *v5; // r0

  *a1 = 0;
  a1[2] = 0;
  v2 = sub_5B2A8(40);
  a1[1] = v2;
  if ( !v2 )
    return -1;
  v3 = a1 + 3;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  if ( !dword_706C4[a1[2]] )
    return 0;
  v4 = 0;
  do
  {
    v5 = (_DWORD *)(a1[1] + 8 * v4);
    v5[1] = v3;
    *v5 = v3;
    ++v4;
  }
  while ( v4 < dword_706C4[a1[2]] );
  return 0;
}
