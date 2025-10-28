int __fastcall sub_43530(FILE *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  int result; // r0
  int *v9; // r3
  int v10; // r8
  int v11; // r4
  const char *v12; // r2
  int *v13; // r6
  int v14; // r4
  int i; // r1
  int v16; // t1
  bool v17; // nf
  int v18; // r4
  char *v19; // r3
  int v20; // r4
  int v21; // r8
  const char *v22; // r0
  int v23; // r2
  const char *v24; // r3
  const char *v25; // r8
  unsigned __int8 *v26; // r6
  unsigned int v27; // r4
  unsigned int v28; // t1
  bool v29; // cc
  const char *v30; // r3
  int v31; // r1
  const char *v32; // r0

  v4 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    do
    {
      IO_putc(32, a1);
      --v4;
      IO_putc(32, a1);
    }
    while ( v4 != -1 );
  }
  result = *a4 - 1;
  switch ( *a4 )
  {
    case 1:
      v25 = (const char *)a4[1];
      v26 = (unsigned __int8 *)(a4 + 2);
      fprintf(a1, "<%s>", v25);
      break;
    case 2:
    case 4:
      if ( !a3 )
        return fprintf(a1, "<%1$s type=integer>0x%2$lX</%1$s>\n", a4[1], a4[2]);
      v19 = "keyword";
      if ( *a4 != 2 )
        v19 = "set-membership";
      v20 = *(_DWORD *)(a3 + 16);
      v21 = *(_DWORD *)(a3 + 24);
      fprintf(a1, "<%s type=%s>", a4[1], v19);
      (*(void (__fastcall **)(int, int))(a3 + 40))(3, a3);
      v22 = *(const char **)(a3 + 24);
      if ( v22 )
      {
        fputs(v22, a1);
        if ( *a4 != 2 )
          free(*(void **)(a3 + 24));
      }
      *(_DWORD *)(a3 + 24) = v21;
      v23 = a4[1];
      *(_DWORD *)(a3 + 16) = v20;
      return fprintf(a1, "</%s>\n", v23);
    case 3:
      v24 = "false";
      if ( a4[2] )
        v24 = "true";
      return fprintf(a1, "<%1$s type=boolean>%2$s</%1$s>\n", a4[1], v24);
    case 5:
      return fprintf(a1, "<%1$s type=integer>0x%2$lX</%1$s>\n", a4[1], a4[2]);
    case 6:
      v9 = (int *)a4[2];
      v10 = a4[1];
      if ( v9 )
      {
        v11 = *v9;
        if ( *v9 <= 0 )
        {
          return fprintf(a1, "<%s/>\n", a4[1]);
        }
        else
        {
          v12 = (const char *)a4[1];
          v13 = v9 + 2;
          fprintf(a1, "<%s type=nested>\n", v12);
          v14 = v11 - 1;
          for ( i = ++dword_7BB70; ; i = dword_7BB70 )
          {
            --v14;
            v16 = *v13++;
            sub_43530(a1, i, 0, v16);
            if ( v14 == -1 )
              break;
          }
          v18 = dword_7BB70 - 2;
          v17 = dword_7BB70 - 2 < 0;
          --dword_7BB70;
          if ( !v17 )
          {
            do
            {
              IO_putc(32, a1);
              --v18;
              IO_putc(32, a1);
            }
            while ( v18 != -1 );
          }
          return fprintf(a1, "</%s>\n", v10);
        }
      }
      return result;
    default:
      return fprintf(a1, "<%s/>\n", a4[1]);
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_26:
      v28 = *v26++;
      v27 = v28;
      v29 = v28 > 0x26;
      if ( v28 == 38 )
        goto LABEL_30;
      if ( !v29 )
        break;
      if ( v27 == 62 )
        goto LABEL_30;
      if ( v27 > 0x3E )
      {
        if ( v27 >= 0x7F )
          goto LABEL_30;
      }
      else if ( v27 == 60 )
      {
        goto LABEL_30;
      }
LABEL_38:
      IO_putc(v27, a1);
    }
    if ( !v27 )
      return fprintf(a1, "</%s>\n", v25);
    if ( v27 > 0x1F )
      goto LABEL_38;
LABEL_30:
    IO_putc(38, a1);
    if ( v27 == 38 )
    {
      v32 = "&";
    }
    else
    {
      v30 = (const char *)&unk_69C88;
      while ( 1 )
      {
        v31 = *(_DWORD *)v30;
        v32 = v30;
        v30 += 16;
        if ( v27 == v31 )
          break;
        if ( v30 == "<%s/>\n" )
        {
          fprintf(a1, "#x%02X;", v27);
          goto LABEL_26;
        }
      }
    }
    fputs(v32 + 8, a1);
  }
}
