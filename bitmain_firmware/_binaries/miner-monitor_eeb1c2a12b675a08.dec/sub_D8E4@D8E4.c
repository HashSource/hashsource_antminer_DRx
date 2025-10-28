_DWORD *__fastcall sub_D8E4(const char *a1, unsigned __int8 **a2, int a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  const char *v8; // r3
  unsigned int v9; // r12
  unsigned int v10; // t1
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r4
  unsigned __int8 *v13; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  v6 = sub_C540();
  dword_1B3A4 = 0;
  v7 = v6;
  if ( v6 )
  {
    if ( a1 && *a1 && *(unsigned __int8 *)a1 <= 0x20u )
    {
      v8 = a1 + 1;
      do
      {
        a1 = v8;
        if ( !v8 )
          break;
        v10 = *(unsigned __int8 *)v8++;
        v9 = v10;
        if ( !v10 )
          break;
      }
      while ( v9 <= 0x20 );
    }
    v11 = sub_D05C((int)v6, a1);
    v12 = v11;
    if ( v11 )
    {
      if ( a3 )
      {
        v13 = v11;
        while ( 1 )
        {
          v12 = v13++;
          if ( !*v12 )
            break;
          if ( *v12 > 0x20u )
            goto LABEL_20;
          v12 = v13;
          if ( !v13 )
          {
            if ( !MEMORY[0] )
              break;
LABEL_20:
            v15 = v7;
            v7 = 0;
            sub_D864(v15);
            dword_1B3A4 = (int)v12;
            return v7;
          }
        }
      }
      if ( a2 )
        *a2 = v12;
    }
    else
    {
      v16 = v7;
      v7 = 0;
      sub_D864(v16);
    }
  }
  return v7;
}
