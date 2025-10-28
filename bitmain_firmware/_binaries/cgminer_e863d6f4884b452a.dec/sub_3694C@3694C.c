void __noreturn sub_3694C()
{
  double *v0; // r5
  int v1; // r4
  double v2; // d8
  int v3; // r7
  int v4; // s24
  int v5; // r6
  _DWORD *v6; // r11
  double v7; // r0
  double v8; // d7
  double *v9; // r3
  double v10; // d6
  int v11; // r6
  int v12; // r3
  double v13; // d7
  struct timeval v14; // [sp+0h] [bp-164h] BYREF
  struct timeval v15; // [sp+8h] [bp-15Ch] BYREF
  _DWORD v16[4]; // [sp+10h] [bp-154h] BYREF
  _QWORD s[40]; // [sp+20h] [bp-144h] BYREF

  memset(s, 0, sizeof(s));
  memset(v16, 0, sizeof(v16));
  sub_2A69C(&v14);
  sub_2A69C(&v15);
  while ( 1 )
  {
    v0 = (double *)&unk_6FAF0;
    sub_2A69C(&v15);
    v1 = 0;
    v2 = 0.0;
    v3 = v15.tv_usec - v14.tv_usec + (v15.tv_usec - v14.tv_usec < 0 ? 0xF4000 : 0);
    v4 = v15.tv_sec - v14.tv_sec;
    if ( v15.tv_usec - v14.tv_usec < 0 )
    {
      v3 += 576;
      v4 = v15.tv_sec - v14.tv_sec - 1;
    }
    do
    {
      if ( *((_BYTE *)&unk_73ED8 + v1 + 24) )
      {
        v5 = v16[v1];
        v6 = (_DWORD *)((char *)&unk_6FB10 + 8 * v1);
        v7 = sub_4A0AC(-*v6, (unsigned __int64)(0xFFFFFFFFFFLL * *(_QWORD *)v6) >> 32);
        v8 = 0.0;
        *(_QWORD *)v6 = 0;
        v9 = (double *)&s[10 * v1];
        *(double *)&s[10 * v1 + v5] = v7 / ((double)(v3 + 1) / 1000000.0 + (double)v4);
        do
        {
          v10 = *v9++;
          v8 = v8 + v10;
        }
        while ( v9 != (double *)&s[10 * v1 + 10] );
        *v0 = v8;
        v11 = v5 + 1;
        sprintf(&byte_73E8C[16 * v1], "%.2f", v8 / 1000000000.0 / 10.0);
        v13 = *v0;
        if ( v11 <= 9 )
          v16[v1] = v11;
        else
          v12 = 0;
        if ( v11 > 9 )
          v16[v1] = v12;
        v2 = v2 + v13 / 1000000000.0 / 10.0;
      }
      ++v1;
      ++v0;
    }
    while ( v1 != 4 );
    sprintf(byte_6F7FC, "%.2f", v2);
    dbl_6FB30 = v2;
    sub_2A480(&v14, &v15);
    sleep(5u);
  }
}
