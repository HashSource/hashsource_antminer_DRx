int __fastcall sub_59B4C(_DWORD *a1)
{
  unsigned int v1; // r3
  int v2; // r2

  v1 = a1[2];
  if ( v1 >= a1[1] )
    return -1;
  v2 = *(unsigned __int8 *)(*a1 + v1);
  a1[2] = v1 + 1;
  return v2;
}
