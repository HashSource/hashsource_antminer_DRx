void __fastcall sub_1E100(int a1, char *s1, int a3, int a4)
{
  char *v5; // r7
  _BYTE *v9; // r3
  char *v10; // r4
  int v11; // r3
  bool v12; // zf
  int v13; // r9
  int v14; // [sp+10h] [bp-8h] BYREF

  v5 = *(char **)(a1 + 8);
  if ( strcmp(s1, v5) || *(unsigned __int8 *)(a1 + 16) != a3 || *(unsigned __int8 *)(a1 + 17) != a4 )
  {
    v9 = *(_BYTE **)(a1 + 4);
    if ( v9 )
    {
      if ( *v9 && s1 )
      {
        v10 = s1;
        while ( 1 )
        {
          if ( *v10 == 46 && v10[1] == 46 )
          {
            v11 = (unsigned __int8)v10[2];
            v12 = v11 == 0;
            if ( v10[2] )
              v12 = v11 == 47;
            if ( v12 )
              break;
          }
          v10 = strchr(v10, 47);
          if ( !v10 )
          {
            if ( *(_DWORD *)a1 )
            {
              fclose(*(FILE **)a1);
              v5 = *(char **)(a1 + 8);
              v13 = 1;
              *(_DWORD *)a1 = 0;
            }
            else
            {
              v13 = 0;
            }
            if ( dword_7CF4C > 2 )
            {
              printf(
                "configuring filegen:\n\tprefix:\t%s\n\tbasename:\t%s -> %s\n\ttype:\t%d -> %d\n\tflag: %x -> %x\n",
                *(const char **)(a1 + 4),
                v5,
                s1,
                *(unsigned __int8 *)(a1 + 16),
                a3,
                *(unsigned __int8 *)(a1 + 17),
                a4);
              v5 = *(char **)(a1 + 8);
            }
            if ( strcmp(v5, s1) )
            {
              free(v5);
              *(_DWORD *)(a1 + 8) = sub_4F4E8(s1);
            }
            *(_BYTE *)(a1 + 16) = a3;
            *(_BYTE *)(a1 + 17) = a4;
            if ( v13 )
            {
              sub_4CBA8(&v14);
              sub_1DAE8(a1, v14);
            }
            return;
          }
        }
      }
    }
  }
}
