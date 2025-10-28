int __fastcall sub_46610(const char *a1, int a2)
{
  int v3; // r3
  unsigned int v4; // r2
  int v5; // r7
  const char *v6; // r6
  int result; // r0

  if ( (unsigned int)(a2 - 4) > 4 )
    return 0;
  v3 = *(unsigned __int8 *)a1;
  v4 = *((unsigned __int8 *)&dword_69A0C[755] + v3) + a2;
  if ( v4 > 0xC )
    return 0;
  v5 = 2 * v4;
  v6 = (const char *)dword_69A0C[2 * v4 + 819];
  if ( *(unsigned __int8 *)v6 != v3 )
    return 0;
  result = strncmp(a1 + 1, v6 + 1, a2 - 1);
  if ( result )
    return 0;
  if ( !v6[a2] )
    return dword_69A0C[v5 + 820];
  return result;
}
