int __fastcall sub_385C8(int a1, unsigned __int8 *a2, _BYTE *a3)
{
  int *v5; // r4
  int v6; // r5
  int i; // r0
  int v8; // t1
  int *v9; // r4
  int result; // r0
  int v11; // r1
  unsigned int v12; // r3
  int v13; // [sp+18h] [bp-810h] BYREF
  __int16 v14; // [sp+1Ch] [bp-80Ch]
  char v15; // [sp+1Eh] [bp-80Ah] BYREF
  int v16; // [sp+20h] [bp-808h] BYREF
  __int16 v17; // [sp+24h] [bp-804h] BYREF
  char s[2048]; // [sp+28h] [bp-800h] BYREF

  v17 = 3072;
  v16 = 134523477;
  v13 = 255;
  v5 = &v16;
  v14 = 0;
  v6 = (a1 << 16) | 0x400000;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v8 )
  {
    sub_382C4(i | v6);
    if ( v5 == (int *)((char *)&v17 + 1) )
      break;
    v8 = *((unsigned __int8 *)v5 + 1);
    v5 = (int *)((char *)v5 + 1);
  }
  v9 = &v13;
  sub_2A810();
  do
  {
    *(_BYTE *)v9 = sub_3832C(v6);
    v9 = (int *)((char *)v9 + 1);
  }
  while ( v9 != (int *)&v15 );
  pthread_mutex_unlock(&stru_6FC94);
  if ( BYTE1(v13) != 8 || (unsigned __int8)v13 != 6 )
  {
    if ( !byte_73320 )
    {
      result = (unsigned __int8)byte_6FA70;
      if ( !byte_6FA70 && dword_6D35C <= 2 )
        return result;
    }
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,"
      " read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n"
      "\n",
      "read_PIC16F1704_flash_pointer_new",
      (unsigned __int8)v13,
      BYTE1(v13),
      BYTE2(v13),
      HIBYTE(v13),
      (unsigned __int8)v14,
      HIBYTE(v14));
    goto LABEL_11;
  }
  v11 = HIBYTE(v13);
  v12 = BYTE2(v13) + HIBYTE(v13) + 14;
  if ( (unsigned __int8)v14 != v12 >> 8 || HIBYTE(v14) != (unsigned __int8)v12 )
  {
    if ( !byte_73320 )
    {
      result = (unsigned __int8)byte_6FA70;
      if ( !byte_6FA70 && dword_6D35C <= 2 )
        return result;
    }
    snprintf(
      s,
      0x800u,
      "%s failed!!! read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%"
      "x, read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n"
      "\n",
      "read_PIC16F1704_flash_pointer_new",
      6,
      8,
      BYTE2(v13),
      HIBYTE(v13),
      (unsigned __int8)v14,
      HIBYTE(v14));
LABEL_11:
    sub_343C4(3, s, 0);
    return 0;
  }
  *a2 = BYTE2(v13);
  *a3 = v11;
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
    return 1;
  snprintf(
    s,
    0x800u,
    "%s ok! flash_addr_h = 0x%02x, flash_addr_l = 0x%02x",
    "read_PIC16F1704_flash_pointer_new",
    *a2,
    v11);
  sub_343C4(5, s, 0);
  return 1;
}
