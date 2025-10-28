int __fastcall sub_11C2C(int a1, char *a2)
{
  sub_30270(a1, a2);
  if ( !sub_30358(a2, a1 + 600, a1 + 584) )
    return 0;
  if ( strncasecmp(a2, "stratum+tcp://", 0xEu) )
    return 0;
  *(_DWORD *)(a1 + 172) = _strdup(a2);
  *(_BYTE *)(a1 + 640) = 1;
  *(_DWORD *)(a1 + 576) = *(_DWORD *)(a1 + 600);
  return 1;
}
