int __fastcall sub_51728(int a1)
{
  FILE *v1; // r2

  v1 = *(FILE **)(a1 + 36);
  if ( v1 && fgets((char *)(a1 + 40), 63, v1) )
  {
    *(_DWORD *)(a1 + 104) = 0;
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 104) = 29;
    return 29;
  }
}
