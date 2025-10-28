int __fastcall sub_42834(const char *a1, int a2, int a3)
{
  FILE *v6; // r6
  FILE *v8; // r9
  int v9; // r4
  _BOOL4 v10; // r3
  size_t v11; // r0
  char v12[256]; // [sp+0h] [bp-204h] BYREF
  char filename[260]; // [sp+100h] [bp-104h] BYREF

  memset(filename, 0, 0x100u);
  memset(v12, 0, sizeof(v12));
  sprintf(filename, "%s.tmp", a1);
  v6 = fopen(a1, "r");
  if ( v6 )
  {
    v8 = fopen(filename, "a+");
    if ( v8 )
    {
      v9 = 1;
      while ( fgets(v12, 256, v6) )
      {
        v10 = v9 < a2;
        if ( v9 > a3 )
          v10 = 1;
        if ( v10 )
        {
          v11 = strlen(v12);
          fwrite(v12, 1u, v11, v8);
        }
        ++v9;
        memset(v12, 0, sizeof(v12));
      }
      fflush(v8);
      if ( fclose(v6) )
      {
        printf("close file %s failed!\n", a1);
        return -2;
      }
      else if ( fclose(v8) )
      {
        printf("close file %s failed!\n", filename);
        return -2;
      }
      else
      {
        remove(a1);
        rename(filename, a1);
        return 0;
      }
    }
    else
    {
      printf("create tmp file %s failed!\n", filename);
      return -1;
    }
  }
  else
  {
    printf("open %s failed!\n", a1);
    return -1;
  }
}
