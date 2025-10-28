_BYTE *__fastcall sub_2D0B4(char *a1, int a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r4
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = calloc(4 - (2 * a2 + 1) % 4 + 2 * a2 + 1, 1u);
  v5 = v4;
  if ( !v4 )
  {
    snprintf(s, 0x800u, "Failed to calloc in %s %s():%d", "util.c", "bin2hex", 920);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  sub_2D050(v4, a1, a2);
  return v5;
}
