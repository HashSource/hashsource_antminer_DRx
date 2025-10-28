void __fastcall sub_34608(unsigned int *a1, int a2, char *a3, int a4)
{
  char *v7; // r7
  int *v8; // r7
  char *v9; // r4
  char *s; // [sp+Ch] [bp-Ch] BYREF
  const char *v11; // [sp+10h] [bp-8h] BYREF
  const char *v12; // [sp+14h] [bp-4h] BYREF

  if ( a3 && *a3 )
  {
    if ( sub_31F7C((unsigned __int8 *)a3, (unsigned __int8 **)&s, &v11, &v12) )
    {
      v8 = (int *)sub_1746C();
      sub_150B4((int)v8, s);
      sub_267F4((int)v8, 1, s, v11, v12);
      v9 = sub_30440(s, a4);
      sub_32F3C(a1, 55, *v8, (int)v9, a4);
      if ( v9 != s )
        free(v9);
    }
    else
    {
      v7 = sub_30440(a3, a4);
      sub_32F3C(a1, 53, 0, (int)v7, a4);
      if ( v7 != a3 )
        free(v7);
    }
  }
  else
  {
    sub_32F3C(a1, 52, 0, 0, a4);
  }
}
