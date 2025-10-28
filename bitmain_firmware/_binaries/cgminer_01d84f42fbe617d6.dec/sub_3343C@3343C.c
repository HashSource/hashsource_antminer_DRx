int __fastcall sub_3343C(unsigned int *a1, int a2, const char *a3, unsigned __int8 a4)
{
  unsigned int *v5; // r5
  char *v7; // r0
  char *v8; // r7
  int v9; // r8
  int v10; // r10
  int v11; // r9
  const __int32_t **v12; // r0
  int v13; // r1
  int v14; // r2
  bool v15; // zf
  int v16; // r3
  _BOOL4 v17; // r4
  const char *v19; // r3
  int v20; // r1
  unsigned __int8 v21; // [sp+20h] [bp+20h]

  v5 = a1;
  if ( a3 && *a3 )
  {
    v7 = strchr(a3, 44);
    v8 = v7;
    if ( v7 && (*v7 = 0, v7 != (char *)-1) && (v9 = (unsigned __int8)v7[1], v7[1]) )
    {
      if ( !strcasecmp(a3, "all") )
      {
        v11 = 0;
        v10 = 1;
      }
      else
      {
        if ( strcasecmp(a3, "bestshare") )
        {
          v21 = a4;
          a1 = v5;
          v19 = a3;
          v20 = 95;
          return sub_32F3C(a1, v20, 0, (int)v19, v21);
        }
        v10 = 0;
        v11 = 1;
      }
      v12 = _ctype_tolower_loc();
      v14 = LOBYTE((*v12)[v9]);
      v15 = v14 == 102;
      if ( v14 != 102 )
        v15 = v14 == 116;
      v8[1] = v14;
      if ( v15 )
      {
        v16 = v14 - 116;
        v17 = v14 == 116;
        if ( v14 == 116 )
          v12 = (const __int32_t **)sub_1AECC();
        if ( v10 )
          sub_1ABE0((int)v12, v13, v14, v16);
        if ( v11 )
          sub_15BEC();
        a1 = v5;
        v19 = "All";
        if ( v17 )
        {
          v20 = 96;
          v21 = a4;
          if ( !v10 )
            v19 = "BestShare";
        }
        else
        {
          v21 = a4;
          v20 = 97;
          if ( !v10 )
            v19 = "BestShare";
        }
      }
      else
      {
        v21 = a4;
        a1 = v5;
        v19 = 0;
        v20 = 76;
      }
    }
    else
    {
      v21 = a4;
      a1 = v5;
      v19 = 0;
      v20 = 75;
    }
  }
  else
  {
    v21 = a4;
    v19 = 0;
    v20 = 94;
  }
  return sub_32F3C(a1, v20, 0, (int)v19, v21);
}
