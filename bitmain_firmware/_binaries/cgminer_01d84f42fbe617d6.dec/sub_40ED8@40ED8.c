int sub_40ED8()
{
  char v1[4]; // [sp+0h] [bp-8h] BYREF
  char buf; // [sp+4h] [bp-4h] BYREF
  char v3[3]; // [sp+5h] [bp-3h] BYREF

  v1[0] = 6;
  buf = 85;
  v3[0] = -86;
  write(dword_C54A6, &buf, 1u);
  sub_2B244();
  write(dword_C54A6, v3, 1u);
  sub_2B244();
  write(dword_C54A6, v1, 1u);
  sub_2B244();
  return 0;
}
