void sub_3C020()
{
  int v0; // r4
  unsigned __int8 *v1; // r5
  double v2; // d8
  int v3; // t1
  int v4; // [sp+4h] [bp-814h]
  unsigned __int8 v5; // [sp+17h] [bp-801h] BYREF
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_73EF0;
  v2 = 0.0;
  v5 = 0;
  do
  {
    v3 = *v1++;
    if ( v3 == 1 )
    {
      sub_39AAC((unsigned __int8)v0, &v5);
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
      {
        snprintf(s, 0x800u, "Chain %d, pic_voltage %d, voltage %fV", v0, v5, v4, (1582.35294 - (double)v5) / 166.666667);
        sub_343C4(5, s, 0);
      }
      v2 = v2 + (1582.35294 - (double)v5) / 166.666667;
    }
    ++v0;
    sub_2A7F4();
  }
  while ( v0 != 4 );
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "avg voltage: %f\n", v2 / (double)(unsigned __int8)byte_74738);
    sub_343C4(5, s, 0);
  }
}
