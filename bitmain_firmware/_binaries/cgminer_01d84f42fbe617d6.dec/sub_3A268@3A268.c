int sub_3A268()
{
  char *v0; // r4
  char *v1; // r5
  int v2; // t1
  int v3; // t1
  int result; // r0
  _DWORD v5[32]; // [sp+0h] [bp-80h] BYREF

  memset(v5, 0, sizeof(v5));
  v0 = "t";
  v1 = "t";
  do
  {
    v2 = *((_DWORD *)v1 + 1);
    v1 += 4;
    sprintf((char *)v5, "echo 0 > /sys/class/gpio/gpio%d/value", v2);
    system((const char *)v5);
  }
  while ( v1 != (char *)&unk_55464 );
  sub_2B21C();
  do
  {
    v3 = *((_DWORD *)v0 + 1);
    v0 += 4;
    sprintf((char *)v5, "echo 1 > /sys/class/gpio/gpio%d/value", v3);
    result = system((const char *)v5);
  }
  while ( v0 != (char *)&unk_55464 );
  return result;
}
