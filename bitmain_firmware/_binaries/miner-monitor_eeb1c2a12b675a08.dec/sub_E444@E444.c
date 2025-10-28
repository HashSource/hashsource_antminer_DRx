int __fastcall sub_E444(_DWORD *a1, _DWORD *a2)
{
  void *v4; // r0
  void *v5; // r0

  v4 = malloc(0x9087u);
  *a1 = v4;
  if ( !v4 || (a1[2] = 0, a1[1] = 0, v5 = malloc(0x9087u), (*a2 = v5) == 0) )
    exit(0);
  a2[2] = 0;
  a2[1] = 0;
  return 1;
}
