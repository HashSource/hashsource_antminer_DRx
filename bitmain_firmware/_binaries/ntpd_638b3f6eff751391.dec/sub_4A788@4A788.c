void __fastcall sub_4A788(int a1, _DWORD *a2)
{
  _DWORD *v3; // r6
  int v4; // r4
  _DWORD *v5; // r5
  void *v6; // t1
  const char *v7; // r0
  char *v8; // r1

  if ( (a2[4] & 8) != 0 )
  {
    v3 = (_DWORD *)a2[7];
    if ( v3 )
    {
      v4 = *v3 - 1;
      if ( v4 >= 0 )
      {
        v5 = &v3[*v3 + 2];
        do
        {
          --v4;
          v6 = (void *)*--v5;
          free(v6);
        }
        while ( v4 != -1 );
      }
      free(v3);
    }
  }
  else
  {
    v7 = (const char *)a2[6];
    if ( v7 )
    {
      v8 = sub_44D28(v7);
      sub_444C0(a2 + 7, (int)v8);
    }
  }
}
