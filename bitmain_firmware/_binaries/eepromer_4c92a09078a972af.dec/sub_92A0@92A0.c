int __fastcall sub_92A0(int a1, __int16 a2)
{
  int v2; // r7
  char *p_ptr; // r3
  int v5; // r8
  int v6; // r6
  signed int v7; // r11
  int v8; // r3
  char *v9; // r3
  int result; // r0
  char ptr; // [sp+17h] [bp-45h] BYREF
  _BYTE v13[63]; // [sp+18h] [bp-44h] BYREF
  char v14; // [sp+57h] [bp-5h] BYREF

  p_ptr = &ptr;
  do
    *++p_ptr = 0;
  while ( p_ptr != &v14 );
  v5 = 0;
  v6 = 64;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = fread(&ptr, 1u, 1u, (FILE *)stdin);
      if ( v7 <= 0 )
        break;
      if ( v5 == 63 )
        v2 = 0;
      v13[v5] = ptr;
      if ( v5 == 63 )
      {
        v8 = 64;
        goto LABEL_11;
      }
      ++v5;
    }
    v8 = v5;
    v2 = 1;
LABEL_11:
    if ( sub_8D08(a1, a2, v6, (int)v13, v8) )
    {
      fwrite("Block write failed\n", 1u, 0x13u, (FILE *)stderr);
      return 1;
    }
    v6 += v5;
    v9 = &ptr;
    if ( v7 == 1 )
      ++v6;
    do
      *++v9 = 0;
    while ( v9 != &v14 );
    if ( v2 )
      break;
    v5 = 0;
  }
  result = sub_91CC(a1, a2, v6 - 64);
  if ( result )
  {
    fwrite("Inode write failed\n", 1u, 0x13u, (FILE *)stderr);
    return 1;
  }
  return result;
}
