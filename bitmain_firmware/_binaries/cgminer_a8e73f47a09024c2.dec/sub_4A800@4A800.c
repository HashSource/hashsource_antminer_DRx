void sub_4A800()
{
  double v0; // d0
  int v1; // r4
  int v2; // r5
  double v3; // d8
  int v4; // t1
  int v5; // r10
  double v6; // d8
  char s[2044]; // [sp+14h] [bp-808h] BYREF
  _BYTE v8[5]; // [sp+817h] [bp-5h] BYREF

  v1 = 0;
  v8[0] = 0;
  v2 = 736019;
  v3 = 0.0;
  do
  {
    v4 = *(unsigned __int8 *)++v2;
    if ( v4 == 1 )
    {
      sub_46E4C((unsigned __int8)v1, v8);
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        v5 = v8[0];
        sub_4A768();
        snprintf(s, 0x800u, "Chain %d, pic_voltage %d, voltage %fV", v1, v5, v0);
        sub_3F178(5, s, 0);
      }
      sub_4A768();
      v3 = v3 + v0;
    }
    sub_30140();
    ++v1;
  }
  while ( v1 != 4 );
  v6 = v3 / (double)(unsigned __int8)byte_B435C;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "avg voltage: %f\n", v6);
    sub_3F178(5, s, 0);
  }
}
