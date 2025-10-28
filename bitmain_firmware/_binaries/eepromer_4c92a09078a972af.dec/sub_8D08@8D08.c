int __fastcall sub_8D08(int fd, __int16 a2, __int16 a3, int a4, int a5)
{
  FILE *v10; // r4
  int *v11; // r0
  char *v12; // r0
  _BYTE v13[4]; // [sp+4h] [bp-24h] BYREF
  _DWORD v14[2]; // [sp+8h] [bp-20h] BYREF
  _WORD v15[4]; // [sp+10h] [bp-18h] BYREF
  _BYTE *v16; // [sp+18h] [bp-10h]
  __int16 v17; // [sp+1Ch] [bp-Ch]
  __int16 v18; // [sp+1Eh] [bp-Ah]
  __int16 v19; // [sp+20h] [bp-8h]
  int v20; // [sp+24h] [bp-4h]

  if ( a5 > 64 )
    fwrite("Error: Block too large:\n", 1u, 0x18u, (FILE *)stderr);
  v13[1] = a3;
  v15[0] = a2;
  v17 = a2;
  v13[0] = HIBYTE(a3) & 0x7F;
  v19 = a5;
  v20 = a4;
  v15[1] = 0;
  v15[2] = 2;
  v14[1] = 2;
  v16 = v13;
  v18 = 0x4000;
  v14[0] = v15;
  if ( ioctl(fd, 0x707u, v14) >= 0 )
    return 0;
  v10 = (FILE *)stderr;
  v11 = _errno_location();
  v12 = strerror(*v11);
  fprintf(v10, "Error: Transaction failed: %s\n", v12);
  return 1;
}
