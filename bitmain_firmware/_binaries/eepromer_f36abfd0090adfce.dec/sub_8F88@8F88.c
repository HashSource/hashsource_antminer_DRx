size_t __fastcall sub_8F88(size_t fd, __int16 a2, int a3)
{
  char *v3; // r3
  int v4; // r5
  int v6; // r4
  unsigned int v7; // r8
  __int16 v8; // r2
  char v9; // [sp+7h] [bp-41h] BYREF
  _BYTE v10[63]; // [sp+8h] [bp-40h] BYREF
  char v11; // [sp+47h] [bp-1h] BYREF

  v3 = &v9;
  v4 = fd;
  do
    *++v3 = 0;
  while ( v3 != &v11 );
  if ( a3 > 0 )
  {
    v6 = 0;
    v7 = ((a3 - 1) & 0xFFFFFFC0) + 64;
    while ( 1 )
    {
      v8 = v6;
      v6 += 64;
      fd = sub_8D08(v4, a2, v8, (int)v10, 64);
      if ( fd )
        break;
      if ( v6 == v7 )
        return fd;
    }
    return fwrite("Block write failed\n", 1u, 0x13u, (FILE *)stderr);
  }
  return fd;
}
