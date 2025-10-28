int __fastcall sub_12370(int result)
{
  int v1; // r5
  int *v2; // r3
  int v3; // r4
  int v4; // r2
  int v5; // t1
  int v6; // r1

  v1 = dword_802C8 - 1;
  if ( dword_802C8 > 0 )
  {
    v2 = (int *)dword_80568;
    v3 = dword_80568 + 4 * dword_802C8;
    do
    {
      v5 = *v2++;
      v4 = v5;
      v6 = *(_DWORD *)(v5 + 4);
      if ( v6 > *(_DWORD *)(result + 4) )
        *(_DWORD *)(v4 + 4) = v6 - 1;
    }
    while ( v2 != (int *)v3 );
  }
  if ( v1 > *(_DWORD *)result )
  {
    **(_DWORD **)(dword_80568 + 4 * v1) = *(_DWORD *)result;
    *(_DWORD *)(dword_80568 + 4 * *(_DWORD *)result) = *(_DWORD *)(dword_80568 + 4 * v1);
  }
  *(_DWORD *)result = dword_802C8;
  *(_BYTE *)(result + 105) = 1;
  --dword_802C8;
  return result;
}
