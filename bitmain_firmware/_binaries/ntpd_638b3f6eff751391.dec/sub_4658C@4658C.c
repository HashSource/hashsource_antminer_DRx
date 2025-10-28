int __fastcall sub_4658C(const char *a1, int a2)
{
  unsigned int v3; // r3
  int v4; // r7
  const char *v5; // r6
  int result; // r0

  if ( (unsigned int)(a2 - 3) > 0xB )
    return 0;
  v3 = *((unsigned __int8 *)&dword_69A0C[645] + *((unsigned __int8 *)a1 + 2)) + a2;
  if ( v3 > 0x16 )
    return 0;
  v4 = 2 * v3;
  v5 = (const char *)dword_69A0C[2 * v3 + 709];
  if ( *(unsigned __int8 *)a1 != *(unsigned __int8 *)v5 )
    return 0;
  result = strncmp(a1 + 1, v5 + 1, a2 - 1);
  if ( result )
    return 0;
  if ( !v5[a2] )
    return dword_69A0C[v4 + 710];
  return result;
}
