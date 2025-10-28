int __fastcall sub_36B20(int a1)
{
  char v2[2052]; // [sp+0h] [bp-804h] BYREF

  snprintf(v2, 0x800u, "actual_asic_number = %d, but it is error\n", a1);
  sub_343C4(7, v2, 0);
  return -1;
}
