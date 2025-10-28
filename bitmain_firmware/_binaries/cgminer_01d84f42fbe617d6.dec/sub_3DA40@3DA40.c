int __fastcall sub_3DA40(int a1)
{
  int v1; // r2
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 > 19 )
  {
    if ( a1 > 100 )
      v1 = 34464;
    else
      v1 = 1000;
    if ( a1 > 100 )
    {
      HIWORD(v1) = 1;
      LOBYTE(a1) = 100;
    }
    else
    {
      v1 *= a1;
    }
  }
  else
  {
    LOBYTE(a1) = 20;
    v1 = 20000;
  }
  dword_C4BD0 = v1;
  byte_C5467 = a1;
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v3, 0x800u, "set pwm duty_ns %d", v1);
    sub_38438(7, v3, 0);
    v1 = dword_C4BD0;
  }
  sprintf(v3, "echo %u > /sys/class/pwm/pwm1/duty_ns", v1);
  return system(v3);
}
