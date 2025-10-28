void sub_4C668()
{
  int v0; // r5
  int v1; // t1
  int i; // r4
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v3, "calibration_sensor_offset");
    sub_3F178(5, v3, 0);
  }
  v0 = 736019;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v1 = *(unsigned __int8 *)++v0;
    if ( v1 == 1 )
      sub_4C48C(i);
  }
}
