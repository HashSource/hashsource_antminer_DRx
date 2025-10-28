void __fastcall sub_30C48(unsigned int *a1, int a2, char *a3, int a4)
{
  char *v7; // r8
  int *v8; // r7
  char *v9; // r4
  char *s; // [sp+Ch] [bp-Ch] BYREF
  const char *v11; // [sp+10h] [bp-8h] BYREF
  const char *v12; // [sp+14h] [bp-4h] BYREF

  if ( a3 && *a3 )
  {
    if ( sub_2F530((unsigned __int8 *)a3, &s, &v11, &v12) )
    {
      v8 = (int *)sub_1E3F0();
      sub_19DCC((int)v8, s);
      sub_26B14((int)v8, 1, s, v11, v12);
      v9 = (char *)sub_2E618(s, a4);
      sub_30214(a1, 55, *v8, (int)v9, a4);
      if ( s != v9 )
        free(v9);
    }
    else
    {
      v7 = (char *)sub_2E618(a3, a4);
      sub_30214(a1, 53, 0, (int)v7, a4);
      if ( a3 != v7 )
        free(v7);
    }
  }
  else
  {
    sub_30214(a1, 52, 0, 0, a4);
  }
}
