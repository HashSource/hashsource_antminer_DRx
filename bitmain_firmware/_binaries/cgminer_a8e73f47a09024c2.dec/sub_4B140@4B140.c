size_t __fastcall sub_4B140(int a1, int a2, char a3, char a4, int a5)
{
  char v7; // [sp+4h] [bp-Ch] BYREF
  char v8; // [sp+5h] [bp-Bh]
  char v9; // [sp+6h] [bp-Ah]
  char v10; // [sp+7h] [bp-9h]
  char v11; // [sp+8h] [bp-8h]
  char v12; // [sp+9h] [bp-7h]
  char v13; // [sp+Ah] [bp-6h]
  char v14; // [sp+Bh] [bp-5h]
  char v15; // [sp+Ch] [bp-4h]

  v9 = 0;
  v15 = 0;
  if ( a2 )
  {
    v7 = 81;
    v8 = 9;
  }
  else
  {
    v7 = 65;
    v8 = 9;
    v9 = a3;
  }
  v10 = a4;
  v11 = HIBYTE(a5);
  v12 = BYTE2(a5);
  v13 = BYTE1(a5);
  v14 = a5;
  v15 = sub_429CC(&v7, 64);
  return sub_43CC0(a1, &v7, 9u);
}
