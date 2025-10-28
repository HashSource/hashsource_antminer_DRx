unsigned __int8 *__fastcall sub_E0BC(unsigned __int8 *result)
{
  int v1; // r3
  _BYTE *v2; // r12
  int v3; // r2
  int v4; // r3
  unsigned __int8 *v5; // r2
  unsigned __int8 *v6; // r1
  unsigned __int8 *v7; // r12
  unsigned __int8 *v8; // r2
  int v9; // r3
  bool v10; // zf
  unsigned __int8 *v11; // r1
  bool v12; // zf
  unsigned __int8 *i; // r2
  bool v14; // zf

  v1 = *result;
  v2 = result;
  while ( v1 )
  {
    switch ( v1 )
    {
      case 32:
      case 9:
      case 13:
      case 10:
LABEL_9:
        v1 = *++result;
        break;
      case 47:
        v3 = result[1];
        if ( v3 == 47 )
        {
          for ( i = result; ; ++i )
          {
            v14 = v1 == 10;
            if ( v1 != 10 )
              v14 = v1 == 0;
            result = i + 1;
            if ( v14 )
              break;
            v1 = i[2];
          }
        }
        else
        {
          if ( v3 != 42 )
          {
LABEL_8:
            *v2++ = v1;
            goto LABEL_9;
          }
          v4 = 42;
          v5 = result;
          v6 = result + 1;
          do
          {
            if ( v4 == 42 && v6[1] == 47 )
              break;
            v4 = v5[2];
            result = v6;
            ++v5;
            ++v6;
          }
          while ( v4 );
          v1 = result[3];
          result = v6 + 2;
        }
        break;
      case 34:
        *v2 = 34;
        v7 = v2 + 1;
        v8 = result + 1;
        v9 = result[1];
        v10 = v9 == 0;
        if ( result[1] )
          v10 = v9 == 34;
        if ( !v10 )
        {
          do
          {
            v11 = v8;
            if ( v9 == 92 )
            {
              v11 = v8 + 1;
              *v7++ = 92;
            }
            v8 = v11 + 1;
            *v7++ = *v11;
            v9 = v11[1];
            v12 = v9 == 34;
            if ( v9 != 34 )
              v12 = v9 == 0;
          }
          while ( !v12 );
        }
        *v7 = v9;
        v2 = v7 + 1;
        result = v8 + 1;
        v1 = v8[1];
        break;
      default:
        goto LABEL_8;
    }
  }
  *v2 = 0;
  return result;
}
