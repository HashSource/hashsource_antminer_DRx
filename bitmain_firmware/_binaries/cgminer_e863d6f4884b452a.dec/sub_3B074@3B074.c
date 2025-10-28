int __fastcall sub_3B074(int a1)
{
  int v1; // r3
  int v2; // r4
  int v3; // r5
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = (unsigned __int8)byte_6FA71;
  *(_DWORD *)(dword_6FAEC + 48) = a1 & 0x3FFFFFFF;
  if ( v1 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v5, 0x800u, "set IIC_COMMAND is 0x%x\n", a1 & 0x7FFFFFFF);
    sub_343C4(7, v5, 0);
  }
  v2 = 102;
  while ( 1 )
  {
    v3 = sub_3B008();
    if ( v3 < 0 )
      break;
    if ( !--v2 )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
        return 0;
      snprintf(v5, 0x800u, "could not get iic, ret = 0x%08x\n", v3);
      sub_343C4(3, v5, 0);
      return 0;
    }
    usleep(0x1388u);
  }
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v5, 0x800u, "set_iic get_iic, ret = 0x%08x\n", v3);
    sub_343C4(7, v5, 0);
  }
  return (unsigned __int8)v3;
}
