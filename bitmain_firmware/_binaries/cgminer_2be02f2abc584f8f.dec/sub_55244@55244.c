int __fastcall sub_55244(int a1)
{
  int v2; // r0
  int v3; // r3
  int result; // r0

  if ( *(_DWORD *)(a1 + 1028) >= *(_DWORD *)(a1 + 1024) )
  {
    *(_DWORD *)(a1 + 1028) = 0;
    v2 = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 1032))(a1, 1024, *(_DWORD *)(a1 + 1036));
    *(_DWORD *)(a1 + 1024) = v2;
    if ( (unsigned int)(v2 - 1) > 0xFFFFFFFD )
      return -1;
  }
  v3 = *(_DWORD *)(a1 + 1028);
  result = *(unsigned __int8 *)(a1 + v3);
  *(_DWORD *)(a1 + 1028) = v3 + 1;
  return result;
}
