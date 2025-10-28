int sub_4A490()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(v1, 0x800u, "%s: sweep frequency", "sweep_frequency");
    sub_3F1C0(5, v1, 0);
  }
  sub_49968(0);
  sub_49968(1);
  sub_49968(2);
  sub_49968(3);
  return sub_2FF20();
}
