int __fastcall sub_212F8(int a1, _DWORD *a2)
{
  _DWORD *v5; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sub_1AB78(a1, (int)a2);
  if ( sub_2F768(a2 + 61, a2 + 53) )
  {
    v5 = sub_185B4(a2, 0);
    sub_208B0((int)v5);
    return 1;
  }
  else if ( byte_7CC61 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
    {
      snprintf(
        s,
        0x800u,
        "%s %s %d: Share above target",
        "submit_tested_work",
        *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
      sub_3F178(7, s, 0);
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
