int __fastcall sub_17148(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v5; // r5
  char *endptr; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  endptr = &byte_57FF0;
  v2 = strtol((const char *)a1, &endptr, 10);
  v3 = v2 == 0;
  if ( v2 >= 0 )
    v3 = *endptr == 0;
  if ( v3 )
  {
    v5 = v2;
    dword_6D86C = (int)fdopen(v2, "a");
    if ( dword_6D86C || !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return 0;
    snprintf(s, 0x800u, "Failed to open fd %u for share log", v5);
    goto LABEL_12;
  }
  if ( *(_BYTE *)a1 != 45 || *(_BYTE *)(a1 + 1) )
  {
    dword_6D86C = (int)fopen((const char *)a1, "a");
    if ( dword_6D86C || !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return 0;
    snprintf(s, 0x800u, "Failed to open %s for share log", a1);
LABEL_12:
    sub_343C4(3, s, 0);
    return 0;
  }
  dword_6D86C = stdout;
  if ( stdout || !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
    return 0;
  strcpy(s, "Standard output missing for share log");
  sub_343C4(3, s, 0);
  return 0;
}
