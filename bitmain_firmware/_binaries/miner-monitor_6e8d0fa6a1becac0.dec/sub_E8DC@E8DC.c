int sub_E8DC()
{
  int v0; // r10
  bool v1; // zf
  int result; // r0
  int v3; // r11
  int v4; // r0
  int v5; // r10
  int v6; // r0
  int v7; // r11
  int v8; // r0
  _BYTE v9[4095]; // [sp+0h] [bp-106Ch] BYREF
  _BYTE v10[108]; // [sp+1000h] [bp-6Ch] BYREF

  memset(&v10[4], 0, 0x64u);
  printf("r_connect = %d.\n", dword_1B380);
  dword_26F94 = off_1D434(dword_26F98, dword_258BC, byte_1E454, 2);
  if ( dword_26F94 == -1 )
  {
    puts("recv data failed1.");
    dword_1B380 = 0;
    memcpy(v9, &unk_1C3E4, sizeof(v9));
    sub_E7F4();
    sub_E4CC((int)&dword_1B3A8);
    sub_E4CC((int)&dword_1D410);
    return 0;
  }
  printf("recv package.pkg_head:%s.\n", byte_1E454);
  v0 = dword_26F94;
  v1 = dword_26F94 == 0;
  byte_1E454[dword_26F94] = 0;
  if ( v1 )
  {
    puts("the first two byte not 00   it is 0");
    return v0;
  }
  if ( byte_1E454[0] != 48 )
    return -1;
  if ( byte_1E455 != 48 )
    return -1;
  v3 = (unsigned __int8)byte_1E456;
  if ( byte_1E456 )
    return -1;
  v4 = off_1D434(dword_26F98, dword_258BC, &byte_1E457, 2);
  v5 = v4;
  dword_26F94 = v4;
  if ( v4 == -1 )
    goto LABEL_19;
  if ( !v4 )
    return 0;
  if ( v4 != 2 )
    return -1;
  byte_1E459 = v3;
  printf("rev from server cmd = \n%s\n", &byte_1E457);
  v6 = off_1D434(dword_26F98, dword_258BC, v10, v5);
  dword_26F94 = v6;
  switch ( v6 )
  {
    case -1:
LABEL_19:
      dword_1B380 = v3;
      return v3;
    case 0:
      return 0;
    case 2:
      v7 = v10[1] + (v10[0] << 8);
      printf("rev from server sum=\n%d\n", v7);
      if ( !v7 )
      {
        byte_1F45C = 0;
        return 1;
      }
      v8 = off_1D434(dword_26F98, dword_258BC, &byte_1F45C, v7);
      dword_26F94 = v8;
      if ( v8 == -1 )
      {
        dword_1B380 = 0;
        return 0;
      }
      byte_1E454[v7 + 4104] = 0;
      printf("recvbytes:%d,sum:%d,pkgnonce=%s\n", v8, v7, &byte_1F45C);
      result = dword_26F94;
      if ( !dword_26F94 )
      {
        dword_1B380 = 0;
        return result;
      }
      if ( v7 == dword_26F94 )
        return 1;
      puts("PAKGE ERROR!!!!!");
      break;
  }
  return -1;
}
