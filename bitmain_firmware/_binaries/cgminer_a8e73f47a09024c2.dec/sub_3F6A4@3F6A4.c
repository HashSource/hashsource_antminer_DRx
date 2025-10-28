int __fastcall sub_3F6A4(const char *a1)
{
  int v1; // r4
  FILE *v2; // r0
  FILE *v3; // r4
  FILE *v4; // r5
  int *v5; // r0
  char *v6; // r0
  FILE *v7; // r0
  FILE *v8; // r6
  int v9; // r0
  FILE *v10; // r0
  FILE *v11; // r5
  FILE *v12; // r0
  FILE *v13; // r5
  char v15[1024]; // [sp+0h] [bp-400h] BYREF

  if ( !a1 )
  {
    if ( (unsigned int)dword_7A530 <= 3 )
      return -1;
    sub_3F61C(off_7A534, 3u);
    v2 = fopen(off_7A534, "a+");
    v3 = v2;
    if ( v2 )
      fprintf(v2, "%s: cmd is NULL!\n\n", "my_system");
LABEL_6:
    fclose(v3);
    return -1;
  }
  v4 = popen(a1, "r");
  if ( !v4 )
  {
    if ( (unsigned int)dword_7A530 <= 3 )
      return -1;
    sub_3F61C(off_7A534, 3u);
    v3 = fopen(off_7A534, "a+");
    if ( v3 )
    {
      v5 = _errno_location();
      v6 = strerror(*v5);
      fprintf(v3, "%s: popen error: %s/n\n", "my_system", v6);
    }
    goto LABEL_6;
  }
  while ( fgets(v15, 1024, v4) )
  {
    if ( (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v7 = fopen(off_7A534, "a+");
      v8 = v7;
      if ( v7 )
        fprintf(v7, "%s: %s\n", "my_system", v15);
      fclose(v8);
    }
  }
  v9 = pclose(v4);
  v1 = v9;
  if ( v9 == -1 )
  {
    if ( (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v10 = fopen(off_7A534, "a+");
      v11 = v10;
      if ( v10 )
        fprintf(v10, "%s: close popen file pointer fp error!\n\n", "my_system");
      fclose(v11);
    }
  }
  else if ( v9 )
  {
    if ( (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v12 = fopen(off_7A534, "a+");
      v13 = v12;
      if ( v12 )
        fprintf(v12, "%s: pclose res is :%d\n\n", "my_system", (v1 & 0x7F) == 0);
      fclose(v13);
    }
    return BYTE1(v1);
  }
  return v1;
}
