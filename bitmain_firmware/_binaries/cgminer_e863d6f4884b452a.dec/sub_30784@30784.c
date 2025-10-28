void __fastcall sub_30784(unsigned int *a1, int a2, char *nptr, int a4, int a5)
{
  int v6; // r3
  unsigned int *v7; // r6
  int v8; // r2
  int v9; // r1
  int v10; // r5
  int v11; // r0
  int v12; // r7
  int v13; // r4
  char *v14; // r8
  unsigned __int8 v15; // [sp+20h] [bp+18h]

  v6 = dword_72EF0;
  if ( !dword_72EF0 )
  {
    v15 = a4;
    v8 = 0;
    v9 = 8;
    goto LABEL_5;
  }
  v7 = a1;
  if ( !nptr || !*nptr )
  {
    v6 = 0;
    v15 = a4;
    v8 = 0;
    v9 = 25;
LABEL_5:
    sub_30214(a1, v9, v8, v6, v15);
    return;
  }
  v10 = a4;
  v11 = strtol(nptr, 0, 10);
  v12 = v11;
  if ( v11 < 0 || v11 >= dword_72EF0 )
  {
    v15 = v10;
    v8 = v11;
    a1 = v7;
    v6 = 0;
    v9 = 26;
    goto LABEL_5;
  }
  if ( dword_72EF0 <= 1 )
  {
    v15 = v10;
    v8 = v11;
    a1 = v7;
    v6 = 0;
    v9 = 66;
    goto LABEL_5;
  }
  v13 = *(_DWORD *)(dword_732EC + 4 * v11);
  if ( v13 == sub_1E098() )
    sub_1F158(0);
  if ( v13 == sub_1E098() )
  {
    v15 = v10;
    v8 = v12;
    a1 = v7;
    v6 = 0;
    v9 = 67;
    goto LABEL_5;
  }
  *(_DWORD *)(v13 + 100) = 0;
  v14 = (char *)sub_2E618(*(const char **)(v13 + 172), v10);
  if ( v14 == *(char **)(v13 + 172) )
  {
    sub_1A3E8(v13);
    v15 = v10;
    v6 = (int)v14;
    v8 = v12;
    a1 = v7;
    v9 = 68;
    goto LABEL_5;
  }
  sub_1A3E8(v13);
  sub_30214(v7, 68, v12, (int)v14, v10);
  j_free(v14);
}
