void __fastcall sub_48488(int a1, int a2, int a3, int a4)
{
  int v8; // r11
  int v9; // r4
  _BYTE *v10; // r9

  sub_2FF20();
  v8 = a2;
  sub_47C40(a1, 0, byte_75C10[a2 + 396], 32, a4);
  byte_77C08[8 * a1 + 4016 + 4 * a2 + a3] = 0;
  v9 = 3;
  v10 = &byte_77C08[8 * a1 + 4 * v8 + a3];
  do
  {
    sub_2FF20();
    sub_47E04(a1, 0, byte_75C10[v8 + 396], 0x20u);
    if ( v10[4016] )
      break;
    --v9;
  }
  while ( v9 );
}
