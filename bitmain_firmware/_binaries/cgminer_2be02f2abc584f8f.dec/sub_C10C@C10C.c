int __fastcall sub_C10C(int a1, int a2)
{
  _DWORD *v2; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = *(_DWORD **)(a1 + 36);
  if ( v2[59] == a2 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(s, 0x800u, "%s %d duplicate share detected as HW error", *(const char **)(v2[1] + 8), v2[2]);
      sub_3F1C0(3, s, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v2[59] = a2;
    return 1;
  }
}
