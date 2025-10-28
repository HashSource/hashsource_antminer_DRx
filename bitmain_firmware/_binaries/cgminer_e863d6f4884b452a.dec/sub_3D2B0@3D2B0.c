void sub_3D2B0()
{
  unsigned __int8 *v0; // r7
  int i; // r4
  int v2; // t1
  int v3; // r5
  char *v4; // r8
  int v5; // lr
  int v6; // t1
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(s, "check_sensor_ID");
    sub_343C4(7, s, 0);
  }
  v0 = (unsigned __int8 *)&unk_73EF0;
  for ( i = 0; i != 4; ++i )
  {
    v2 = *v0++;
    if ( v2 == 1 )
    {
      v3 = 0;
      v4 = &byte_6FB8C[4 * i];
      do
      {
        sub_3CE70((unsigned __int8)i, (unsigned __int8)v3, 3, 26803712);
        v6 = *v4++;
        v5 = v6;
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(s, 0x800u, "%s: Chain%d Sensor%d Manufacturer ID = 0x%02x", "check_sensor_ID", i, v3, v5);
          sub_343C4(3, s, 0);
        }
        ++v3;
      }
      while ( v3 != 4 );
    }
  }
}
