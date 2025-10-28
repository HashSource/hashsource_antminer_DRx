int __fastcall sub_210E8(int a1, _DWORD *a2)
{
  _DWORD *v5; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_1A998(a1, (int)a2);
  if ( sub_2F548(a2 + 61, a2 + 53) )
  {
    v5 = sub_183D4(a2, 0);
    sub_206AC((int)v5);
    return 1;
  }
  else if ( byte_75C09 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
    {
      snprintf(
        s,
        0x800u,
        "%s %s %d: Share above target",
        "submit_tested_work",
        *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
      sub_3F1C0(7, s, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
}
