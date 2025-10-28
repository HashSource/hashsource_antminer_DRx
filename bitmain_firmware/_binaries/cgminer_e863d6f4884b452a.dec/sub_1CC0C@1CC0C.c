int sub_1CC0C()
{
  int *v0; // r3
  int *v1; // r6
  int v2; // r7
  int v3; // t1
  int result; // r0
  int v5; // r5
  int v6; // r4

  sub_2A69C(&dword_6DCA0);
  sub_2A480(&unk_6DCA8);
  v0 = (int *)&unk_6DCB0;
  dbl_735B8 = 0.0;
  dbl_73950 = 0.0;
  dbl_73948 = 0.0;
  dbl_73958 = 0.0;
  dbl_739E8 = 0.0;
  do
  {
    *(_QWORD *)v0 = 0;
    v0 += 2;
  }
  while ( v0 != &dword_6DD10 );
  dbl_6CA88 = 1.0;
  dbl_6C2C0 = 1.0;
  dword_73528 = 0;
  dword_73CA0 = 0;
  dword_7367C = 0;
  dword_737A0 = 0;
  dbl_73790 = 0.0;
  dword_737A4 = 0;
  dword_6DD10 = 0;
  dword_7352C = 0;
  dword_72D08 = 0;
  dbl_73CA8 = 0.0;
  dword_72C38 = 0;
  dword_72C3C = 0;
  dword_72DA0 = 0;
  dword_72DA4 = 0;
  dword_732B8 = 0;
  dword_72F78 = 0;
  dbl_73D88 = 0.0;
  dbl_72D90 = 0.0;
  dbl_72E30 = 0.0;
  dbl_739F8 = 0.0;
  if ( dword_72EF0 > 0 )
  {
    v1 = (int *)dword_732EC;
    v2 = dword_732EC + 4 * dword_72EF0;
    do
    {
      v3 = *v1++;
      *(_DWORD *)(v3 + 120) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      *(_DWORD *)(v3 + 12) = 0;
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 20) = 0;
      *(_DWORD *)(v3 + 124) = 0;
      *(_DWORD *)(v3 + 128) = 0;
      *(_DWORD *)(v3 + 132) = 0;
      *(_DWORD *)(v3 + 136) = 0;
      *(_DWORD *)(v3 + 360) = 0;
      *(_DWORD *)(v3 + 40) = 0;
      *(_DWORD *)(v3 + 44) = 0;
      *(_QWORD *)(v3 + 72) = 0;
      *(_QWORD *)(v3 + 80) = 0;
      *(_QWORD *)(v3 + 88) = 0;
      *(_QWORD *)(v3 + 368) = 0;
    }
    while ( (int *)v2 != v1 );
  }
  result = sub_1A8B4();
  if ( dword_735E8 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = sub_1CBB4(v5);
      sub_2A480(v6 + 368);
      if ( pthread_mutex_lock(&stru_73CEC) )
        sub_1BF10("zero_stats", 6191);
      *(_DWORD *)(v6 + 36) = 0;
      *(_QWORD *)(v6 + 80) = 0;
      *(_DWORD *)(v6 + 40) = 0;
      *(_DWORD *)(v6 + 44) = 0;
      *(_QWORD *)(v6 + 88) = 0;
      *(_DWORD *)(v6 + 220) = 0;
      *(_QWORD *)(v6 + 200) = 0;
      *(_QWORD *)(v6 + 208) = 0;
      *(_QWORD *)(v6 + 224) = 0;
      *(_QWORD *)(v6 + 192) = 0;
      if ( pthread_mutex_unlock(&stru_73CEC) )
        sub_1BF54("zero_stats", 6202);
      ++v5;
      off_6CB70();
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v6 + 4) + 96))(v6);
    }
    while ( dword_735E8 > v5 );
  }
  return result;
}
