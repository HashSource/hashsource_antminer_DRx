char *__fastcall sub_4DFCC(char *result, int a2, int a3)
{
  _WORD *v3; // r4
  char *v4; // r12
  int v5; // r0
  char *v6; // r5
  int v7; // r3
  int v8; // r8

  if ( (a3 & 0xC0000000) == 0 )
  {
    v3 = (_WORD *)((char *)&unk_93504 + 64 * (_DWORD)result + 288);
    v4 = (char *)&unk_78BB8 + 8 * (_DWORD)result;
    v5 = 3 * (_DWORD)result;
    v6 = (char *)&unk_78BF4 + v5;
    result = (char *)&unk_78BDC + v5;
    v7 = 0;
    v8 = a3 & 0xFF00;
    do
    {
      if ( (unsigned __int8)byte_75D9C[v7] == a2 )
      {
        if ( (a3 & 0xFF00) != 0 )
        {
          switch ( v8 )
          {
            case 256:
              v3[1] = (unsigned __int8)a3;
              v4[1] = 1;
              break;
            case 4352:
              v6[v7] = a3;
              v4[2] = 1;
              break;
            case 65024:
              result[v7] = a3;
              v4[3] = 1;
              break;
          }
        }
        else
        {
          *v3 = (unsigned __int8)a3;
          *v4 = 1;
        }
      }
      ++v7;
      v3 += 4;
      v4 += 4;
    }
    while ( v7 != 2 );
  }
  return result;
}
