int __fastcall sub_DF84(int result, int a2, unsigned __int8 *a3, int errnum)
{
  unsigned int v4; // r6
  _BYTE *v5; // r4
  int v8; // r1
  int v9; // r2
  char *v10; // r8
  _BYTE *v11; // r3
  size_t v12; // r2
  void *v13; // r0

  v4 = result + a2 - 1;
  v5 = (_BYTE *)result;
LABEL_2:
  v8 = *a3;
  if ( *a3 )
  {
    while ( (unsigned int)v5 < v4 )
    {
      if ( v8 == 37 )
      {
        v9 = a3[1];
        a3 += 2;
        if ( v9 == 109 )
        {
          v10 = strerror(errnum);
          result = strlen(v10);
          v11 = &v5[result];
          v12 = result;
          if ( v4 > (unsigned int)&v5[result] )
          {
            v13 = v5;
            v5 = v11;
            result = (int)memcpy(v13, v10, v12);
          }
          goto LABEL_2;
        }
        *v5 = 37;
        if ( v9 )
        {
          v5[1] = v9;
          v5 += 2;
          goto LABEL_2;
        }
        ++v5;
        break;
      }
      ++a3;
      *v5++ = v8;
      v8 = *a3;
      if ( !*a3 )
        break;
    }
  }
  *v5 = 0;
  return result;
}
