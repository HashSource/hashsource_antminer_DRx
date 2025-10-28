int sub_3ED9C()
{
  int v0; // r3
  int v1; // r8
  int v2; // r11
  int v3; // r7
  int v4; // s16
  int v5; // r0
  int v6; // r1
  int v7; // r3
  int v9; // r6
  int v10; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v0 = (unsigned __int8)byte_6FA71;
  v1 = (unsigned __int8)byte_74737;
  v2 = dword_74743;
  v3 = dword_74747[0];
  if ( byte_6FA71 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      snprintf(
        s,
        0x800u,
        "%s, current pwm_percent %d, current_pcb_temp %d, current_chip_temp %d",
        "set_pwm_by_pid_method",
        (unsigned __int8)byte_74737,
        dword_74743,
        dword_74747[0]);
      sub_343C4(7, s, 0);
      v0 = (unsigned __int8)byte_6FA71;
      if ( !dword_72AF8 )
        dword_72AF8 = v3;
      if ( v3 <= 85 )
        goto LABEL_29;
      v1 = 100;
      v9 = 100;
      if ( !byte_6FA71 )
        goto LABEL_26;
    }
    else if ( dword_72AF8 )
    {
      if ( dword_74747[0] <= 85 )
        goto LABEL_29;
    }
    else
    {
      dword_72AF8 = dword_74747[0];
      if ( dword_74747[0] <= 85 )
      {
        if ( (unsigned int)(dword_74743 - 51) > 0x7FFFFFCC )
        {
          v4 = dword_74747[0] - 78;
          v10 = 30;
          goto LABEL_33;
        }
        goto LABEL_31;
      }
    }
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      snprintf(s, 0x800u, "%s, chip temp %d exceeds %d will set max pwm", "set_pwm_by_pid_method", v3, 85);
      v9 = 100;
      v1 = 100;
      sub_343C4(7, s, 0);
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  if ( !dword_72AF8 )
  {
    dword_72AF8 = dword_74747[0];
    if ( dword_74747[0] <= 85 )
    {
      if ( (unsigned int)(dword_74743 - 51) > 0x7FFFFFCC )
      {
        v4 = dword_74747[0] - 78;
        v10 = 30;
LABEL_6:
        v5 = dword_72AF8;
        v6 = (int)(float)((float)v4 - vcvts_n_f32_s32(dword_72AF8 - 78, 1u));
        if ( (unsigned int)(v6 + 1) <= 2 )
          return v1;
        v1 += v6;
        if ( v1 < v10 )
        {
          v1 = v10;
          v9 = (unsigned __int8)v10;
          goto LABEL_26;
        }
        v7 = 0;
        goto LABEL_10;
      }
      goto LABEL_31;
    }
LABEL_25:
    v9 = 100;
    v1 = 100;
    goto LABEL_26;
  }
  if ( dword_74747[0] > 85 )
    goto LABEL_25;
LABEL_29:
  if ( (unsigned int)(v2 - 51) > 0x7FFFFFCC )
  {
    v10 = 30;
    goto LABEL_32;
  }
LABEL_31:
  v10 = 40;
LABEL_32:
  v4 = v3 - 78;
  if ( !v0 )
    goto LABEL_6;
LABEL_33:
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
  {
    v5 = dword_72AF8;
    v6 = (int)(float)((float)v4 - vcvts_n_f32_s32(dword_72AF8 - 78, 1u));
    if ( (unsigned int)(v6 + 1) <= 2 )
    {
LABEL_39:
      if ( !byte_6FA70 && dword_6D35C <= 6 )
        return v1;
      goto LABEL_41;
    }
    v1 += v6;
    if ( v1 < v10 )
    {
      v1 = v10;
      v9 = (unsigned __int8)v10;
      goto LABEL_13;
    }
    v7 = 1;
LABEL_10:
    if ( v1 >= 100 )
      v1 = 100;
LABEL_12:
    v9 = (unsigned __int8)v1;
    if ( v7 )
    {
LABEL_13:
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        snprintf(
          s,
          0x800u,
          "PWM change from %d to %d: last_temp=%d, current_temp=%d, target_temp=%d, current_pcb_temp=%d, pwm_change=%d\n",
          (unsigned __int8)byte_74737,
          v1,
          v5,
          v3,
          78,
          v2,
          v6);
        sub_343C4(7, s, 0);
      }
    }
LABEL_26:
    sub_3E808(v9);
    dword_72AF8 = v3;
    return v1;
  }
  snprintf(s, 0x800u, "target_chip_temp %d \n", 78);
  sub_343C4(7, s, 0);
  v5 = dword_72AF8;
  v6 = (int)(float)((float)v4 - vcvts_n_f32_s32(dword_72AF8 - 78, 1u));
  if ( (unsigned int)(v6 + 1) > 2 )
  {
    v1 += v6;
    v7 = (unsigned __int8)byte_6FA71;
    if ( v1 < v10 )
    {
      v1 = v10;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  if ( !byte_6FA71 )
    return v1;
  if ( !byte_73320 )
    goto LABEL_39;
LABEL_41:
  snprintf(s, 0x800u, "PWM keep %d: last_temp=%d, current_temp=%d, target_temp=%d, pwm_change=%d\n", v1, v5, v3, 78, v6);
  sub_343C4(7, s, 0);
  return v1;
}
