int sub_417EC()
{
  int v0; // r4
  int result; // r0

  v0 = 100;
  sub_41040(3, 0);
  printf("%s: erase_loop = %d\n", "pic_erase_flash_all", 100);
  do
  {
    result = sub_411C4();
    --v0;
  }
  while ( v0 );
  return result;
}
