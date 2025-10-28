int set_pwm_by_temp()
{
  double v0; // d7
  int v1; // r0
  bool v2; // cf
  signed int v3; // r0
  __int64 v4; // r6
  __int64 v5; // r2
  signed int v6; // r0
  int v7; // r4
  bool v8; // cc
  double v9; // d5
  int v10; // r0
  int result; // r0
  signed int temp; // r0

  if ( !byte_197B64 )
  {
    clock_gettime(1, &stru_197B68);
    *(_QWORD *)&dword_197B78 = 0;
    v1 = dword_194724;
    byte_197B64 = 1;
    v2 = dword_194724 != 0;
    if ( dword_194724 != 1 )
    {
LABEL_3:
      if ( v2 )
      {
        if ( v1 == 2 )
          v3 = sub_5F9F0(*(_QWORD *)&dword_197B78 < 21LL);
        else
          v3 = 100;
        return fan_pwm_set(v3);
      }
      temp = get_temp(1);
      if ( temp <= 18 )
      {
        v7 = 40;
        goto LABEL_19;
      }
      if ( (unsigned int)(temp - 19) <= 0xE )
      {
        v10 = temp - 18;
        v9 = 0.666666667;
        v0 = 40.0;
      }
      else
      {
        if ( (unsigned int)(temp - 34) <= 4 )
        {
          v7 = 50;
          goto LABEL_19;
        }
        if ( (unsigned int)(temp - 39) <= 9 )
        {
          v7 = (int)((double)(temp - 38) + 50.0);
          goto LABEL_19;
        }
        if ( (unsigned int)(temp - 49) > 6 )
        {
          v7 = 100;
          goto LABEL_19;
        }
        v10 = temp - 48;
        v9 = 5.71428571;
        v0 = 60.0;
      }
      goto LABEL_18;
    }
LABEL_11:
    v6 = get_temp(v1);
    if ( v6 <= 13 )
    {
      v7 = 20;
LABEL_19:
      if ( get_temp(dword_194730) >= dword_194734 )
        v7 = 100;
      if ( v7 < dword_194728 )
        v3 = dword_194728;
      else
        v3 = v7;
      if ( v3 >= dword_19472C )
        v3 = dword_19472C;
      return fan_pwm_set(v3);
    }
    v8 = (unsigned int)(v6 - 14) > 0x12;
    if ( (unsigned int)(v6 - 14) > 0x12 )
    {
      v9 = 1.42857143;
      v10 = v6 - 32;
      v0 = 60.0;
    }
    else
    {
      v9 = 2.10526316;
      v10 = v6 - 13;
    }
    if ( !v8 )
      v0 = 20.0;
LABEL_18:
    v7 = (int)(v0 + (double)v10 * v9);
    goto LABEL_19;
  }
  clock_gettime(1, (struct timespec *)&dword_197B70);
  v4 = *(_QWORD *)&dword_197B78;
  v5 = 1000LL * (dword_197B70 - stru_197B68.tv_sec) + (dword_197B74 - stru_197B68.tv_nsec) / 1000000;
  if ( *(__int64 *)&dword_197B78 >= 20 )
  {
    result = dword_194744;
    if ( v5 >= dword_194744 )
    {
LABEL_10:
      clock_gettime(1, &stru_197B68);
      v1 = dword_194724;
      *(_QWORD *)&dword_197B78 = v4 + 1;
      v2 = dword_194724 != 0;
      if ( dword_194724 != 1 )
        goto LABEL_3;
      goto LABEL_11;
    }
  }
  else
  {
    result = dword_194740;
    if ( v5 >= dword_194740 )
      goto LABEL_10;
  }
  return result;
}
