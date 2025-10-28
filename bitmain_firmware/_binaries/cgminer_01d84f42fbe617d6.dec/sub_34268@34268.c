int __fastcall sub_34268(unsigned int *a1, int a2, char *s, unsigned __int8 a4, int a5)
{
  unsigned int *v7; // r7
  int v8; // r2
  char *v9; // r10
  int v10; // r0
  int v11; // r1
  char *v12; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r5
  unsigned __int8 v17; // [sp+20h] [bp+20h]

  v7 = a1;
  v8 = dword_63740;
  if ( dword_63740 )
  {
    if ( s && *s )
    {
      v9 = strchr(s, 44);
      if ( v9 )
      {
        *v9 = 0;
        v10 = strtol(s, 0, 10);
        if ( v10 >= 0 && v10 < dword_63740 )
        {
          v14 = *(_DWORD *)(dword_639E0 + 4 * v10);
          v15 = strtol(v9 + 1, 0, 10);
          v16 = v15;
          if ( v15 < 0 )
          {
            v12 = *(char **)(v14 + 164);
            a1 = v7;
            v17 = a4;
            v8 = v16;
            v11 = 121;
          }
          else
          {
            *(_DWORD *)(v14 + 56) = v15;
            sub_14E18();
            v12 = *(char **)(v14 + 164);
            a1 = v7;
            v17 = a4;
            v8 = v16;
            v11 = 122;
          }
        }
        else
        {
          v8 = v10;
          v17 = a4;
          a1 = v7;
          v11 = 26;
          v12 = 0;
        }
      }
      else
      {
        v17 = a4;
        a1 = v7;
        v8 = 0;
        v12 = s;
        v11 = 86;
      }
    }
    else
    {
      v8 = 0;
      v17 = a4;
      v12 = 0;
      v11 = 25;
    }
  }
  else
  {
    v17 = a4;
    v11 = 8;
    v12 = 0;
  }
  return sub_32F3C(a1, v11, v8, (int)v12, v17);
}
