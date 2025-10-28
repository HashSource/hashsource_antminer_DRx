int __fastcall check_core_reg_with_expect_data_eth(int a1, int a2, unsigned __int16 a3, __int16 a4, unsigned int a5)
{
  int v6; // r7
  char *v7; // r4
  unsigned int v8; // r6
  int v10; // [sp+3Ch] [bp-14h]
  char *ptr; // [sp+40h] [bp-10h]
  int v12; // [sp+44h] [bp-Ch]
  int v13; // [sp+48h] [bp-8h]
  _DWORD v15[7]; // [sp+50h] [bp+0h] BYREF
  int v16; // [sp+6Ch] [bp+1Ch]
  char var1004[4112]; // [sp+70h] [bp+20h] BYREF

  v13 = a3;
  ptr = (char *)malloc(0x600u);
  v12 = 5;
  while ( 1 )
  {
    v10 = sub_80954(a1, v13, a4, ptr);
    if ( !v10 )
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
        V_INT((int)v15, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          var1004,
          0x1000u,
          0,
          v16,
          v15[0],
          v15[1],
          v15[2],
          v15[3],
          v15[4],
          v15[5],
          v15[6],
          v16,
          "[REG READ ERR] chip %02x core %02x reg %04x rdata %08x",
          (unsigned __int8)v7[4],
          (unsigned __int8)v7[8],
          (unsigned __int16)__rev16(*((unsigned __int16 *)v7 + 3)),
          bswap32(*(_DWORD *)v7));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "check_core_reg_with_expect_data_eth",
          35,
          1614,
          100,
          var1004);
      }
      else
      {
        ++v6;
      }
      v7 += 12;
    }
    while ( &ptr[12 * v10] != v7 );
    if ( v6 == v10 )
      break;
    usleep(0x7A120u);
    if ( !--v12 )
      goto LABEL_10;
  }
  free(ptr);
  return 0;
}
