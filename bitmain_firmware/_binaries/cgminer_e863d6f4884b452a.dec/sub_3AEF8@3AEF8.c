int sub_3AEF8()
{
  unsigned __int8 *v0; // r9
  int v1; // r5
  int result; // r0
  int v3; // t1
  int v4; // r4
  int v5; // r4
  char v6; // [sp+6h] [bp-2h] BYREF
  char v7; // [sp+7h] [bp-1h] BYREF
  _DWORD v8[2]; // [sp+8h] [bp+0h] BYREF
  _DWORD v9[2]; // [sp+10h] [bp+8h] BYREF
  _DWORD v10[3]; // [sp+18h] [bp+10h] BYREF
  _DWORD v11[4]; // [sp+24h] [bp+1Ch] BYREF

  v0 = (unsigned __int8 *)&unk_73EF0;
  v1 = 0;
  v6 = 0;
  v10[0] = 218893066;
  v10[1] = 286265102;
  v10[2] = 353637138;
  result = 387323156;
  v7 = 0;
  memset(v11, 0, 12);
  v8[0] = 387323156;
  v8[1] = 454695192;
  v9[0] = 0;
  v9[1] = 0;
  do
  {
    v3 = *v0++;
    if ( v3 == 1 )
    {
      LOBYTE(v4) = 3;
      sub_38D8C(v1);
      sub_3A0A8(v1);
      sub_38C74(v1);
      sub_39834(v1, &v6);
      sub_38FC8(v1, (int)v10);
      sub_3910C(v1, (int)v11);
      sub_39CA8(v1, (int)v8);
      sub_39DE8(v1, (int)v9);
      sub_38EA4(v1, 120);
      sub_39AAC(v1, &v7);
      sub_393B8(v1);
      sub_393B8(v1);
      do
      {
        sub_395EC(v1);
        sub_2A810();
        v4 = (unsigned __int8)(v4 - 1);
      }
      while ( v4 );
      do
      {
        printf("i = %d\n", v4++);
        sub_2A810();
      }
      while ( v4 != 35 );
      LOBYTE(v5) = 3;
      do
      {
        sub_395EC(v1);
        result = sub_2A810();
        v5 = (unsigned __int8)(v5 - 1);
      }
      while ( v5 );
    }
    v1 = (unsigned __int8)(v1 + 1);
  }
  while ( v1 != 4 );
  return result;
}
