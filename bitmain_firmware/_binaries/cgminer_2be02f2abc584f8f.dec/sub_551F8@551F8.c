int __fastcall sub_551F8(_DWORD *a1)
{
  int v1; // r2
  int v2; // r3

  v1 = a1[1];
  v2 = *(unsigned __int8 *)(*a1 + v1);
  if ( !*(_BYTE *)(*a1 + v1) )
    return -1;
  a1[1] = v1 + 1;
  return v2;
}
