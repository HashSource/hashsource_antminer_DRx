int __fastcall sub_905C(int a1, char *a2)
{
  int v2; // r0
  char v3; // r12
  char v4; // r3
  int v5; // r4
  FILE *v7; // r5
  int *v8; // r0
  char *v9; // r0
  _BYTE v10[4]; // [sp+0h] [bp-34h] BYREF
  int v11; // [sp+4h] [bp-30h]
  _BYTE *v12; // [sp+8h] [bp-2Ch]
  _BYTE v13[40]; // [sp+Ch] [bp-28h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *a2;
  v4 = a2[1];
  v10[0] = 0;
  v10[1] = v3;
  v13[0] = v4;
  v11 = 2;
  v12 = v13;
  v5 = ioctl(v2, 0x720u, v10, v13);
  if ( v5 < 0 )
  {
    v7 = (FILE *)stderr;
    v8 = _errno_location();
    v9 = strerror(*v8);
    fprintf(v7, "Error i2c_write_2b: %s\n", v9);
  }
  usleep(0xAu);
  return v5;
}
