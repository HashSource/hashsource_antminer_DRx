int __fastcall sub_36BF0(const char *a1, int a2)
{
  FILE *v4; // r0
  FILE *v5; // r5
  int v6; // r4
  FILE *v7; // r7
  size_t v9; // r0
  int v11; // r4
  char v12[256]; // [sp+0h] [bp-200h] BYREF
  char s[256]; // [sp+100h] [bp-100h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(s, 0, sizeof(s));
  sprintf(v12, "%s.tmp", a1);
  v4 = fopen(a1, "r");
  if ( v4 )
  {
    v5 = v4;
    v6 = 1;
    v7 = fopen(v12, "a+");
    if ( v7 )
    {
      while ( fgets(s, 256, v5) )
      {
        if ( v6++ > a2 )
        {
          v9 = strlen(s);
          fwrite(s, 1u, v9, v7);
        }
        memset(s, 0, sizeof(s));
      }
      fflush(v7);
      if ( fclose(v5) )
      {
        v11 = -2;
        printf("close file %s failed!\n", a1);
      }
      else
      {
        v11 = fclose(v7);
        if ( v11 )
        {
          v11 = -2;
          printf("close file %s failed!\n", v12);
        }
        else
        {
          remove(a1);
          rename(v12, a1);
        }
      }
    }
    else
    {
      v11 = -1;
      printf("create tmp file %s failed!\n", v12);
    }
  }
  else
  {
    v11 = -1;
    printf("open %s failed!\n", a1);
  }
  return v11;
}
