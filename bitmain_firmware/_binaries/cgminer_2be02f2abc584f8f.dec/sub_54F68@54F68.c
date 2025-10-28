int __fastcall sub_54F68(int a1, char *a2)
{
  int v4; // r6
  int v5; // r1
  int v6; // r0

  v4 = sub_54B70(a2);
  sub_59F90(v4, dword_696BC[*(_DWORD *)(a1 + 8)]);
  v6 = sub_54C04(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * v5), a2, v4);
  if ( v6 )
    return *(_DWORD *)(v6 + 12);
  else
    return 0;
}
