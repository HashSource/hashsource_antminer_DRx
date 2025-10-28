int sub_494C8()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v1, "bitmain_dcr_shutdown");
    sub_3F178(5, v1, 0);
  }
  sub_47F68();
  sub_4939C();
  sub_34A24(dword_9A54C);
  sub_34A24(dword_9A5CC);
  sub_34A24(dword_9A548);
  return sub_34A24(dword_9A5C8);
}
