int __fastcall sub_48FF0(int a1)
{
  int v1; // r4
  int v2; // r5
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  *(_DWORD *)(dword_7CD48 + 48) = a1 & 0x3FFFFFFF;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v4, 0x800u, "set IIC_COMMAND is 0x%x\n", a1 & 0x7FFFFFFF);
    sub_3F178(7, v4, 0);
  }
  v1 = 102;
  while ( 1 )
  {
    v2 = sub_48F54();
    if ( v2 < 0 )
      break;
    if ( !--v1 )
    {
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
        return 0;
      snprintf(v4, 0x800u, "could not get iic, ret = 0x%08x\n", v2);
      sub_3F178(3, v4, 0);
      return 0;
    }
    usleep(0x1388u);
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(v4, 0x800u, "set_iic get_iic, ret = 0x%08x\n", v2);
    sub_3F178(7, v4, 0);
  }
  return (unsigned __int8)v2;
}
