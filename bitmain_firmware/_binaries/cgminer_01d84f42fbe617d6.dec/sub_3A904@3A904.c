bool __fastcall sub_3A904(int a1, _BYTE *a2)
{
  int v2; // r2
  size_t v4; // r0
  _BOOL4 result; // r0
  char v6[32]; // [sp+0h] [bp-824h] BYREF
  char s[2048]; // [sp+20h] [bp-804h] BYREF

  v2 = *(_DWORD *)&aBitmainL3Detec_0[8 * a1 + 76];
  memset(v6, 0, sizeof(v6));
  sprintf(v6, "%08x", v2);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "regdata: %s", v6);
    sub_38438(7, s, 0);
  }
  v4 = strlen(v6);
  result = sub_295B8(a2, (unsigned __int8 *)v6, v4 >> 1);
  if ( !result )
  {
    snprintf(s, 0x800u, "Invalid vil plldata for reg data, hex2bin error now: %s", v6);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  return result;
}
