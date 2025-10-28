void __fastcall sub_4C1B4(int a1, int a2)
{
  char *v4; // r6
  char v5; // r2
  char v6; // r1
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d %s", a1, "set_temperature_offset_value_chain_sensor");
    sub_3F178(4, s, 0);
  }
  v4 = (char *)&dbl_80CB8 + 4 * a1 + a2;
  sub_4BAB0(a1, a2, 2, (unsigned __int8)*(v4 - 4084) | 0x1991100);
  sub_4BAB0(a1, a2, 2, 26743040);
  v5 = *(v4 - 4068);
  v6 = *(v4 - 4084);
  if ( v5 == v6 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      snprintf(
        s,
        0x800u,
        "%s: Chain%d Sensor%d temp offset : %02d, ",
        "set_temperature_offset_value_chain_sensor",
        a1,
        a2,
        v5);
      sub_3F178(5, s, 0);
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
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
    sub_3F178(3, s, 0);
  }
}
