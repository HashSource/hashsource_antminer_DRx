int __fastcall sub_34764(const char *a1)
{
  FILE *v1; // r0
  FILE *v2; // r4
  int v3; // r0
  int v4; // r4
  FILE *v6; // r0
  FILE *v7; // r7
  FILE *v8; // r4
  int *v9; // r0
  char *v10; // r0
  FILE *v11; // r0
  FILE *v12; // r0
  FILE *v13; // r5
  FILE *v14; // r0
  FILE *v15; // r5
  char v16[1028]; // [sp+0h] [bp-404h] BYREF

  v1 = popen(a1, "r");
  if ( v1 )
  {
    v2 = v1;
    while ( fgets(v16, 1024, v2) )
    {
      if ( (unsigned int)dword_6D360 > 3 )
      {
        sub_34700(off_6D364, 3u);
        v6 = fopen(off_6D364, "a+");
        v7 = v6;
        if ( v6 )
          fprintf(v6, "%s: %s\n", "my_system", v16);
        fclose(v7);
      }
    }
    v3 = pclose(v2);
    v4 = v3;
    if ( v3 != -1 )
    {
      if ( v3 )
      {
        if ( (unsigned int)dword_6D360 > 3 )
        {
          sub_34700(off_6D364, 3u);
          v12 = fopen(off_6D364, "a+");
          v13 = v12;
          if ( v12 )
            fprintf(v12, "%s: pclose res is :%d\n\n", "my_system", (v4 & 0x7F) == 0);
          fclose(v13);
        }
        return BYTE1(v4);
      }
      return v4;
    }
    if ( (unsigned int)dword_6D360 > 3 )
    {
      sub_34700(off_6D364, 3u);
      v14 = fopen(off_6D364, "a+");
      v15 = v14;
      if ( v14 )
        fprintf(v14, "%s: close popen file pointer fp error!\n\n", "my_system");
      fclose(v15);
      return v4;
    }
  }
  else if ( (unsigned int)dword_6D360 > 3 )
  {
    sub_34700(off_6D364, 3u);
    v8 = fopen(off_6D364, "a+");
    if ( v8 )
    {
      v9 = _errno_location();
      v10 = strerror(*v9);
      fprintf(v8, "%s: popen error: %s/n\n", "my_system", v10);
    }
    v11 = v8;
    v4 = -1;
    fclose(v11);
    return v4;
  }
  return -1;
}
