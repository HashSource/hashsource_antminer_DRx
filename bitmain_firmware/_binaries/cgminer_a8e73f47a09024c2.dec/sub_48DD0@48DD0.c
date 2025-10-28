int sub_48DD0()
{
  int v0; // r5
  int result; // r0
  int v2; // r7
  int v3; // t1
  int v4; // r4
  int i; // r4
  int v6; // r4
  _DWORD v7[2]; // [sp+4h] [bp-30h] BYREF
  _DWORD v8[2]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v9[3]; // [sp+14h] [bp-20h] BYREF
  _DWORD v10[3]; // [sp+20h] [bp-14h] BYREF
  char v11; // [sp+2Eh] [bp-6h] BYREF
  _BYTE v12[5]; // [sp+2Fh] [bp-5h] BYREF

  v0 = 0;
  v12[0] = 0;
  v11 = 0;
  v10[0] = 218893066;
  v10[1] = 286265102;
  v10[2] = 353637138;
  memset(v9, 0, sizeof(v9));
  result = 387323156;
  v8[0] = 387323156;
  v8[1] = 454695192;
  v7[0] = 0;
  v7[1] = 0;
  v2 = 736019;
  do
  {
    v3 = *(unsigned __int8 *)++v2;
    if ( v3 == 1 )
    {
      sub_45A38(v0);
      sub_477A0(v0);
      sub_45870(v0);
      sub_46AB8(v0, v12);
      sub_45DD8(v0, (int)v10);
      sub_45FF0(v0, (int)v9);
      sub_47144(v0, (int)v8);
      sub_47358(v0, (int)v7);
      sub_45C00(v0, 120);
      sub_46E4C(v0, &v11);
      sub_463C4(v0);
      sub_463C4(v0);
      LOBYTE(v4) = 3;
      do
      {
        sub_46754(v0);
        sub_30168();
        v4 = (unsigned __int8)(v4 - 1);
      }
      while ( v4 );
      for ( i = 0; i != 35; ++i )
      {
        printf("i = %d\n", i);
        sub_30168();
      }
      LOBYTE(v6) = 3;
      do
      {
        sub_46754(v0);
        result = sub_30168();
        v6 = (unsigned __int8)(v6 - 1);
      }
      while ( v6 );
    }
    v0 = (unsigned __int8)(v0 + 1);
  }
  while ( v0 != 4 );
  return result;
}
