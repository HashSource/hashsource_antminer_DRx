int __fastcall sub_92F0(int a1, __int16 a2)
{
  int v4; // r3
  int v5; // r5
  int v6; // r0
  int v8; // r0
  FILE *v9; // r6
  int *v10; // r0
  char *v11; // r0
  char v12; // [sp+0h] [bp-30h] BYREF
  char v13; // [sp+1h] [bp-2Fh]
  int v14; // [sp+4h] [bp-2Ch]
  char *v15; // [sp+8h] [bp-28h]
  char v16[36]; // [sp+Ch] [bp-24h] BYREF

  ioctl(*(_DWORD *)(a1 + 8), 0x1261u);
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    v13 = a2;
    v14 = 1;
    v12 = 0;
    v15 = 0;
    v5 = ioctl(v8, 0x720u, &v12, 0);
    if ( v5 < 0 )
    {
      v9 = (FILE *)stderr;
      v10 = _errno_location();
      v11 = strerror(*v10);
      fprintf(v9, "Error i2c_write_1b: %s\n", v11);
    }
    usleep(0xAu);
  }
  else
  {
    if ( v4 != 2 )
    {
      v5 = -1;
      fwrite("ERR: unknown eeprom type\n", 1u, 0x19u, (FILE *)stderr);
      return v5;
    }
    v16[0] = HIBYTE(a2);
    v16[1] = a2;
    v5 = sub_905C(a1, v16);
  }
  if ( v5 >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 8);
    v12 = 1;
    v14 = 1;
    v13 = 0;
    v15 = v16;
    if ( ioctl(v6, 0x720u, &v12, v16) )
      return -1;
    else
      return (unsigned __int8)v16[0];
  }
  return v5;
}
