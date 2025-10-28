int __fastcall sub_2FEB8(_DWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-8h] BYREF

  sub_2FBC0(&v3);
  sub_2FC50(&v3.tv_sec, a1);
  return sub_2C9CC(&v3);
}
