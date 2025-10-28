int open_i2c()
{
  int v1; // [sp+0h] [bp+0h] BYREF
  __int16 v2; // [sp+4h] [bp+4h]
  char v3; // [sp+6h] [bp+6h]
  char v4; // [sp+7h] [bp+7h]
  int v5; // [sp+8h] [bp+8h] BYREF
  __int16 v6; // [sp+Ch] [bp+Ch]
  char v7; // [sp+Eh] [bp+Eh]
  char v8; // [sp+Fh] [bp+Fh]
  int v9; // [sp+10h] [bp+10h] BYREF
  __int16 v10; // [sp+14h] [bp+14h]
  char v11; // [sp+16h] [bp+16h]
  char v12; // [sp+17h] [bp+17h]

  v9 = (unsigned __int8)gChain;
  v10 = 0;
  v11 = 4;
  v12 = gChain;
  printf("--- %s on 7007, slave high = 0x%x, low = 0x%x\n", "open_i2c", 4, (unsigned __int8)gChain);
  i2c_fd = iic_init((int)&v9);
  v5 = (unsigned __int8)gChain;
  v6 = 1;
  v7 = 2;
  v8 = 0;
  printf("--- %s on 7007, slave high = 0x%x, low = 0x%x\n", "open_i2c", 2, 0);
  power_fd = iic_init((int)&v5);
  v1 = (unsigned __int8)gChain;
  v2 = 0;
  v3 = 10;
  v4 = gChain;
  printf("--- %s on 7007, slave high = 0x%x, low = 0x%x\n", "open_i2c", 10, (unsigned __int8)gChain);
  e2prom_fd = iic_init((int)&v1);
  return i2c_fd;
}
