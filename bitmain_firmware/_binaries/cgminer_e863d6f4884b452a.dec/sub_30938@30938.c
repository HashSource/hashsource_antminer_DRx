int __fastcall sub_30938(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v5; // r6
  int v6; // r2
  int v7; // r1
  int v9; // r0
  int v10; // r7
  int v11; // r4
  int v12; // r8
  unsigned __int8 v14; // [sp+18h] [bp+18h]

  if ( dword_72EF0 )
  {
    v5 = a1;
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      v10 = v9;
      if ( v9 < 0 || v9 >= dword_72EF0 )
      {
        v14 = a4;
        v6 = v9;
        a1 = v5;
        v7 = 26;
      }
      else
      {
        v11 = *(_DWORD *)(dword_732EC + 4 * v9);
        if ( *(_DWORD *)(v11 + 100) == 1 )
        {
          v14 = a4;
          v6 = v9;
          a1 = v5;
          v7 = 49;
        }
        else
        {
          v12 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 100) = 1;
          if ( v12 < *(_DWORD *)(sub_1E098() + 4) )
            sub_1F158(v11);
          v14 = a4;
          v6 = v10;
          a1 = v5;
          v7 = 47;
        }
      }
    }
    else
    {
      v14 = a4;
      v6 = 0;
      v7 = 25;
    }
  }
  else
  {
    v14 = a4;
    v6 = 0;
    v7 = 8;
  }
  return sub_30214(a1, v7, v6, 0, v14);
}
