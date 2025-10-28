int __fastcall sub_4450C(int a1, char *a2)
{
  int v3; // r3
  char *v5; // r12
  int v6; // r4
  int v7; // lr
  int v8; // t1
  int v9; // r1
  int result; // r0

  v3 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v5 = a2;
    v6 = 5381;
    do
    {
      v7 = v3 + 32 * v6;
      v8 = (unsigned __int8)*++v5;
      v3 = v8;
      v6 += v7;
    }
    while ( v8 );
  }
  else
  {
    v6 = 5381;
  }
  sub_48F68(v6, dword_56E0C[*(_DWORD *)(a1 + 8)]);
  result = sub_44194(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * v9), a2, v6);
  if ( result )
    return *(_DWORD *)(result + 12);
  return result;
}
