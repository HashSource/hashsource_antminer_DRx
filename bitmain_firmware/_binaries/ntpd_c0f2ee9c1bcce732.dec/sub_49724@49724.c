void __fastcall sub_49724(unsigned int a1, int a2)
{
  _DWORD *v3; // r0
  _DWORD **v4; // r5
  int v5; // r4
  _DWORD *v6; // t1
  const char *v7; // r4
  size_t v8; // r0
  void *v9; // r1

  if ( a1 > 0xE )
  {
    if ( (*(_DWORD *)(a2 + 16) & 8) != 0 )
    {
      v3 = *(_DWORD **)(a2 + 28);
      if ( v3 )
      {
        v4 = (_DWORD **)(v3 + 2);
        v5 = *v3 - 1;
        if ( v5 >= 0 )
        {
          do
          {
            --v5;
            v6 = *v4++;
            sub_496E8(v6);
          }
          while ( v5 != -1 );
          v3 = *(_DWORD **)(a2 + 28);
        }
        free(v3);
      }
    }
    else
    {
      v7 = *(const char **)(a2 + 52);
      v8 = strlen(v7);
      v9 = sub_47748(*(char **)(a2 + 24), v7, v8);
      if ( v9 )
        sub_444C0((_DWORD *)(a2 + 28), (int)v9);
    }
  }
}
