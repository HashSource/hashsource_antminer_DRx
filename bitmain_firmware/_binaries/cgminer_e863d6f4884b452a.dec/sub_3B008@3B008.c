int sub_3B008()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = *(_DWORD *)(dword_6FAEC + 48);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v2, 0x800u, "IIC_COMMAND is 0x%x\n", *(_DWORD *)(dword_6FAEC + 48));
    sub_343C4(7, v2, 0);
  }
  return v0;
}
