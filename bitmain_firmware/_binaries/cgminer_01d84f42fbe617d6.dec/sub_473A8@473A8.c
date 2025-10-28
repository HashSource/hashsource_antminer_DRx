bool __fastcall sub_473A8(int *a1, int *a2)
{
  bool v2; // zf
  int v3; // r2
  int v6; // r3
  _DWORD *v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r5
  int v12; // r0
  char *v13; // r1
  int v14; // r7
  int v15; // r0
  int v16; // r7
  unsigned int v17; // r5
  int v18; // r2
  int v19; // r1
  int v20; // r0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  v3 = v2;
  if ( v2 )
    return 0;
  v6 = *a1;
  if ( *a1 != *a2 )
    return v3;
  if ( a1 == a2 )
    return 1;
  switch ( v6 )
  {
    case 0:
      if ( a1[2] == a2[2] )
      {
        v8 = sub_46714(a1);
        v9 = sub_4678C((int)v8);
        if ( v9 )
        {
          while ( 1 )
          {
            v11 = v9 - 16;
            v12 = sub_46798(v9 - 16);
            v13 = (char *)v9;
            v14 = v12;
            if ( !v12 )
              break;
            v15 = sub_46698(a2, v13);
            if ( !sub_473A8(v14, v15) )
              return 0;
            v10 = sub_46760(a1, v11);
            v9 = sub_4678C(v10);
            if ( !v9 )
              return 1;
          }
        }
        return 1;
      }
      return 0;
    case 1:
      v16 = a1[3];
      if ( v16 == a2[3] )
      {
        if ( v16 )
        {
          v17 = v3;
          v18 = *a1;
          while ( 1 )
          {
            v20 = v18 == 1 && a1[3] > v17 ? *(_DWORD *)(a1[4] + 4 * v17) : 0;
            v19 = v6 == 1 && a2[3] > v17 ? *(_DWORD *)(a2[4] + 4 * v17) : 0;
            if ( !sub_473A8(v20, v19) )
              break;
            if ( ++v17 == v16 )
              return 1;
            v18 = *a1;
            v6 = *a2;
          }
          return 0;
        }
        return 1;
      }
      return 0;
    case 2:
      return strcmp((const char *)a1[2], (const char *)a2[2]) == 0;
    case 3:
      return *((_QWORD *)a1 + 1) == *((_QWORD *)a2 + 1);
  }
  if ( v6 != 4 )
    return v3;
  return *((double *)a1 + 1) == *((double *)a2 + 1);
}
