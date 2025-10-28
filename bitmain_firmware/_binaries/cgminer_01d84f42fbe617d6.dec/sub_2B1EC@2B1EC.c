int __fastcall sub_2B1EC(_DWORD *a1)
{
  struct timespec v3; // [sp+0h] [bp-8h] BYREF

  sub_2AEB0(&v3);
  sub_2AF78(&v3.tv_sec, a1);
  return sub_28E3C(&v3);
}
