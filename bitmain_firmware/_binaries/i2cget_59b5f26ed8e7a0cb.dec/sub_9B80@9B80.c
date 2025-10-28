unsigned int __fastcall sub_9B80(const char *a1)
{
  unsigned int v2; // r0
  int v3; // r6
  char *v5; // r0
  char *v6; // r8
  const char *v7; // r0
  int *v8; // r4
  int *v9; // r5
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v2 = strtoul(a1, &endptr, 0);
  if ( *endptr || !*a1 )
  {
    v5 = sub_962C();
    v6 = v5;
    if ( v5 )
    {
      v7 = (const char *)*((_DWORD *)v5 + 1);
      if ( v7 )
      {
        v8 = (int *)(v6 + 16);
        v9 = (int *)v6;
        v3 = -1;
        do
        {
          if ( !strcmp(v7, a1) )
          {
            if ( v3 >= 0 )
            {
              v3 = -4;
              fwrite("Error: I2C bus name is not unique!\n", 1u, 0x23u, (FILE *)stderr);
              goto LABEL_16;
            }
            v3 = *v9;
          }
          v9 = v8;
          v8 += 4;
          v7 = (const char *)*(v8 - 3);
        }
        while ( v7 );
        if ( v3 == -1 )
          goto LABEL_18;
      }
      else
      {
LABEL_18:
        v3 = -1;
        fwrite("Error: I2C bus name doesn't match any bus present!\n", 1u, 0x33u, (FILE *)stderr);
      }
LABEL_16:
      sub_93EC(v6);
    }
    else
    {
      v3 = -3;
      fwrite("Error: Out of memory!\n", 1u, 0x16u, (FILE *)stderr);
    }
  }
  else if ( v2 >= 0x100000 )
  {
    v3 = -2;
    fwrite("Error: I2C bus out of range!\n", 1u, 0x1Du, (FILE *)stderr);
  }
  else
  {
    return v2;
  }
  return v3;
}
