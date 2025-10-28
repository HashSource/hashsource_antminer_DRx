int __fastcall sub_40064(unsigned __int8 a1)
{
  int v1; // r4
  _DWORD *v2; // r6
  int v3; // r5
  int v4; // t1
  int v6; // [sp+Ch] [bp-4h]

  v1 = 805859;
  v2 = &unk_63178;
  v3 = 805836;
  HIWORD(v6) = a1;
  LOWORD(v6) = -26623;
  do
  {
    v4 = *(unsigned __int8 *)++v1;
    if ( v4 == 1 )
    {
      sub_3F864(*(_DWORD *)(v3 + 8), 0, 12, 28, v6);
      *v2 = 4;
      usleep(0xC8u);
      sub_3F864(*(_DWORD *)(v3 + 8), 0, 201, 28, v6);
      v2[2] = 4;
      usleep(0xC8u);
    }
    v3 += 4;
    v2 += 6;
  }
  while ( v1 != 805863 );
  return sub_2B21C();
}
