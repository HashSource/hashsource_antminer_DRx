int __fastcall sub_287AC(int a1)
{
  unsigned int v2; // r2

  v2 = fcntl(a1, 3, 0) & 0xFFFFF7FF;
  return fcntl(a1, 4, v2);
}
