_DWORD *sub_47EE4()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  void *v3; // r0

  v0 = sub_47850((void *)0x24);
  v1 = v0;
  if ( v0 )
  {
    *v0 = 0;
    v0[1] = 1;
    if ( sub_46564(v0 + 2) )
    {
      v3 = v1;
      v1 = 0;
      sub_47860(v3);
    }
    else
    {
      v1[7] = 0;
      v1[8] = 0;
    }
  }
  return v1;
}
