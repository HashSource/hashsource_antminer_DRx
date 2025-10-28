int __fastcall sub_914C(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v9; // r7
  _DWORD v11[2]; // [sp+Ch] [bp-18h] BYREF
  _WORD v12[4]; // [sp+14h] [bp-10h] BYREF
  int v13; // [sp+1Ch] [bp-8h]

  if ( a5 > 8u )
  {
    fwrite("I can only write MAX_BYTES bytes at a time!\n", 1u, 0x2Cu, (FILE *)stderr);
    return -1;
  }
  else if ( sub_8FF0(a1, a2, a3, 0, 0) < 0 )
  {
    return -1;
  }
  else
  {
    v13 = a4;
    v12[0] = a2;
    v12[2] = a5;
    v11[0] = v12;
    v11[1] = 1;
    v12[1] = 1;
    v9 = ioctl(a1, 0x707u, v11);
    if ( v9 < 0 )
    {
      perror("ioctl()");
      fprintf((FILE *)stderr, "ioctl returned %d\n", v9);
      return -1;
    }
    else
    {
      fprintf((FILE *)stderr, "Read %d bytes from eeprom at 0x%02x, offset %08x\n", a5, a2, a3);
      return 0;
    }
  }
}
