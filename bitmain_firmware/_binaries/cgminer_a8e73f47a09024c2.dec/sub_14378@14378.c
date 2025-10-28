int sub_14378()
{
  int *v0; // r1
  int v1; // r12
  int v2; // r4
  int v3; // lr
  int v4; // t1
  int result; // r0
  int v6; // r5
  int v7; // r4
  int v8; // r0

  sub_30050(&dword_7AE50);
  sub_2FD00(&unk_7AE58, &dword_7AE50);
  dbl_80CB8 = 0.0;
  dbl_80F48 = 0.0;
  dbl_80F38 = 0.0;
  dbl_80428 = 0.0;
  dbl_7FDF0 = 0.0;
  v0 = (int *)&unk_7AE60;
  do
  {
    *(_QWORD *)v0 = 0;
    v0 += 2;
  }
  while ( v0 != &dword_7AEC0 );
  v1 = 0;
  dword_7AEC0 = 0;
  dword_80A50 = 0;
  dword_80D4C = 0;
  dbl_807F0 = 0.0;
  dbl_80550 = 0.0;
  dbl_808A0 = 0.0;
  dword_80A4C = 0;
  dbl_80EB0 = 0.0;
  dbl_80970 = 0.0;
  dword_80678 = 0;
  dword_8056C = 0;
  dword_7FF98 = 0;
  dbl_79458 = 1.0;
  dbl_79C30 = 1.0;
  dbl_80230 = 0.0;
  dword_80A60 = 0;
  dbl_80790 = 0.0;
  dbl_80818 = 0.0;
  dbl_80558 = 0.0;
  v2 = dword_802C8;
  if ( dword_802C8 > 0 )
  {
    v3 = dword_80568 - 4;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      v3 += 4;
      *(_DWORD *)(v4 + 120) = 0;
      *(_QWORD *)(v4 + 8) = 0;
      *(_QWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 124) = 0;
      *(_DWORD *)(v4 + 128) = 0;
      *(_DWORD *)(v4 + 132) = 0;
      *(_DWORD *)(v4 + 136) = 0;
      *(_DWORD *)(v4 + 360) = 0;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 72) = 0;
      *(_QWORD *)(v4 + 80) = 0;
      *(_QWORD *)(v4 + 88) = 0;
      *(_DWORD *)(v4 + 368) = 0;
      *(_DWORD *)(v4 + 372) = 0;
      ++v1;
    }
    while ( v1 < v2 );
  }
  result = sub_129AC();
  if ( dword_808C8 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = sub_13D08(v6);
      sub_2FD00(v7 + 368, &dword_7AE50);
      sub_142A0(&stru_804B4, "cgminer.c", "zero_stats", 6191);
      *(_QWORD *)(v7 + 80) = 0;
      *(_DWORD *)(v7 + 36) = 0;
      *(_DWORD *)(v7 + 40) = 0;
      *(_DWORD *)(v7 + 44) = 0;
      *(_QWORD *)(v7 + 88) = 0;
      *(_DWORD *)(v7 + 220) = 0;
      *(_QWORD *)(v7 + 192) = 0;
      *(_QWORD *)(v7 + 200) = 0;
      *(_QWORD *)(v7 + 208) = 0;
      *(_QWORD *)(v7 + 224) = 0;
      v8 = sub_1430C(&stru_804B4, "cgminer.c", "zero_stats", 6202);
      off_79D40(v8);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)(v7 + 4) + 96))(v7);
      ++v6;
    }
    while ( dword_808C8 > v6 );
  }
  return result;
}
