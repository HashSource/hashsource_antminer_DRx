int __fastcall sub_3DDB8(char a1)
{
  char v2; // [sp+0h] [bp-8h] BYREF
  _BYTE v3[3]; // [sp+1h] [bp-7h] BYREF
  char buf; // [sp+4h] [bp-4h] BYREF
  char v5[3]; // [sp+5h] [bp-3h] BYREF

  v3[0] = a1;
  buf = 85;
  v2 = 21;
  v5[0] = -86;
  write(dword_C54A6, &buf, 1u);
  sub_2B244();
  write(dword_C54A6, v5, 1u);
  sub_2B244();
  write(dword_C54A6, &v2, 1u);
  sub_2B244();
  write(dword_C54A6, v3, 1u);
  return sub_2B244();
}
