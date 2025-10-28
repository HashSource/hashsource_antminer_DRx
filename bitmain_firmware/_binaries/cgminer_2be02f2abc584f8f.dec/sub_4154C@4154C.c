void __noreturn sub_4154C()
{
  int v0; // s26
  int v1; // r8
  double *v2; // r7
  unsigned int *v3; // r5
  int v4; // r6
  double v5; // d8
  int v6; // r4
  int v8; // r10
  double v9; // r0
  double v10; // d16
  double *v11; // r11
  int v12; // r3
  double v13; // d17
  int v14; // r10
  int v15; // [sp+0h] [bp-16Ch] BYREF
  char *v16; // [sp+4h] [bp-168h]
  int v17; // [sp+8h] [bp-164h]
  int v18; // [sp+Ch] [bp-160h]
  int v19; // [sp+10h] [bp-15Ch]
  int v20; // [sp+14h] [bp-158h]
  double s[40]; // [sp+18h] [bp-154h] BYREF
  struct timeval v22; // [sp+158h] [bp-14h] BYREF
  struct timeval v23; // [sp+160h] [bp-Ch] BYREF

  memset(s, 0, sizeof(s));
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  sub_2FE30(&v23);
  sub_2FE30(&v22);
  while ( 1 )
  {
    sub_2FE30(&v22);
    v0 = v22.tv_sec - v23.tv_sec;
    v15 = v22.tv_usec - v23.tv_usec;
    if ( v22.tv_usec - v23.tv_usec < 0 )
    {
      --v0;
      v15 = v22.tv_usec - v23.tv_usec + 1000000;
    }
    v1 = 603403;
    v2 = (double *)&unk_75C28;
    v3 = (unsigned int *)&unk_75C48;
    v4 = 0;
    v5 = 0.0;
    v6 = 0;
    v16 = (char *)&unk_869F4;
    do
    {
      if ( *(unsigned __int8 *)++v1 )
      {
        v8 = *(int *)((char *)&v15 + v4 + 8);
        v9 = sub_5A3F0(-*v3, 63 * *v3 - v3[1] + ((0xFFFFFFFF * (unsigned __int64)*v3) >> 32));
        *(_QWORD *)v3 = 0;
        s[10 * v6 + v8] = v9 / ((double)v0 + (double)(v15 + 1) / 1000000.0);
        *v2 = 0.0;
        v10 = 0.0;
        v11 = &s[10 * v6];
        v12 = 10;
        do
        {
          v13 = *v11++;
          v10 = v10 + v13;
          --v12;
        }
        while ( v12 );
        *v2 = v10;
        sprintf(&v16[16 * v6], "%.2f", v10 / 1000000000.0 / 10.0);
        v5 = v5 + *v2 / 1000000000.0 / 10.0;
        v14 = v8 + 1;
        if ( v14 > 9 )
          *(int *)((char *)&v15 + v4 + 8) = 0;
        else
          *(int *)((char *)&v15 + v4 + 8) = v14;
      }
      ++v6;
      v4 += 4;
      ++v2;
      v3 += 2;
    }
    while ( v6 != 4 );
    sprintf(byte_75984, "%.2f", v5);
    dbl_75C68 = v5;
    sub_2FAE0(&v23, &v22);
    sleep(5u);
  }
}
