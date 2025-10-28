int __fastcall sub_39AAC(int a1, _BYTE *a2)
{
  int *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  int *v7; // r4
  int v8; // r6
  int v9; // r8
  int v11; // r0
  unsigned __int16 v12; // r3
  int v13; // [sp+18h] [bp-810h] BYREF
  unsigned __int8 v14; // [sp+1Ch] [bp-80Ch]
  char v15; // [sp+1Dh] [bp-80Bh] BYREF
  int v16; // [sp+20h] [bp-808h] BYREF
  __int16 v17; // [sp+24h] [bp-804h] BYREF
  char s[2048]; // [sp+28h] [bp-800h] BYREF

  v16 = 402958933;
  v17 = 7168;
  v3 = &v16;
  v13 = 255;
  v4 = (a1 << 16) | 0x400000;
  v14 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( (int *)((char *)&v17 + 1) == v3 )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (int *)((char *)v3 + 1);
  }
  v7 = &v13;
  sub_2A810();
  do
  {
    *(_BYTE *)v7 = sub_3832C(v4);
    v7 = (int *)((char *)v7 + 1);
  }
  while ( v7 != (int *)&v15 );
  pthread_mutex_unlock(&stru_6FC94);
  v8 = BYTE1(v13);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
  {
    if ( BYTE1(v13) != 24 )
    {
LABEL_23:
      if ( dword_6D35C <= 2 )
        return 0;
LABEL_11:
      snprintf(s, 0x800u, "%s failed!", "get_PIC16F1704_voltage_new");
      sub_343C4(3, s, 0);
      return 0;
    }
    if ( (unsigned __int8)v13 == 5 )
      goto LABEL_15;
LABEL_10:
    if ( byte_6FA70 )
      goto LABEL_11;
    goto LABEL_23;
  }
  v9 = (unsigned __int8)v13;
  snprintf(
    s,
    0x800u,
    "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_bac"
    "k_data[4] = 0x%x\n",
    "get_PIC16F1704_voltage_new",
    (unsigned __int8)v13,
    BYTE1(v13),
    BYTE2(v13),
    HIBYTE(v13),
    v14);
  sub_343C4(5, s, 0);
  if ( v8 != 24 || v9 != 5 )
  {
    if ( byte_73320 )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_15:
  v11 = BYTE2(v13);
  v12 = BYTE2(v13) + 29;
  if ( HIBYTE(v13) == HIBYTE(v12) && v14 == (unsigned __int8)v12 )
  {
    *a2 = BYTE2(v13);
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok, voltage = 0x%02x", "get_PIC16F1704_voltage_new", v11);
      sub_343C4(5, s, 0);
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
    {
      snprintf(s, 0x800u, "%s failed! crc = 0x%04x", "get_PIC16F1704_voltage_new", v12);
      sub_343C4(3, s, 0);
    }
    return 0;
  }
}
