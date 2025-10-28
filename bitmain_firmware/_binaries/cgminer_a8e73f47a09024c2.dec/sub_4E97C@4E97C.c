int sub_4E97C()
{
  int v0; // r5
  int v1; // r7
  int v2; // r6
  int v3; // r4
  int v4; // r7
  float v5; // s15
  int v6; // r2
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v0 = (unsigned __int8)byte_B435B;
  v1 = dword_B4367;
  v2 = dword_B4367;
  v3 = dword_B436B;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s, current pwm_percent %d, current_pcb_temp %d, current_chip_temp %d",
      "set_pwm_by_pid_method",
      (unsigned __int8)byte_B435B,
      dword_B4367,
      dword_B436B);
    sub_3F178(7, s, 0);
  }
  if ( !dword_7FCE8 )
    dword_7FCE8 = v3;
  if ( v3 > 85 )
  {
    if ( byte_7CC61 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
      {
        snprintf(s, 0x800u, "%s, chip temp %d exceeds %d will set max pwm", "set_pwm_by_pid_method", v3, 85);
        sub_3F178(7, s, 0);
        v0 = 100;
      }
      else
      {
        v0 = 100;
      }
    }
    else
    {
      v0 = 100;
    }
LABEL_41:
    sub_4E244((unsigned __int8)v0);
    dword_7FCE8 = v3;
    return v0;
  }
  if ( v2 > 25 )
  {
    if ( (unsigned int)(v1 - 26) <= 0x18 )
      v4 = 30;
    else
      v4 = 40;
  }
  else
  {
    v4 = 30;
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "target_chip_temp %d \n", 78);
    sub_3F178(7, s, 0);
  }
  v5 = vcvts_n_f32_s32(dword_7FCE8 - 78, 1u);
  v6 = (int)(float)((float)(v3 - 78) - v5);
  if ( (unsigned int)(v6 + 1) > 2 )
  {
    v0 += v6;
    if ( v4 >= v0 )
      v0 = v4;
    if ( v0 >= 100 )
      v0 = 100;
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(
        s,
        0x800u,
        "PWM change from %d to %d: last_temp=%d, current_temp=%d, target_temp=%d, current_pcb_temp=%d, pwm_change=%d\n",
        (unsigned __int8)byte_B435B,
        v0,
        dword_7FCE8,
        v3,
        78,
        v2,
        (int)(float)((float)(v3 - 78) - v5));
      sub_3F178(7, s, 0);
    }
    goto LABEL_41;
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(
      s,
      0x800u,
      "PWM keep %d: last_temp=%d, current_temp=%d, target_temp=%d, pwm_change=%d\n",
      v0,
      dword_7FCE8,
      v3,
      78,
      (int)(float)((float)(v3 - 78) - v5));
    sub_3F178(7, s, 0);
  }
  return v0;
}
