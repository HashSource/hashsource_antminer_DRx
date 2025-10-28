int __fastcall sub_4E858(_DWORD *a1, _DWORD *a2)
{
  int v3; // r1

  v3 = a1[1];
  *a2 = *a1 - 2085978496;
  if ( v3 > 999999 )
    return 0;
  a2[1] = dword_7C19C[BYTE1(v3)] + dword_7C15C[HIWORD(v3) & 0xF] + dword_7C59C[(unsigned __int8)v3];
  return 1;
}
