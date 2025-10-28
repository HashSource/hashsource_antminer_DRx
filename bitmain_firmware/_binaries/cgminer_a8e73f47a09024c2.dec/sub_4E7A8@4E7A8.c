int sub_4E7A8()
{
  int v0; // r6
  int v1; // r5
  int v2; // r4
  int v3; // r4
  double v4; // d18
  double v5; // d16
  double v6; // d17
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = dword_B4367;
  v1 = dword_B4367;
  v2 = dword_B436B;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s, current pwm_percent %d, current_pcb_temp %d, current_chip_temp %d\n",
      "set_pwm_by_temp_pwm_curve_low_power",
      (unsigned __int8)byte_B435B,
      dword_B4367,
      dword_B436B);
    sub_3F178(7, s, 0);
  }
  if ( v2 <= 75 )
  {
    if ( v1 > 13 )
    {
      if ( (unsigned int)(v0 - 14) > 0x12 )
      {
        v4 = (double)(v1 - 32);
        v5 = 60.0;
        v6 = 1.42857143;
      }
      else
      {
        v4 = (double)(v1 - 13);
        v5 = 20.0;
        v6 = 2.10526316;
      }
      v3 = (int)(v5 + v4 * v6);
      if ( v3 < 20 )
        v3 = 20;
    }
    else
    {
      v3 = 20;
    }
    if ( v3 >= 100 )
      v3 = 100;
  }
  else if ( byte_7CC61 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
    {
      snprintf(
        s,
        0x800u,
        "%s, chip temp %d exceeds %d will set max pwm\n",
        "set_pwm_by_temp_pwm_curve_low_power",
        v2,
        75);
      sub_3F178(7, s, 0);
      v3 = 100;
    }
    else
    {
      v3 = 100;
    }
  }
  else
  {
    v3 = 100;
  }
  sub_4E244((unsigned __int8)v3);
  return v3;
}
