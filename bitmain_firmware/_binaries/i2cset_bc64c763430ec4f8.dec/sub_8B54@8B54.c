int __fastcall sub_8B54(int a1, char a2, char a3, int a4, int a5)
{
  _BYTE v6[4]; // [sp+4h] [bp-10h] BYREF
  int v7; // [sp+8h] [bp-Ch]
  int v8; // [sp+Ch] [bp-8h]

  v6[0] = a2;
  v6[1] = a3;
  v7 = a4;
  v8 = a5;
  return ioctl(a1, 0x720u, v6);
}
