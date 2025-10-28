int __fastcall check_core_reg_with_expect_data_eth(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  int v6; // r7
  char *v7; // r4
  unsigned int v8; // r6
  _DWORD *v9; // r3
  int v10; // r1
  int v12; // [sp+3Ch] [bp-14h]
  char *ptr; // [sp+40h] [bp-10h]
  int v14; // [sp+44h] [bp-Ch]
  int v15; // [sp+48h] [bp-8h]
  _DWORD v17[7]; // [sp+50h] [bp+0h] BYREF
  int v18; // [sp+6Ch] [bp+1Ch]
  char var1004[4112]; // [sp+70h] [bp+20h] BYREF

  v15 = a3;
  ptr = (char *)malloc(0x600u);
  v14 = 5;
  while ( 1 )
  {
    v12 = sub_7F8BC(a1, v15, a4, ptr);
    if ( !v12 )
    {
LABEL_10:
      free(ptr);
      return 22;
    }
    v6 = 0;
    v7 = ptr;
    v8 = bswap32(a5);
    do
    {
      if ( (v8 & ~*(_DWORD *)v7) != 0 )
      {
        V_LOCK();
        V_INT((int)v17, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "[REG READ ERR] chip %02x core %02x reg %04x rdata %08x",
          (unsigned __int8)v7[4],
          (unsigned __int8)v7[8],
          (unsigned __int16)__rev16(*((unsigned __int16 *)v7 + 3)),
          bswap32(*(_DWORD *)v7));
        V_UNLOCK();
        LOWORD(v9) = 20532;
        HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v10) = -11432;
        HIWORD(v10) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
        zlog(*v9, v10, 174, "check_core_reg_with_expect_data_eth", 35, 1614, 100, var1004);
      }
      else
      {
        ++v6;
      }
      v7 += 12;
    }
    while ( &ptr[12 * v12] != v7 );
    if ( v6 == v12 )
      break;
    usleep(0x7A120u);
    if ( !--v14 )
      goto LABEL_10;
  }
  free(ptr);
  return 0;
}
