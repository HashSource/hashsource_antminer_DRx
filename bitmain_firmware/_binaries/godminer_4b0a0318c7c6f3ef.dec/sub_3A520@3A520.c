_BYTE *__fastcall sub_3A520(_DWORD *a1)
{
  _DWORD *v1; // lr
  int v2; // r5
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _BYTE *result; // r0
  __int64 v8; // r4
  int v9; // lr
  int v10; // r1
  int v11; // r3
  bool v12; // zf
  int v13; // r2
  int v14; // t1
  bool v15; // zf
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r3

  v1 = a1 + 6;
  v2 = a1[10];
  v4 = a1[7];
  v5 = a1[8];
  v6 = a1[9];
  a1[2] = a1[6];
  a1[3] = v4;
  a1[4] = v5;
  a1[5] = v6;
  if ( v2 )
  {
    result = (_BYTE *)a1[10];
    v17 = a1[11];
    v18 = a1[12];
    v19 = a1[13];
    *v1 = result;
    v1[1] = v17;
    v1[2] = v18;
    v1[3] = v19;
    a1[10] = 0;
  }
  else
  {
    result = (_BYTE *)a1[1];
    if ( *((_BYTE *)a1 + 36) || *result )
    {
      LODWORD(v8) = a1[16];
      v9 = a1[17] + 1;
      v10 = a1[18] + 1;
      a1[17] = v9;
      a1[18] = v10;
      v11 = (unsigned __int8)*result;
      v12 = v11 == 32;
      if ( v11 != 32 )
        v12 = v11 == 44;
      v13 = v12;
      if ( v11 == 58 )
        v13 |= 1u;
      if ( (unsigned int)(v11 - 9) <= 1 )
        v13 |= 1u;
      if ( v13 )
      {
        HIDWORD(v8) = 1;
        do
        {
          if ( v11 == 10 )
          {
            LODWORD(v8) = v8 + 1;
            *((_QWORD *)a1 + 8) = v8;
          }
          else
          {
            ++a1[17];
          }
          a1[18] = ++v10;
          v14 = (unsigned __int8)*++result;
          v11 = v14;
          v15 = v14 == 44;
          if ( v14 != 44 )
            v15 = v11 == 32;
          v16 = v15;
          if ( v11 == 58 )
            v16 |= 1u;
          if ( (unsigned int)(v11 - 9) <= 1 )
            v16 |= 1u;
        }
        while ( v16 );
        v9 = a1[17];
      }
      *((_BYTE *)a1 + 36) = v11;
      a1[6] = v8;
      a1[7] = v9;
      a1[8] = v10;
      if ( *result )
        ++result;
      a1[1] = result;
    }
  }
  return result;
}
