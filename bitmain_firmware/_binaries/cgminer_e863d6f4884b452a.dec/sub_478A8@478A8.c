int __fastcall sub_478A8(_DWORD *a1)
{
  _BYTE *v2; // r0

  a1[1] = 0;
  a1[2] = 16;
  v2 = sub_47850((void *)0x10);
  *a1 = v2;
  if ( !v2 )
    return -1;
  *v2 = 0;
  return 0;
}
