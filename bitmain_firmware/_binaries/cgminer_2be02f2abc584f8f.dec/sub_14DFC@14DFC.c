int __fastcall sub_14DFC(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r0

  sub_140C0(&stru_78D9C, "cgminer.c", "inc_work_stats", 8992);
  dbl_79150 = (double)a3 + dbl_79150;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 192) += a3;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 40) += a3;
  }
  else
  {
    v6 = sub_14838();
    *(_QWORD *)(v6 + 40) += a3;
  }
  v7 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v7 + 232) = time(0);
  v8 = sub_1412C(&stru_78D9C, "cgminer.c", "inc_work_stats", 9005);
  return off_72D00(v8);
}
