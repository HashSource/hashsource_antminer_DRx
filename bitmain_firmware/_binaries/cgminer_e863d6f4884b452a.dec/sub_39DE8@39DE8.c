int __fastcall sub_39DE8(int a1, int a2)
{
  int *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  char *v7; // r4
  int v8; // r5
  int v9; // r8
  char v11; // r5
  unsigned int v12; // r3
  int v13; // r3
  char *v14; // r2
  int v15; // r7
  char v16; // t1
  int v17; // [sp+34h] [bp-814h] BYREF
  __int16 v18; // [sp+38h] [bp-810h] BYREF
  int v19; // [sp+3Ch] [bp-80Ch] BYREF
  int v20; // [sp+40h] [bp-808h]
  int v21; // [sp+44h] [bp-804h]
  char v22[2048]; // [sp+48h] [bp-800h] BYREF

  v17 = 587508309;
  v18 = 9984;
  v3 = &v17;
  v19 = 255;
  v4 = (a1 << 16) | 0x400000;
  v20 = 0;
  v21 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( (int *)((char *)&v18 + 1) == v3 )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (int *)((char *)v3 + 1);
  }
  v7 = (char *)&v19;
  sub_2A810();
  do
    *v7++ = sub_3832C(v4);
  while ( v7 != v22 );
  pthread_mutex_unlock(&stru_6FC94);
  v8 = BYTE1(v19);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
  {
    if ( BYTE1(v19) != 35 )
    {
LABEL_11:
      if ( dword_6D35C <= 2 )
        return 0;
      goto LABEL_12;
    }
    if ( (unsigned __int8)v19 == 12 )
      goto LABEL_18;
LABEL_10:
    if ( !byte_6FA70 )
      goto LABEL_11;
LABEL_12:
    snprintf(v22, 0x800u, "%s failed!", "read_temperature_offset_PIC16F1704_new");
LABEL_13:
    sub_343C4(3, v22, 0);
    return 0;
  }
  v9 = (unsigned __int8)v19;
  snprintf(
    v22,
    0x800u,
    "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,         "
    "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         read"
    "_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x\n",
    "read_temperature_offset_PIC16F1704_new",
    (unsigned __int8)v19,
    BYTE1(v19),
    BYTE2(v19),
    HIBYTE(v19),
    (unsigned __int8)v20,
    BYTE1(v20),
    BYTE2(v20),
    HIBYTE(v20),
    (unsigned __int8)v21,
    BYTE1(v21),
    BYTE2(v21),
    HIBYTE(v21));
  sub_343C4(5, v22, 0);
  if ( v8 != 35 || v9 != 12 )
  {
    if ( byte_73320 )
      goto LABEL_12;
    goto LABEL_10;
  }
LABEL_18:
  v11 = BYTE2(v19);
  v12 = BYTE1(v21)
      + (unsigned __int8)v21
      + HIBYTE(v20)
      + BYTE2(v20)
      + HIBYTE(v19)
      + BYTE2(v19)
      + 47
      + (unsigned __int8)v20
      + BYTE1(v20);
  if ( BYTE2(v21) != v12 >> 8 || HIBYTE(v21) != (unsigned __int8)v12 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return 0;
    snprintf(v22, 0x800u, "%s failed! crc = 0x%04x", "read_temperature_offset_PIC16F1704_new", v12);
    goto LABEL_13;
  }
  v13 = a2 - 1;
  v14 = (char *)&v19 + 3;
  v15 = a2 + 7;
  while ( 1 )
  {
    *(_BYTE *)++v13 = v11;
    if ( v13 == v15 )
      break;
    v16 = *v14++;
    v11 = v16;
  }
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
    return 1;
  snprintf(v22, 0x800u, "%s ok", "read_temperature_offset_PIC16F1704_new");
  sub_343C4(5, v22, 0);
  return 1;
}
