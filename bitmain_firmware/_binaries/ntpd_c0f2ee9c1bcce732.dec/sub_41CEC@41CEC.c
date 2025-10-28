int __fastcall sub_41CEC(int result, _DWORD *a2)
{
  int (*v2)(void); // r2
  int v4; // r5
  unsigned int v5; // r3
  int v6; // r2
  int v7; // r2

  v2 = (int (*)(void))a2[10];
  v4 = result;
  v5 = a2[4] & 0xFFFFFF80 | 8;
  a2[4] = v5;
  if ( v2 )
  {
    result = v2();
    v5 = a2[4];
  }
  v6 = *(unsigned __int16 *)a2;
  a2[6] = *(_DWORD *)(*(_DWORD *)(v4 + 116) + 4 * v6);
  v7 = *(_DWORD *)(*(_DWORD *)(v4 + 120) + 4 * v6);
  a2[4] = v5 & 0xFFFFFF80;
  a2[7] = v7;
  return result;
}
