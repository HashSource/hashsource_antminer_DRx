_BYTE *__fastcall sub_27634(int a1)
{
  _BYTE *v2; // r0
  _BYTE *v3; // r4
  const char *v5; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = malloc(0x80u);
  if ( !v2 )
  {
    v5 = "original";
    if ( *(_BYTE *)(a1 + 100) )
      v5 = "copy";
    snprintf(s, 0x800u, "Failed to allocate device_drv copy of %s (%s)", *(const char **)(a1 + 8), v5);
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  v3 = v2;
  memcpy(v2, (const void *)a1, 0x80u);
  v3[100] = 1;
  return v3;
}
