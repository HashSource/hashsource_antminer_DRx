void __fastcall sub_4E244(int a1)
{
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_7FCB0 )
    a1 = 100;
  dword_B3B10 = (int)((unsigned __int64)(137438953500000LL * a1) >> 32) >> 5;
  byte_B435B = a1;
  sub_43828(33, (100 - a1) | (a1 << 16));
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "%s: set pwm percent  %d", "set_PWM", a1);
    sub_3F178(7, s, 0);
  }
}
