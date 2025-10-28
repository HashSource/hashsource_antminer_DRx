int __fastcall sub_449CC(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // r3
  bool v6; // zf

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 24) = 1;
  result = sub_45E94(a1 + 40);
  v6 = result == 0;
  if ( result )
    result = -1;
  else
    v5 = -1;
  if ( v6 )
    *(_DWORD *)(a1 + 52) = v5;
  return result;
}
