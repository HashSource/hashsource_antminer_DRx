unsigned __int16 *__fastcall sub_2A520(unsigned __int16 *a1, int a2, int a3, int a4)
{
  int *v8; // r5
  int v9; // r4
  bool v10; // zf
  int v11; // r4
  int v12; // t1

  v8 = (int *)(a3 + 8);
  v9 = ((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFF;
  v10 = v9 == 0;
  v11 = v9 - 1;
  if ( !v10 )
  {
    do
    {
      --v11;
      v12 = *v8++;
      sub_4DE88(v12, a4);
    }
    while ( v11 != -1 );
  }
  return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
