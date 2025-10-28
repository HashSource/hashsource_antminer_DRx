void __fastcall sub_3CEE8(int a1, int a2)
{
  int v4; // r8
  char *v5; // r4
  int v6; // r1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d %s", a1, "set_temperature_offset_value_chain_sensor");
    sub_343C4(4, s, 0);
  }
  v5 = (char *)&unk_71CC8 + 4 * a1 + a2;
  sub_3CE70(a1, a2, 2, (unsigned __int8)v5[3608] | 0x1991100);
  sub_3CE70(a1, a2, 2, 26743040);
  v6 = v5[3608];
  v4 = 4 * a1;
  if ( byte_6FAD8[4 * a1 + 164 + a2] == v6 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(
        s,
        0x800u,
        "%s: Chain%d Sensor%d temp offset : %02d, ",
        "set_temperature_offset_value_chain_sensor",
        a1,
        a2,
        byte_6FAD8[v4 + 164 + a2]);
      sub_343C4(5, s, 0);
    }
  }
  else if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s: Chain%d Sensor%d temp offset value set error. It should be %02d, but read back is %02d\n",
      "set_temperature_offset_value_chain_sensor",
      a1,
      a2,
      v6,
      byte_6FAD8[v4 + 164 + a2]);
    sub_343C4(3, s, 0);
  }
}
