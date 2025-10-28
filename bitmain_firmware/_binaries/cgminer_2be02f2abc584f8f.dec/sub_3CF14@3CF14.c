int sub_3CF14()
{
  void *v0; // r0
  int result; // r0
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = calloc(1u, 0x40u);
  if ( !v0 )
  {
    strcpy(v2, "Failed to calloc mcast thr");
    sub_3F1C0(3, v2, 1);
    sub_132C4(1);
  }
  result = sub_346C4((int)v0, 0, (void *(*)(void *))sub_380EC, v0);
  if ( result )
  {
    strcpy(v2, "API mcast thread create failed");
    sub_3F1C0(3, v2, 1);
    sub_132C4(1);
  }
  return result;
}
