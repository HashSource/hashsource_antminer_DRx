int __fastcall sub_30110(_DWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-8h] BYREF

  sub_2FD98(&v3);
  sub_2FE70(&v3.tv_sec, a1);
  return sub_2CC50(&v3);
}
