int __fastcall sub_33FFC(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r7
  int v11; // r4
  unsigned __int8 v13; // [sp+18h] [bp+18h]

  v6 = a1;
  if ( dword_63740 )
  {
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      v10 = v9;
      if ( v9 < 0 || v9 >= dword_63740 )
      {
        v13 = a4;
        a1 = v6;
        v7 = v10;
        v8 = 26;
      }
      else
      {
        v11 = *(_DWORD *)(dword_639E0 + 4 * v9);
        if ( *(_DWORD *)(v11 + 100) )
        {
          if ( dword_63B84 <= 1 )
          {
            v13 = a4;
            a1 = v6;
            v7 = v10;
            v8 = 51;
          }
          else
          {
            *(_DWORD *)(v11 + 100) = 0;
            if ( v11 == sub_1D644() )
              sub_195D4(0);
            v13 = a4;
            a1 = v6;
            v7 = v10;
            v8 = 48;
          }
        }
        else
        {
          v13 = a4;
          a1 = v6;
          v7 = v10;
          v8 = 50;
        }
      }
    }
    else
    {
      v7 = 0;
      v13 = a4;
      v8 = 25;
    }
  }
  else
  {
    v7 = 0;
    v13 = a4;
    v8 = 8;
  }
  return sub_32F3C(a1, v8, v7, 0, v13);
}
