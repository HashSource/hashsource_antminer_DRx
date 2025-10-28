void __fastcall sub_392B8(int a1, size_t a2)
{
  int v2; // r4
  int v4; // r1
  char buf[5]; // [sp+7h] [bp-5h] BYREF

  v2 = *(_DWORD *)(a2 + 60);
  buf[0] = 84;
  if ( (*(_BYTE *)(v2 + 752) & 1) == 0 || write(*(_DWORD *)(v2 + 20), buf, 1u) == 1 )
  {
    ++*(_DWORD *)(v2 + 760);
    if ( *(int *)(a2 + 116) > 0 )
      return;
  }
  else
  {
    sub_27040(a2, 3);
    if ( *(int *)(a2 + 116) > 0 )
      return;
  }
  if ( *(_DWORD *)(v2 + 200) == *(_DWORD *)(v2 + 204) )
  {
    sub_27040(a2, 1);
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 220);
    *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
    *(_DWORD *)(v2 + 212) = v4;
    sub_276A0(a2);
    sub_2DDBC(a2 + 12, (const char *)(v2 + 40));
    *(_DWORD *)(a2 + 116) = 5;
  }
}
