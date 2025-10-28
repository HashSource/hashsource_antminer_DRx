int *__fastcall sub_12CB64(int *result, int *a2, unsigned int a3, _BYTE *a4)
{
  int *v4; // r6
  int v6; // r10
  unsigned int v7; // r12
  void *v8; // r8
  int v9; // r1
  const void *v10; // r11
  unsigned int v11; // r7
  int v12; // r5
  char *v13; // r0
  int v14; // r9
  size_t v15; // r2
  int v16; // r7
  int v17; // r1
  int v18; // r3
  size_t v19; // r10
  char *v20; // r7
  char *v21; // r0
  int v22; // [sp+0h] [bp-Ch]

  v4 = result;
  v6 = *a2;
  v7 = a2[1];
  v8 = (void *)a2[3];
  if ( a3 >= a2[2] )
    a3 = a2[2];
  v9 = a2[4];
  v10 = (const void *)a2[5];
  v11 = a2[6];
  if ( a3 <= v7 )
    goto LABEL_7;
  v12 = a3 + v6;
  if ( a3 + v6 > 0x100000 )
  {
    *result = (int)v8;
    result[1] = v9;
    result[2] = (int)v10;
    result[3] = v11;
    result[4] = v6;
    *a4 = 0;
    return result;
  }
  v22 = v9;
  v13 = (char *)malloc(a3 + v6);
  v14 = (int)v13;
  v9 = v22;
  if ( !v13 )
  {
    *a4 = 0;
LABEL_7:
    *v4 = (int)v8;
    v4[1] = v9;
    v4[2] = (int)v10;
    v4[3] = v11;
    v4[4] = v6;
    return v4;
  }
  if ( (unsigned int)v10 >= v11 )
  {
    v19 = v11 - (_DWORD)v8;
    v20 = &v13[v22 - (_DWORD)v10];
    memcpy(v13, v10, v22 - (_DWORD)v10);
    v21 = v20;
    v16 = (int)&v20[v19];
    memcpy(v21, v8, v19);
  }
  else
  {
    v15 = v11 - (_DWORD)v10;
    v16 = (int)&v13[v11 - (_DWORD)v10];
    memcpy(v13, v10, v15);
  }
  a2[6] = v16;
  free(v8);
  v17 = a2[6];
  v18 = *a2;
  a2[4] = v14 + v12;
  v4[1] = v14 + v12;
  a2[3] = v14;
  a2[5] = v14;
  *v4 = v14;
  v4[2] = v14;
  v4[3] = v17;
  v4[4] = v18;
  return v4;
}
