int __fastcall sub_59898(int a1, char *a2)
{
  int v4; // r6
  int v5; // r1
  int v6; // r0

  v4 = sub_594A0(a2);
  sub_5E8C0(v4, dword_706C4[*(_DWORD *)(a1 + 8)]);
  v6 = sub_59534(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * v5), a2, v4);
  if ( v6 )
    return *(_DWORD *)(v6 + 12);
  else
    return 0;
}
