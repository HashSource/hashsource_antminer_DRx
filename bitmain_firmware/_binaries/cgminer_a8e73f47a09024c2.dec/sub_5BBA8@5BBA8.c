_DWORD *sub_5BBA8()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_5B2A8(0x24u);
  v1 = v0;
  if ( !v0 )
    return 0;
  *v0 = 0;
  v0[1] = 1;
  if ( sub_5960C(v0 + 2) )
  {
    sub_5B2D0(v1);
    return 0;
  }
  else
  {
    v1[7] = 0;
    v1[8] = 0;
    return v1;
  }
}
