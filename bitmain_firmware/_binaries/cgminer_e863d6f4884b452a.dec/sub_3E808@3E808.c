void __fastcall sub_3E808(int a1)
{
  int v1; // r4
  int v2; // r2
  int v3; // r6
  int v4; // r5
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( byte_72AF0 )
  {
    LOBYTE(a1) = 100;
    v1 = (int)&loc_186A0;
    v3 = 100;
    v2 = 6553600;
  }
  else
  {
    v1 = 1000 * a1;
    v2 = (100 - a1) | (a1 << 16);
    v3 = a1;
  }
  v4 = (unsigned __int8)byte_6FA71;
  byte_74737 = a1;
  dword_73EEC = v1;
  *(_DWORD *)(dword_6FAEC + 132) = v2;
  if ( v4 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "%s: set pwm percent  %d", "set_PWM", v3);
    sub_343C4(7, s, 0);
  }
}
