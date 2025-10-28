int __fastcall sub_1127C(int a1)
{
  FILE *v1; // r7
  const char *v2; // r4
  size_t v3; // r1
  FILE *v4; // r5
  _DWORD v6[8192]; // [sp+0h] [bp-8000h] BYREF

  memset(v6, 0, sizeof(v6));
  v1 = (FILE *)fopen64(a1, "rb");
  if ( v1 )
  {
    v2 = aTmpTmpnandDevi;
    do
    {
      fread(v6, *((_DWORD *)v2 - 1), 1u, v1);
      v4 = (FILE *)fopen64(v2, "wb");
      if ( !v4 )
      {
        printf("Try To Write To File '%s' Failed!\n", v2);
        fclose(v1);
        return 2;
      }
      v3 = *((_DWORD *)v2 - 1);
      v2 += 132;
      fwrite(v6, v3, 1u, v4);
      fclose(v4);
    }
    while ( v2 != (const char *)&abort );
    fclose(v1);
    return 0;
  }
  else
  {
    puts("Load Nand Image File Failed!");
    return 1;
  }
}
