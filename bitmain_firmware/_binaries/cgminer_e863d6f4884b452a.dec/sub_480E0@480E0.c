_DWORD *__fastcall sub_480E0(const char *a1)
{
  _QWORD *v2; // r0
  _DWORD *v3; // r4
  void *v4; // r0
  void *v6; // r0

  if ( !a1 )
    return 0;
  v2 = sub_47850((void *)0xC);
  if ( !v2 )
    return 0;
  v3 = v2;
  *v2 = 0x100000002LL;
  v4 = sub_47870(a1);
  v3[2] = v4;
  if ( !v4 )
  {
    v6 = v3;
    v3 = 0;
    sub_47860(v6);
  }
  return v3;
}
