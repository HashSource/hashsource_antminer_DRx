void sub_3D23C()
{
  unsigned __int8 *v0; // r5
  int i; // r4
  int v2; // t1
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v3, "calibration_sensor_offset");
    sub_343C4(5, v3, 0);
  }
  v0 = (unsigned __int8 *)&unk_73EF0;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v2 = *v0++;
    if ( v2 == 1 )
      sub_3D0D8(i);
  }
}
