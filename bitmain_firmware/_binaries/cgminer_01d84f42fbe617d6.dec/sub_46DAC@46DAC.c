int __fastcall sub_46DAC(_DWORD *a1, unsigned int a2)
{
  unsigned int v4; // r3
  int v5; // r6
  int v6; // r0
  int v7; // r2
  int v8; // r2
  unsigned int v9; // r3

  if ( a1 )
  {
    if ( *a1 == 1 )
    {
      v4 = a1[3];
      if ( v4 > a2 )
      {
        v5 = 4 * a2;
        v6 = *(_DWORD *)(a1[4] + 4 * a2);
        if ( !v6 || (v7 = *(_DWORD *)(v6 + 4), v7 == -1) || (v8 = v7 - 1, (*(_DWORD *)(v6 + 4) = v8) != 0) )
        {
          v9 = v4 - 1;
          if ( a2 >= v9 )
          {
LABEL_8:
            a1[3] = v9;
            return 0;
          }
        }
        else
        {
          sub_46C5C((void **)v6);
          v9 = a1[3] - 1;
          if ( a2 >= v9 )
            goto LABEL_8;
        }
        memmove((void *)(a1[4] + v5), (const void *)(a1[4] + 4 * (a2 + 1)), 4 * (v9 - a2));
        v9 = a1[3] - 1;
        goto LABEL_8;
      }
    }
  }
  return -1;
}
