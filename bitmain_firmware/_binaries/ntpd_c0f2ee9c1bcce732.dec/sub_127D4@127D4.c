int __fastcall sub_127D4(int a1, int a2)
{
  int result; // r0
  int v5; // r1
  int *v6; // r7
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  bool v13; // cc
  int v14; // r1

  result = sub_11458((char *)a1);
  if ( result )
  {
    if ( dword_7CF4C > 3 )
    {
      v5 = sub_50CD0(a1);
      return printf("WARNING: Attempt to add duplicate addr %s to address list\n", v5);
    }
  }
  else
  {
    v6 = (int *)sub_4F524(36);
    v7 = *(_DWORD *)(a1 + 4);
    v8 = *(_DWORD *)(a1 + 8);
    v9 = *(_DWORD *)(a1 + 12);
    v6[1] = *(_DWORD *)a1;
    v6[2] = v7;
    v6[3] = v8;
    v6[4] = v9;
    result = *(_DWORD *)(a1 + 16);
    v10 = *(_DWORD *)(a1 + 20);
    v11 = *(_DWORD *)(a1 + 24);
    v12 = dword_CA64C;
    v13 = dword_7CF4C <= 3;
    v6[8] = a2;
    v6[5] = result;
    v6[6] = v10;
    v6[7] = v11;
    *v6 = v12;
    dword_CA64C = (int)v6;
    if ( !v13 )
    {
      v14 = sub_50CD0(a1);
      return printf("Added addr %s to list of addresses\n", v14);
    }
  }
  return result;
}
