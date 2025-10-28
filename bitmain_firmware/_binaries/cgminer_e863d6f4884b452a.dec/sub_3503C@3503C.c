int __fastcall sub_3503C(int result, unsigned __int8 *a2, int a3)
{
  unsigned int v5; // r3
  int v6; // r4
  char v7; // r2
  int v8; // t1
  char *v9; // r3
  int v10; // r11
  FILE *v11; // r0
  FILE *v12; // r3
  const char *v13; // r4
  FILE *v14; // r0
  FILE *v15; // r8
  FILE *v16; // r0
  FILE *v17; // r3
  FILE *v18; // r0
  FILE *v19; // r3
  FILE *v20; // r0
  FILE *v21; // r6
  FILE *v22; // r0
  FILE *v23; // r4
  FILE *v24; // [sp+4h] [bp-20h]
  FILE *v25; // [sp+4h] [bp-20h]
  FILE *v26; // [sp+4h] [bp-20h]
  char v27[24]; // [sp+Ch] [bp-18h] BYREF

  v5 = dword_6D360;
  if ( result )
  {
    if ( (unsigned int)dword_6D360 <= 3 )
    {
      if ( a3 <= 0 )
        return result;
      goto LABEL_4;
    }
    v13 = (const char *)result;
    v14 = fopen(off_6D364, "a+");
    v15 = v14;
    if ( v14 )
      fprintf(v14, "%s:\n", v13);
    result = fclose(v15);
    v5 = dword_6D360;
  }
  if ( a3 <= 0 )
    goto LABEL_19;
LABEL_4:
  v6 = 0;
  do
  {
    v10 = v6 & 0xF;
    if ( (v6 & 0xF) != 0 )
      goto LABEL_11;
    if ( v6 )
    {
      if ( v5 <= 3 )
        goto LABEL_7;
      v16 = fopen(off_6D364, "a+");
      v17 = v16;
      if ( v16 )
      {
        v25 = v16;
        fprintf(v16, "  %s\n", v27);
        v17 = v25;
      }
      result = fclose(v17);
      v5 = dword_6D360;
    }
    if ( v5 > 3 )
    {
      v18 = fopen(off_6D364, "a+");
      v19 = v18;
      if ( v18 )
      {
        v26 = v18;
        fprintf(v18, "  %04x ", v6);
        v19 = v26;
      }
      result = fclose(v19);
      v5 = dword_6D360;
LABEL_11:
      if ( v5 > 3 )
      {
        v11 = fopen(off_6D364, "a+");
        v12 = v11;
        if ( v11 )
        {
          v24 = v11;
          fprintf(v11, " %02x", *a2);
          v12 = v24;
        }
        result = fclose(v12);
      }
    }
LABEL_7:
    v8 = *a2++;
    v7 = v8;
    ++v6;
    v9 = &v27[v10 + 20];
    if ( (unsigned int)(v8 - 32) > 0x5E )
      v7 = 46;
    *(v9 - 20) = v7;
    *(v9 - 19) = 0;
    v5 = dword_6D360;
  }
  while ( a3 != v6 );
  while ( v6 << 28 )
  {
    ++v6;
    if ( v5 > 3 )
    {
      v20 = fopen(off_6D364, "a+");
      v21 = v20;
      if ( v20 )
        fwrite("   ", 1u, 3u, v20);
      result = fclose(v21);
      v5 = dword_6D360;
    }
  }
LABEL_19:
  if ( v5 > 3 )
  {
    v22 = fopen(off_6D364, "a+");
    v23 = v22;
    if ( v22 )
      fprintf(v22, "  %s\n", v27);
    return fclose(v23);
  }
  return result;
}
