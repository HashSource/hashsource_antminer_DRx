void sub_48F7C()
{
  int v0; // r5
  int v1; // t1
  int i; // r4
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    strcpy(v3, "calibration_sensor_offset");
    sub_3F1C0(5, v3, 0);
  }
  v0 = 603403;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v1 = *(unsigned __int8 *)++v0;
    if ( v1 == 1 )
      sub_48D98(i);
  }
}
