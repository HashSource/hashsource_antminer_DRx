int __fastcall sub_111CC(int result)
{
  int v1; // r4
  const char *v2; // r0
  const char *v3; // r3
  int v4; // r0
  char *v5; // r3
  int optval; // [sp+Ch] [bp-8h] BYREF

  v1 = dword_CA654;
  for ( optval = result; v1; v1 = *(_DWORD *)v1 )
  {
    if ( (*(_DWORD *)(v1 + 140) & 0x80) == 0 )
    {
      if ( dword_7CF4C > 3 )
      {
        v2 = (const char *)sub_50CD0(v1 + 20);
        v3 = "on";
        if ( !optval )
          v3 = "off";
        printf("setting SO_REUSEADDR on %.16s@%s to %s\n", (const char *)(v1 + 104), v2, v3);
      }
      result = *(_DWORD *)(v1 + 8);
      if ( result != -1 )
      {
        result = setsockopt(result, 1, 2, &optval, 4u);
        if ( result )
        {
          v4 = sub_50CD0(v1 + 20);
          v5 = "on";
          if ( !optval )
            v5 = "off";
          result = sub_4FE78(3, "set_reuseaddr: setsockopt(%s, SO_REUSEADDR, %s) failed: %m", v4, v5);
        }
      }
    }
  }
  return result;
}
