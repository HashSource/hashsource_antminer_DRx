int __fastcall sub_2B1B4(_DWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-8h] BYREF

  sub_2AEF0(&v3);
  sub_2AF78(&v3.tv_sec, a1);
  return sub_28E3C(&v3);
}
