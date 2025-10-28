int __fastcall sub_1E114(int a1, int a2, int a3)
{
  double v6; // d7
  int v7; // r4
  int v9; // r0

  if ( pthread_mutex_lock(&stru_73A00) )
    sub_1BF10("inc_work_stats", 8967);
  v6 = dbl_73D88 + (double)a3;
  *(_QWORD *)(*(_DWORD *)(a1 + 36) + 192) += a3;
  dbl_73D88 = v6;
  if ( a2 )
  {
    *(_QWORD *)(a2 + 40) += a3;
  }
  else
  {
    v9 = sub_1E098();
    *(_QWORD *)(v9 + 40) += a3;
  }
  v7 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v7 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_73A00) )
    sub_1BF54("inc_work_stats", 8980);
  return off_6CB70();
}
