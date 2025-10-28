size_t __fastcall sub_3C790(int a1, int a2, char a3, char a4, int a5)
{
  int v7; // [sp+4h] [bp-10h] BYREF
  char v8; // [sp+8h] [bp-Ch]
  char v9; // [sp+9h] [bp-Bh]
  char v10; // [sp+Ah] [bp-Ah]
  char v11; // [sp+Bh] [bp-9h]
  char v12; // [sp+Ch] [bp-8h]

  v12 = 0;
  v7 = 0;
  if ( a2 )
  {
    LOWORD(v7) = 2385;
  }
  else
  {
    BYTE2(v7) = a3;
    LOWORD(v7) = 2369;
  }
  HIBYTE(v7) = a4;
  v11 = a5;
  v9 = BYTE2(a5);
  v10 = BYTE1(a5);
  v8 = HIBYTE(a5);
  v12 = sub_36D08(&v7, 0x40u);
  return sub_37A50(a1, &v7, 9u);
}
