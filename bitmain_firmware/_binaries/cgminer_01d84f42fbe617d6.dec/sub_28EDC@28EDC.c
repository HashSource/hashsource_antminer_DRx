int __fastcall sub_28EDC(const char *a1, const char *a2, int a3)
{
  const char *v3; // r4
  signed int v6; // r0
  int v7; // r3
  int v8; // r12
  int v9; // t1
  int result; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = a1;
  if ( a1 )
  {
    v6 = strlen(a1);
    if ( v6 <= 0 )
      return 1;
    v7 = *(unsigned __int8 *)v3;
    if ( dword_51788[v7] >= 0 )
    {
      v8 = 0;
      while ( v6 != ++v8 )
      {
        v9 = *(unsigned __int8 *)++v3;
        v7 = v9;
        if ( dword_51788[v9] < 0 )
          goto LABEL_10;
      }
      return 1;
    }
LABEL_10:
    if ( byte_632F0 || (result = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 2 )
    {
      snprintf(s, 0x800u, "Invalid char 0x%x passed to valid_hex from in %s %s():%d", v7, "util.c", a2, a3);
LABEL_14:
      sub_38438(3, s, 0);
      return 0;
    }
  }
  else if ( byte_632F0 || (result = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 2 )
  {
    snprintf(s, 0x800u, "Null string passed to valid_hex from in %s %s():%d", "util.c", a2, a3);
    goto LABEL_14;
  }
  return result;
}
