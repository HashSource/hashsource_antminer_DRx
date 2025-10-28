int __fastcall sub_25A94(int a1, _DWORD *a2)
{
  int result; // r0
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_1A0F8(a1, (int)a2);
  if ( sub_2A898(a2 + 48, a2 + 40) )
  {
    v5 = sub_19E18(a2, 0);
    sub_252E4((int)v5, v6, v7);
    return 1;
  }
  else if ( byte_630C1 )
  {
    if ( byte_632F0 || (result = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6 )
    {
      snprintf(
        s,
        0x800u,
        "%s %s %d: Share above target",
        "submit_tested_work",
        *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
      sub_38438(7, s, 0);
      return 0;
    }
  }
  else
  {
    return 0;
  }
  return result;
}
