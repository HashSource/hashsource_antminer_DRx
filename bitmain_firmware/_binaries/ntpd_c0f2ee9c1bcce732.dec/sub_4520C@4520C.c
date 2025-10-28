int __fastcall sub_4520C(int result, int a2)
{
  int v2; // r6
  char *v3; // r0
  const char *v4; // r3
  char s[1028]; // [sp+8h] [bp-404h] BYREF

  v2 = result;
  if ( dword_C9AA0 )
  {
    if ( dword_C9AA0 == 1 )
    {
      v3 = getenv("PAGER");
      v4 = "more";
      if ( v3 )
        v4 = v3;
      snprintf(s, 0x400u, "%1$s /tmp/use.%2$lu ; rm -f /tmp/use.%2$lu", v4, dword_C9AA4);
      fclose((FILE *)stderr);
      dup2(1, 2);
      return system(s);
    }
  }
  else if ( (*(_DWORD *)(a2 + 16) & 8) == 0 )
  {
    dword_C9AA4 = getpid();
    snprintf(s, 0x400u, "/tmp/use.%lu", dword_C9AA4);
    unlink(s);
    dword_C9A98 = (int)fopen(s, "w");
    if ( dword_C9A98 )
    {
      dword_C9AA0 = 1;
      sub_5B388(sub_4520C);
      (*(void (__fastcall **)(int, _DWORD))(v2 + 84))(v2, 0);
      exit(1);
    }
    exit(1);
  }
  return result;
}
