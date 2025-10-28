int __fastcall sub_46898(int a1, char *a2)
{
  char *v2; // r6
  int v3; // r3
  int v5; // r4
  int v6; // r0
  int v7; // t1
  int v8; // r1
  int result; // r0

  v2 = a2;
  v3 = (unsigned __int8)*a2;
  v5 = 5381;
  if ( *a2 )
  {
    v5 = 5381;
    do
    {
      v6 = v3 + 32 * v5;
      v7 = (unsigned __int8)*++a2;
      v3 = v7;
      v5 += v6;
    }
    while ( v7 );
  }
  sub_49AD4(v5, dword_5A8CC[*(_DWORD *)(a1 + 8)]);
  result = sub_464E8(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * v8), v2, v5);
  if ( result )
    result += 4;
  return result;
}
