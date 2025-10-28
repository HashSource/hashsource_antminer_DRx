_DWORD *sub_46620()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4

  v0 = sub_45DE4(0x24u);
  v1 = v0;
  if ( !v0 )
    return 0;
  v0[1] = 1;
  *v0 = 0;
  if ( sub_4426C(v0 + 2) )
  {
    sub_45E0C(v1);
    return 0;
  }
  else
  {
    v1[7] = 0;
    v1[8] = 0;
    return v1;
  }
}
