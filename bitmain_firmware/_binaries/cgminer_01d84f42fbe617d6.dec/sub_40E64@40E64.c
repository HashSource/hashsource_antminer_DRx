int __fastcall sub_40E64(char *a1)
{
  char buf; // [sp+4h] [bp-8h] BYREF
  char v4[7]; // [sp+5h] [bp-7h] BYREF

  buf = 85;
  v4[0] = -86;
  write(dword_C54A6, &buf, 1u);
  sub_2B244();
  write(dword_C54A6, v4, 1u);
  sub_2B244();
  return sub_40DEC(19, a1, 12);
}
