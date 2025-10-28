int __fastcall sub_464A8(_DWORD *a1, char *filename, __int16 a3)
{
  FILE *v5; // r0
  FILE *v6; // r4
  int v7; // r5

  v5 = fopen(filename, "w");
  if ( !v5 )
    return -1;
  v6 = v5;
  v7 = sub_4642C(a1, (int (__fastcall *)(__int16 *, int, int))sub_45D98, (int)v5, a3);
  fclose(v6);
  return v7;
}
