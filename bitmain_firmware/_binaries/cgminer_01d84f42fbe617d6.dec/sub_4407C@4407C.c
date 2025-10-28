int __fastcall sub_4407C(_DWORD *a1, char *filename, __int16 a3)
{
  FILE *v5; // r4
  int v6; // r5

  v5 = fopen(filename, "w");
  if ( !v5 )
    return -1;
  v6 = sub_44068(a1, (int)v5, a3);
  fclose(v5);
  return v6;
}
