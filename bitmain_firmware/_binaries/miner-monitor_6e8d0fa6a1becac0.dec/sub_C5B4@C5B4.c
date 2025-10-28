_DWORD *__fastcall sub_C5B4(int *a1)
{
  _DWORD *result; // r0
  int *v3; // r1
  int *v4; // r3
  _DWORD *v5; // r2
  int v6; // r6
  int v7; // r5
  int v8; // r4
  int v9; // r12
  int v10; // r12
  int v11; // r3
  int v12; // r3

  result = sub_C540();
  if ( result )
  {
    v3 = a1 + 8;
    v4 = a1;
    v5 = result;
    do
    {
      v6 = *v4;
      v7 = v4[1];
      v8 = v4[2];
      v9 = v4[3];
      v4 += 4;
      *v5 = v6;
      v5[1] = v7;
      v5[2] = v8;
      v5[3] = v9;
      v5 += 4;
    }
    while ( v4 != v3 );
    v10 = *v4;
    v11 = v4[1];
    *v5 = v10;
    v5[1] = v11;
    v12 = result[3];
    result[8] = 0;
    result[1] = 0;
    result[3] = v12 | 0x100;
    *result = 0;
  }
  return result;
}
