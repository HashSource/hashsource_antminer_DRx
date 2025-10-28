int __fastcall sub_3EF84(char a1, char a2, int a3)
{
  char v3; // r3
  int v4; // r4
  int v5; // r5
  int result; // r0
  _BYTE v8[4]; // [sp+0h] [bp-8h] BYREF
  char v9; // [sp+4h] [bp-4h]

  v8[2] = a1;
  v8[3] = a2;
  v9 = 0;
  if ( a3 )
    v3 = 82;
  else
    v3 = 66;
  v8[0] = v3;
  v8[1] = 4;
  v4 = 805859;
  v5 = 805836;
  v9 = sub_3B360(v8, 32);
  do
  {
    if ( *(unsigned __int8 *)++v4 )
      sub_3BBBC(*(_DWORD *)(v5 + 8), v8, 5u);
    v5 += 4;
    result = sub_2B21C();
  }
  while ( v4 != 805863 );
  return result;
}
