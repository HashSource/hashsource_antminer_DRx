int __fastcall sub_5D714(int a1, _DWORD *a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r12
  int v6; // r2
  int v7; // r3
  int v8; // t1

  result = a1 + 1;
  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( v4 )
  {
    switch ( v4 )
    {
      case '|':
        v6 = 0;
        break;
      case '=':
        v6 = 0;
        break;
      case ' ':
        v6 = 0;
        break;
      default:
        v5 = result;
        v6 = 0;
        do
        {
          ++v6;
          v8 = *(unsigned __int8 *)++v5;
          v7 = v8;
        }
        while ( v8 && v7 != 124 && v7 != 61 && v7 != 32 );
        break;
    }
  }
  else
  {
    v6 = 0;
  }
  *a2 = v6;
  return result;
}
