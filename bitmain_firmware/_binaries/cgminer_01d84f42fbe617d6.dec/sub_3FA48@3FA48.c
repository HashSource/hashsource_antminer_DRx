ssize_t __fastcall sub_3FA48(int a1)
{
  int v1; // r4
  int v3; // [sp+0h] [bp-8h] BYREF
  char v4; // [sp+4h] [bp-4h]

  v1 = *((_DWORD *)&unk_C4BCC + a1 + 2);
  v4 = 0;
  v3 = 1107;
  v4 = sub_3B360(&v3, 32);
  return sub_3BBBC(v1, &v3, 5u);
}
