int __fastcall sub_10EE0(int a1)
{
  int v1; // r6
  int v3; // r0
  int v4; // r5
  const char *v5; // r6
  const char *v6; // r0

  v1 = *(_DWORD *)(a1 + 176);
  v3 = a1 + 20;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v1 )
    v5 = "Listen and drop";
  else
    v5 = "Listen normally";
  v6 = (const char *)sub_50CD0(v3);
  return sub_4FE78(
           6,
           "%s on %d %s %s UDP %d",
           v5,
           v4,
           (const char *)(a1 + 104),
           v6,
           (unsigned __int16)((*(_WORD *)(a1 + 22) << 8) | HIBYTE(*(_WORD *)(a1 + 22))));
}
