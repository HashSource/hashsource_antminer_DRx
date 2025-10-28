int sub_48F54()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  v0 = *(_DWORD *)(dword_7CD48 + 48);
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v2, 0x800u, "IIC_COMMAND is 0x%x\n", *(_DWORD *)(dword_7CD48 + 48));
    sub_3F178(7, v2, 0);
  }
  return v0;
}
