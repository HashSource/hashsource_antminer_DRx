int __fastcall keep_sockalive(int a1)
{
  int optval; // [sp+Ch] [bp-Ch] BYREF
  int v4; // [sp+10h] [bp-8h] BYREF
  int v5; // [sp+14h] [bp-4h] BYREF

  v4 = 45;
  v5 = 30;
  optval = 1;
  setsockopt(a1, 1, 9, &optval, 4u);
  fcntl(a1, 2, 1);
  setsockopt(a1, 6, 1, &optval, 4u);
  setsockopt(a1, 6, 6, &optval, 4u);
  setsockopt(a1, 6, 4, &v4, 4u);
  return setsockopt(a1, 6, 5, &v5, 4u);
}
