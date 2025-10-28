int sub_3EC40()
{
  int v0; // r5
  int v1; // r6
  int v2; // r0
  int v3; // r4
  double v5; // d5
  int v6; // r5
  double v7; // d7
  int v8; // r4
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v0 = dword_74743;
  v1 = dword_74747[0];
  if ( !byte_6FA71 )
  {
    if ( dword_74747[0] <= 75 )
      goto LABEL_13;
    goto LABEL_10;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
  {
    snprintf(
      s,
      0x800u,
      "%s, current pwm_percent %d, current_pcb_temp %d, current_chip_temp %d\n",
      "set_pwm_by_temp_pwm_curve_low_power",
      (unsigned __int8)byte_74737,
      dword_74743,
      dword_74747[0]);
    sub_343C4(7, s, 0);
    if ( v1 <= 75 )
      goto LABEL_13;
    if ( byte_6FA71 )
    {
      if ( byte_73320 )
      {
LABEL_9:
        snprintf(
          s,
          0x800u,
          "%s, chip temp %d exceeds %d will set max pwm\n",
          "set_pwm_by_temp_pwm_curve_low_power",
          v1,
          75);
        sub_343C4(7, s, 0);
        goto LABEL_10;
      }
LABEL_7:
      if ( !byte_6FA70 && dword_6D35C <= 6 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_10:
    v2 = 100;
    v3 = 100;
LABEL_11:
    sub_3E808(v2);
    return v3;
  }
  if ( dword_74747[0] > 75 )
    goto LABEL_7;
LABEL_13:
  if ( v0 <= 13 )
  {
    v2 = 20;
    v3 = 20;
    goto LABEL_11;
  }
  if ( (unsigned int)(v0 - 14) <= 0x12 )
  {
    v6 = v0 - 13;
    v5 = 2.10526316;
    v7 = 20.0;
  }
  else
  {
    v5 = 1.42857143;
    v6 = v0 - 32;
    v7 = 60.0;
  }
  v8 = (int)(v7 + (double)v6 * v5);
  if ( v8 >= 100 )
    v8 = 100;
  if ( v8 < 20 )
    v8 = 20;
  sub_3E808((unsigned __int8)v8);
  return v8;
}
