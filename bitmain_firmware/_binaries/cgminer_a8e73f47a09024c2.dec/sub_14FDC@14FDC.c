int __fastcall sub_14FDC(int a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r0

  sub_142A0(&stru_7FE7C, "cgminer.c", "inc_work_stats", 8967);
  dbl_80230 = (double)a3 + dbl_80230;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 192) += a3;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 40) += a3;
  }
  else
  {
    v6 = sub_14A18();
    *(_QWORD *)(v6 + 40) += a3;
  }
  v7 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v7 + 232) = time(0);
  v8 = sub_1430C(&stru_7FE7C, "cgminer.c", "inc_work_stats", 8980);
  return off_79D40(v8);
}
