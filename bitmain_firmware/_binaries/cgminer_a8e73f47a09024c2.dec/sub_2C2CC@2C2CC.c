int __fastcall sub_2C2CC(int a1)
{
  int v2; // r0

  v2 = fcntl(a1, 3, 0);
  return fcntl(a1, 4, v2 & 0xFFFFF7FF);
}
