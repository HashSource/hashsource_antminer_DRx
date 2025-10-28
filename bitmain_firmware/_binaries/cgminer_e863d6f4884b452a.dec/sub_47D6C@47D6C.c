void *__fastcall sub_47D6C(int a1, int a2, int a3)
{
  __int64 v3; // kr00_8
  void *v4; // r6
  int v6; // r5
  void *v9; // r0

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(void **)(a1 + 16);
  if ( HIDWORD(v3) + a2 <= (unsigned int)v3 )
    return v4;
  v6 = v3 + a2;
  if ( (int)v3 + a2 < (unsigned int)(2 * v3) )
    v6 = 2 * v3;
  v9 = sub_47850((void *)(4 * v6));
  if ( !v9 )
    return 0;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 16) = v9;
  if ( !a3 )
    return v4;
  memcpy(v9, v4, 4 * *(_DWORD *)(a1 + 12));
  sub_47860(v4);
  return *(void **)(a1 + 16);
}
