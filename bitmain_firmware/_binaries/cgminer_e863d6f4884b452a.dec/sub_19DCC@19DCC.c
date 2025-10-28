int __fastcall sub_19DCC(int a1, char *a2)
{
  int v4; // r5
  char *v6; // r0
  int v7; // r3

  sub_2A8E0(a1, a2);
  v4 = sub_2A97C(a2, a1 + 600, a1 + 584);
  if ( !v4 )
    return v4;
  if ( strncasecmp(a2, "stratum+tcp://", 0xEu) )
    return 0;
  v6 = _strdup(a2);
  v7 = *(_DWORD *)(a1 + 600);
  *(_DWORD *)(a1 + 172) = v6;
  *(_BYTE *)(a1 + 640) = 1;
  *(_DWORD *)(a1 + 576) = v7;
  return v4;
}
