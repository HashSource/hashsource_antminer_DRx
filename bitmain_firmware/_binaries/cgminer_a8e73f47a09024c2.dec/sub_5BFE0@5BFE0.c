_DWORD *__fastcall sub_5BFE0(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  void *v4; // r0

  if ( !a1 )
    return 0;
  v2 = sub_5B2A8(0xCu);
  v3 = v2;
  if ( !v2 )
    return 0;
  *v2 = 2;
  v2[1] = 1;
  v4 = sub_5B2F0(a1);
  v3[2] = v4;
  if ( v4 )
    return v3;
  sub_5B2D0(v3);
  return 0;
}
