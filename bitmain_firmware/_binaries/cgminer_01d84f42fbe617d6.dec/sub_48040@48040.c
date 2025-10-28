unsigned __int8 *__fastcall sub_48040(const char **a1)
{
  unsigned int v1; // r1
  bool v2; // cc
  int v4; // r3
  const char *v5; // r2
  int v6; // r1
  unsigned __int8 *v7; // r12
  const char *v8; // r1
  int v9; // r2
  int v10; // t1
  const char *v11; // r2
  bool v12; // zf
  int v13; // r1
  const char *v14; // r0
  int v15; // r1
  bool v16; // zf
  unsigned __int8 *result; // r0
  int i; // [sp+Ch] [bp-4h] BYREF

  v1 = (unsigned int)a1[1];
  v2 = v1 > 4;
  if ( v1 != 4 )
    v2 = v1 - 1 > 1;
  if ( v2 )
    errx(1, "Option %s: unknown entry type %u", *a1, a1[1]);
  v4 = 0;
  v5 = *a1;
  if ( !a1[6] )
    errx(1, "Option %s: description cannot be NULL", v5);
  if ( *v5 != 45 )
    errx(1, "Option %s: does not begin with '-'", v5);
  v6 = *((unsigned __int8 *)v5 + 1);
  v7 = (unsigned __int8 *)(v5 + 1);
  if ( v5[1] )
  {
    if ( v6 != 124 && v6 != 61 && v6 != 32 )
    {
      v8 = v5 + 1;
      do
      {
        v10 = *(unsigned __int8 *)++v8;
        v9 = v10;
        ++v4;
      }
      while ( v10 && v9 != 124 && v9 != 61 && v9 != 32 );
    }
  }
  else
  {
    v4 = *((unsigned __int8 *)v5 + 1);
  }
  for ( i = v4; ; v4 = i )
  {
    if ( *v7 == 45 )
    {
      if ( v4 == 1 )
        errx(1, "Option %s: invalid long option '--'", *a1);
      v14 = a1[1];
      ++dword_C54C0;
    }
    else
    {
      if ( v4 != 1 )
        errx(1, "Option %s: invalid short option '%.*s'", *a1, v4 + 1, (const char *)v7 - 1);
      v11 = a1[1];
      v12 = v11 == (const char *)2;
      if ( v11 != (const char *)2 )
        v12 = v11 == (const char *)4;
      v13 = ++dword_C54C4;
      if ( v12 )
        v13 = dword_C54CC;
      v14 = v11;
      if ( v12 )
        dword_C54CC = v13 + 1;
    }
    if ( v14 == (const char *)1 )
    {
      v15 = v7[v4];
      v16 = v15 == 32;
      if ( v15 != 32 )
        v16 = v15 == 61;
      if ( v16 )
        errx(1, "Option %s: does not take arguments '%s'", *a1, (const char *)&v7[v4 + 1]);
    }
    result = sub_47DBC((int)v7, &i);
    v7 = result;
    if ( !result )
      break;
  }
  return result;
}
