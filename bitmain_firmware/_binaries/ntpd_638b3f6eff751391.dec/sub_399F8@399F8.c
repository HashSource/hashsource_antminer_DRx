int __fastcall sub_399F8(int a1)
{
  double v1; // d16
  int v2; // r12
  int v3; // r7
  int v5; // r3
  int v6; // r1
  int v7; // r4
  int v8; // r2
  double v9; // d17
  int v10; // r6
  int v11; // r3
  int v13; // r3
  int v14; // r1
  __int64 v15; // r2
  int v16; // r1
  __int64 v17; // r2
  bool v18; // zf

  v1 = 0.0;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 60);
  v5 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(v3 + 28);
  do
  {
    v8 = v7 + 216 * v5 + 2312;
    v9 = *(double *)(v7 + 216 * v5 + 2384);
    if ( v9 >= v1 )
    {
      v2 = v5;
    }
    else
    {
      v9 = v1;
      v8 = v6;
    }
    v6 = v7 + 216 * v5 + 2208;
    v1 = *(double *)(v7 + 216 * v5 + 2280);
    if ( v9 <= v1 )
      v2 = v5;
    ++v5;
    if ( v9 > v1 )
    {
      v1 = v9;
      v6 = v8;
    }
  }
  while ( v5 != 5 );
  v10 = 4328;
  v11 = *(_DWORD *)(v7 + 4328);
  *(_DWORD *)(v7 + 4328) = v11 & 0xFFFFFCFF;
  if ( v1 >= 13.0 )
  {
    *(_DWORD *)(v7 + 3280) = v6;
    *(_DWORD *)(v7 + 3284) = v2;
    v13 = *(_DWORD *)(v6 + 92);
    *(_DWORD *)(v3 + 748) = v13;
    v14 = *(_DWORD *)(v6 + 88);
    LODWORD(v15) = *(_DWORD *)(v7 + 4328);
    *(_DWORD *)(a1 + 88) = v13;
    HIDWORD(v15) = v15 | 0x80;
    *(_DWORD *)(v7 + 4328) = v15 | 0x80;
    if ( (v14 & 0x100) != 0 )
    {
      v16 = v15 | 0x180;
      v17 = *(_QWORD *)(v3 + 728);
      *(_DWORD *)(v7 + 4328) = v16;
      v10 = 1;
      *(_QWORD *)(v7 + 40) = v17;
    }
    else
    {
      v18 = (v14 & 0x200) == 0;
      if ( (v14 & 0x200) != 0 )
      {
        v14 = v15 | 0x280;
        v15 = *(_QWORD *)(v3 + 736);
      }
      else
      {
        LODWORD(v15) = 0;
      }
      if ( v18 )
        HIDWORD(v15) = 0;
      else
        *(_DWORD *)(v7 + 4328) = v14;
      v10 = 1;
      *(_QWORD *)(v7 + 40) = v15;
    }
  }
  else
  {
    if ( (v11 & 0x80) == 0 )
      v10 = 0;
    *(_DWORD *)(v7 + 3284) = (*(_DWORD *)(v7 + 3284) + 1) % 5;
    if ( (v11 & 0x80) != 0 )
    {
      *(_DWORD *)(v7 + v10) = v11 & 0xFFFFFC7F;
      sub_27040(a1, 4);
      v10 = 0;
    }
  }
  if ( *(int *)(v7 + 48) > 0 )
    sub_3998C(a1, *(_DWORD *)(v7 + 3284));
  return v10;
}
