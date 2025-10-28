int __fastcall sub_150B4(int a1, char *a2)
{
  char *v5; // r0
  int v6; // r2

  sub_2B358(a1, a2);
  if ( !sub_2B43C(a2, a1 + 592, a1 + 576) || strncasecmp(a2, "stratum+tcp://", 0xEu) )
    return 0;
  v5 = _strdup(a2);
  v6 = *(_DWORD *)(a1 + 592);
  *(_BYTE *)(a1 + 632) = 1;
  *(_DWORD *)(a1 + 568) = v6;
  *(_DWORD *)(a1 + 164) = v5;
  return 1;
}
