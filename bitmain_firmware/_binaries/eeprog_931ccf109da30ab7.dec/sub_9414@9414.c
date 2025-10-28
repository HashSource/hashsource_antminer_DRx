int __fastcall sub_9414(int a1, __int16 a2, __int16 a3)
{
  int v3; // r3
  int v4; // r0
  int v5; // r4
  FILE *v7; // r5
  int *v8; // r0
  char *v9; // r0
  char v10; // [sp+0h] [bp-34h] BYREF
  char v11; // [sp+1h] [bp-33h]
  int v12; // [sp+4h] [bp-30h]
  _WORD *v13; // [sp+8h] [bp-2Ch]
  _WORD v14[20]; // [sp+Ch] [bp-28h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 == 1 )
  {
    v10 = a2;
    v11 = a3;
    return sub_905C(a1, &v10);
  }
  else if ( v3 == 2 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v14[0] = (unsigned __int8)a2 | (unsigned __int16)(a3 << 8);
    v11 = HIBYTE(a2);
    v12 = 3;
    v10 = 0;
    v13 = v14;
    v5 = ioctl(v4, 0x720u, &v10, v14);
    if ( v5 < 0 )
    {
      v7 = (FILE *)stderr;
      v8 = _errno_location();
      v9 = strerror(*v8);
      fprintf(v7, "Error i2c_write_3b: %s\n", v9);
    }
    usleep(0xAu);
  }
  else
  {
    v5 = -1;
    fwrite("ERR: unknown eeprom type\n", 1u, 0x19u, (FILE *)stderr);
  }
  return v5;
}
