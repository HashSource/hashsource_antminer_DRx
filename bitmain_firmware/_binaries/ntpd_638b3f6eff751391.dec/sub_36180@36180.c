ssize_t __fastcall sub_36180(int a1, size_t a2)
{
  int v3; // r4
  int v4; // r0
  int v5; // r1

  v3 = *(_DWORD *)(a2 + 60);
  if ( *(_DWORD *)(v3 + 200) == *(_DWORD *)(v3 + 204) )
    return sub_27040(a2, 1);
  v4 = *(_DWORD *)(v3 + 216);
  v5 = *(_DWORD *)(v3 + 220);
  ++*(_DWORD *)(v3 + 760);
  *(_DWORD *)(v3 + 208) = v4;
  *(_DWORD *)(v3 + 212) = v5;
  sub_276A0(a2);
  sub_2DDBC(a2 + 12, (const char *)(v3 + 40));
  return sub_35F24(*(_DWORD *)(v3 + 20), a2);
}
