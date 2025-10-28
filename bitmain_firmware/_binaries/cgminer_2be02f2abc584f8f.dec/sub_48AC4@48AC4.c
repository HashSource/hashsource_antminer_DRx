void __fastcall sub_48AC4(int a1, int a2)
{
  _BYTE *v4; // r6
  char v5; // r2
  char v6; // r1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(s, 0x800u, "Chain %d %s", a1, "set_temperature_offset_value_chain_sensor");
    sub_3F1C0(4, s, 0);
  }
  v4 = &byte_77C08[3 * a1 + a2];
  sub_48488(a1, a2, 2, (unsigned __int8)v4[4064] | 0x1991100);
  sub_48488(a1, a2, 2, 26743040);
  v5 = v4[4076];
  v6 = v4[4064];
  if ( v5 == v6 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(
        s,
        0x800u,
        "%s: Chain%d Sensor%d temp offset : %02d, ",
        "set_temperature_offset_value_chain_sensor",
        a1,
        a2,
        v5);
      sub_3F1C0(5, s, 0);
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s: Chain%d Sensor%d temp offset value set error. It should be %02d, but read back is %02d\n",
      "set_temperature_offset_value_chain_sensor",
      a1,
      a2,
      v6,
      v5);
    sub_3F1C0(3, s, 0);
  }
}
