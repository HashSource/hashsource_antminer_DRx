int __fastcall sub_32C68(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r9
  int v8; // r4
  int v9; // r0
  int v10; // r1

  if ( !dword_735E8 )
    return sub_30214((unsigned int *)a1, 10, 0, 0, a4);
  result = sub_30214((unsigned int *)a1, 60, 0, 0, a4);
  if ( !a4 )
  {
    if ( dword_735E8 <= 0 )
      return result;
    v7 = 0;
    goto LABEL_6;
  }
  result = sub_2E530((unsigned int *)a1, ",\"NOTIFY\":[");
  v7 = result;
  if ( dword_735E8 > 0 )
  {
LABEL_6:
    v8 = 0;
    do
    {
      v9 = sub_1CBB4(v8);
      v10 = v8++;
      result = sub_32ACC((unsigned int *)a1, v10, v9, a4);
    }
    while ( dword_735E8 > v8 );
  }
  if ( v7 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
