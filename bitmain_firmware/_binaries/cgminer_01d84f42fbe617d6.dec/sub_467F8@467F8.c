_DWORD *sub_467F8()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v2; // r5

  v0 = sub_45DE4(0x18u);
  v1 = v0;
  if ( !v0 )
    return 0;
  *v0 = 1;
  v0[1] = 1;
  v0[3] = 0;
  v0[2] = 8;
  v2 = sub_45DE4(0x20u);
  v1[4] = v2;
  if ( v2 )
  {
    v1[5] = 0;
    return v1;
  }
  else
  {
    sub_45E0C(v1);
    return 0;
  }
}
