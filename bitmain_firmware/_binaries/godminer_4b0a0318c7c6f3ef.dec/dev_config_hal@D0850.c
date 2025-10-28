int __fastcall dev_config_hal(char *a1)
{
  int v2; // r4
  int v3; // r2
  int v4; // r1
  const char *v5; // r0
  int v7; // [sp+0h] [bp-8h] BYREF
  int v8; // [sp+4h] [bp-4h] BYREF

  get_all_created_runtime(&v8);
  if ( a1 == (char *)3000000 )
    goto LABEL_22;
  if ( (int)a1 <= 3000000 )
  {
    if ( a1 == (char *)&loc_E1000 )
    {
      v2 = 33686018;
      v3 = 2;
      goto LABEL_13;
    }
    if ( (int)a1 > 921600 )
    {
      if ( a1 == "s PHY core %02x macro0 rx is invalid!" || a1 == byte_17D784 )
      {
        v2 = 16843009;
        v3 = 1;
        goto LABEL_13;
      }
    }
    else if ( a1 == (char *)&loc_70800 )
    {
      v2 = 101058054;
      v3 = 6;
      goto LABEL_13;
    }
LABEL_20:
    v2 = 437918234;
    v3 = 26;
    goto LABEL_13;
  }
  if ( a1 == (char *)6250000 )
  {
    v2 = 50529027;
    v3 = 3;
    goto LABEL_13;
  }
  if ( (int)a1 <= 6250000 )
  {
    if ( a1 != (char *)3125000 )
      goto LABEL_20;
LABEL_22:
    v2 = 0;
    v3 = 0;
    goto LABEL_13;
  }
  if ( a1 == (char *)12500000 )
  {
    v2 = 67372036;
    v3 = 4;
    goto LABEL_13;
  }
  if ( a1 != (char *)25000000 )
    goto LABEL_20;
  v2 = 84215045;
  v3 = 5;
LABEL_13:
  LOWORD(v4) = -31956;
  LOWORD(v5) = -31780;
  HIWORD(v4) = (unsigned int)"fset %d, chain %d, get_sw_version error!" >> 16;
  HIWORD(v5) = (unsigned int)"d %08x\n" >> 16;
  printf(v5, v4, v3);
  v7 = v2;
  uart_set_config(0, 0, &v7);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
