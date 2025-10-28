unsigned int sub_496DC()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v1, "power init ...");
    sub_3F178(5, v1, 0);
  }
  sub_49594();
  return sub_49278();
}
