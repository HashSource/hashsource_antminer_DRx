int __fastcall sub_1ABE0(int a1, int a2, int a3, int a4)
{
  int *v4; // r12
  int *v5; // r2
  int v6; // r0
  int v7; // t1
  int result; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r6

  sub_2B13C(&dword_61370, a2, a3, a4);
  sub_2AE20(&unk_61378, &dword_61370);
  dbl_64238 = 0.0;
  v4 = (int *)&unk_61380;
  dbl_640B0 = 0.0;
  dbl_638A0 = 0.0;
  dbl_64228 = 0.0;
  dbl_63268 = 0.0;
  do
  {
    *(_QWORD *)v4 = 0;
    v4 += 2;
  }
  while ( v4 != &dword_613E0 );
  dword_63E48 = 0;
  dword_640C0 = 0;
  dbl_5F898 = 1.0;
  dbl_60088 = 1.0;
  dword_613E0 = 0;
  *(_QWORD *)&dword_639C8 = 0;
  *(_QWORD *)&dword_636A8 = 0;
  dword_63E44 = 0;
  dbl_63B88 = 0.0;
  dword_63A70 = 0;
  dbl_63C10 = 0.0;
  dword_639E4 = 0;
  dbl_639D0 = 0.0;
  dword_63410 = 0;
  dword_63E58 = 0;
  *(_QWORD *)&dword_63BE8 = 0;
  *(_QWORD *)&dword_63C98 = 0;
  *(_QWORD *)&dword_64220 = 0;
  *(_QWORD *)&dword_63D68 = 0;
  if ( dword_63740 > 0 )
  {
    v5 = (int *)dword_639E0;
    v6 = dword_639E0 + 4 * dword_63740;
    do
    {
      v7 = *v5++;
      *(_QWORD *)(v7 + 72) = 0;
      *(_QWORD *)(v7 + 80) = 0;
      *(_QWORD *)(v7 + 88) = 0;
      *(_QWORD *)(v7 + 360) = 0;
      *(_DWORD *)(v7 + 116) = 0;
      *(_DWORD *)(v7 + 8) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 20) = 0;
      *(_DWORD *)(v7 + 120) = 0;
      *(_DWORD *)(v7 + 124) = 0;
      *(_DWORD *)(v7 + 128) = 0;
      *(_DWORD *)(v7 + 132) = 0;
      *(_DWORD *)(v7 + 352) = 0;
      *(_DWORD *)(v7 + 40) = 0;
      *(_DWORD *)(v7 + 44) = 0;
    }
    while ( v5 != (int *)v6 );
  }
  result = sub_15BEC();
  if ( dword_63CC0 > 0 )
  {
    v9 = 0;
    do
    {
      v10 = v9++;
      v11 = sub_1AB68(v10);
      sub_2AE20(v11 + 368, &dword_61370);
      if ( pthread_mutex_lock(&stru_6392C) )
        sub_B4E4("zero_stats", 5852);
      *(_QWORD *)(v11 + 80) = 0;
      *(_DWORD *)(v11 + 36) = 0;
      *(_QWORD *)(v11 + 192) = 0;
      *(_QWORD *)(v11 + 88) = 0;
      *(_DWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 200) = 0;
      *(_DWORD *)(v11 + 44) = 0;
      *(_QWORD *)(v11 + 208) = 0;
      *(_DWORD *)(v11 + 220) = 0;
      *(_QWORD *)(v11 + 224) = 0;
      if ( pthread_mutex_unlock(&stru_6392C) )
        sub_B694("zero_stats", 5863);
      off_60178();
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v11 + 4) + 96))(v11);
    }
    while ( dword_63CC0 > v9 );
  }
  return result;
}
