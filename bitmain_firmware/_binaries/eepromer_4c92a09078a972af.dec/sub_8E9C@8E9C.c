int __fastcall sub_8E9C(const char *a1, int a2)
{
  int v4; // r0
  int v5; // r4
  FILE *v7; // r5
  int *v8; // r0
  char *v9; // r0
  FILE *v10; // r5
  int *v11; // r0
  char *v12; // r0
  _BYTE v13[4]; // [sp+4h] [bp-4h] BYREF

  v4 = open(a1, 2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v5 = 0;
    fprintf((FILE *)stderr, "Error: Could not open file %s\n", a1);
  }
  else if ( ioctl(v4, 0x705u, v13) < 0 )
  {
    v7 = (FILE *)stderr;
    v8 = _errno_location();
    v9 = strerror(*v8);
    fprintf(v7, "Error: Could not get the adapter functionality matrix: %s\n", v9);
    close(v5);
    return 0;
  }
  else if ( ioctl(v5, 0x703u, a2) < 0 )
  {
    v10 = (FILE *)stderr;
    v11 = _errno_location();
    v12 = strerror(*v11);
    fprintf(v10, "Error: Cannot communicate with slave: %s\n", v12);
    close(v5);
    return 0;
  }
  return v5;
}
