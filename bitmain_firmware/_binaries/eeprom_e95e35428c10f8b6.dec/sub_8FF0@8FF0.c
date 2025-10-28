int __fastcall sub_8FF0(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v7; // lr
  _BYTE *v8; // r12
  char v9; // t1
  int v10; // r5
  _DWORD v12[2]; // [sp+8h] [bp-24h] BYREF
  _BYTE v13[12]; // [sp+10h] [bp-1Ch] BYREF
  _WORD v14[4]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE *v15; // [sp+24h] [bp-8h]

  if ( a5 > 8u )
  {
    fwrite("I can only write MAX_BYTES bytes at a time!\n", 1u, 0x2Cu, (FILE *)stderr);
    return -1;
  }
  else if ( (unsigned int)a5 + a3 > 0x100 )
  {
    fprintf((FILE *)stderr, "Sorry, len(%d)+offset(%d) > 256 (page boundary)\n", a5, a3);
    return -1;
  }
  else
  {
    v13[0] = a3;
    if ( a5 )
    {
      v7 = a4 - 1;
      v8 = v13;
      do
      {
        v9 = *(_BYTE *)++v7;
        *++v8 = v9;
      }
      while ( v8 != &v13[a5] );
    }
    v14[0] = a2;
    v12[1] = 1;
    v15 = v13;
    v12[0] = v14;
    v14[1] = 0;
    v14[2] = a5 + 1;
    v10 = ioctl(a1, 0x707u, v12);
    if ( v10 < 0 )
    {
      perror("ioctl()");
      fprintf((FILE *)stderr, "ioctl returned %d\n", v10);
      return -1;
    }
    else
    {
      if ( a5 )
        fprintf((FILE *)stderr, "Wrote %d bytes to eeprom at 0x%02x, offset %08x\n", a5, a2, a3);
      else
        fprintf((FILE *)stderr, "Positioned pointer in eeprom at 0x%02x to offset %08x\n", a2, a3);
      return 0;
    }
  }
}
