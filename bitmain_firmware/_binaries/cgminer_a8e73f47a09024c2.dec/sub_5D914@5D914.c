int __fastcall sub_5D914(const char **a1)
{
  unsigned int v2; // r3
  bool v3; // cc
  const char *v4; // r2
  int result; // r0
  _BYTE *i; // r12
  const char *v7; // r3
  bool v8; // zf
  int v9; // r3
  bool v10; // zf
  _DWORD v11[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = (unsigned int)a1[1];
  v3 = v2 > 4;
  if ( v2 != 4 )
    v3 = v2 - 1 > 1;
  if ( v3 )
    errx(1, "Option %s: unknown entry type %u", *a1, v2);
  if ( !a1[6] )
    errx(1, "Option %s: description cannot be NULL", *a1);
  v4 = *a1;
  if ( **a1 != 45 )
    errx(1, "Option %s: does not begin with '-'", v4);
  result = sub_5D714((int)v4, v11);
  for ( i = (_BYTE *)result; result; i = (_BYTE *)result )
  {
    if ( *i == 45 )
    {
      if ( v11[0] == 1 )
        errx(1, "Option %s: invalid long option '--'", *a1);
      ++dword_B43AC;
    }
    else
    {
      if ( v11[0] != 1 )
        errx(1, "Option %s: invalid short option '%.*s'", *a1, v11[0] + 1, i - 1);
      ++dword_B43B0;
      v7 = a1[1];
      v8 = v7 == (const char *)2;
      if ( v7 != (const char *)2 )
        v8 = v7 == (const char *)4;
      if ( v8 )
        ++dword_B43B8;
    }
    if ( a1[1] == (const char *)1 )
    {
      v9 = (unsigned __int8)i[v11[0]];
      v10 = v9 == 32;
      if ( v9 != 32 )
        v10 = v9 == 61;
      if ( v10 )
        errx(1, "Option %s: does not take arguments '%s'", *a1, &i[v11[0] + 1]);
    }
    result = sub_5D798((int)i, v11);
  }
  return result;
}
