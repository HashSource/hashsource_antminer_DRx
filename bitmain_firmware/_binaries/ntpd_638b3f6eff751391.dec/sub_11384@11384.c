int __fastcall sub_11384(int result, int a2)
{
  int *v2; // r3
  int v3; // r4
  char *v4; // r2
  int v5; // r0
  const char *v6; // r4
  const char *v7; // r0
  int optval; // [sp+Ch] [bp-4h] BYREF

  if ( result == 2 )
    v2 = &dword_CA608;
  else
    v2 = &dword_CA644;
  optval = a2;
  v3 = *v2;
  if ( *v2 )
  {
    result = *(_DWORD *)(v3 + 8);
    if ( result != -1 )
    {
      result = setsockopt(result, 1, 2, &optval, 4u);
      if ( result )
      {
        v4 = "off";
        if ( optval )
          v4 = "on";
        result = sub_4FE78(3, "set_wildcard_reuse: setsockopt(SO_REUSEADDR, %s) failed: %m", v4);
      }
      if ( dword_7CF4C > 3 )
      {
        v5 = v3 + 20;
        if ( optval )
          v6 = "on";
        else
          v6 = "off";
        v7 = (const char *)sub_50CD0(v5);
        return printf("set SO_REUSEADDR to %s on %s\n", v6, v7);
      }
    }
  }
  return result;
}
