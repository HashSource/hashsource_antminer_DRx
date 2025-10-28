int __fastcall sub_9CC8(int a1, int a2, int a3)
{
  bool v3; // zf
  unsigned int v6; // r1
  FILE *v8; // r6
  int *v9; // r5
  char *v10; // r0

  v3 = a3 == 0;
  v6 = 1795;
  if ( !v3 )
    v6 = 1798;
  if ( ioctl(a1, v6, a2) >= 0 )
    return 0;
  v8 = (FILE *)stderr;
  v9 = _errno_location();
  v10 = strerror(*v9);
  fprintf(v8, "Error: Could not set address to 0x%02x: %s\n", a2, v10);
  return -*v9;
}
