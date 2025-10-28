int __fastcall sub_3878C(int a1, int a2)
{
  int *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  char *v7; // r4
  int v8; // r5
  int result; // r0
  char v10; // r1
  int v11; // r7
  _DWORD *j; // r2
  char v13; // t1
  int v14; // [sp+54h] [bp-820h] BYREF
  __int16 v15; // [sp+58h] [bp-81Ch] BYREF
  char v16; // [sp+5Bh] [bp-819h] BYREF
  int v17; // [sp+5Ch] [bp-818h] BYREF
  int v18; // [sp+60h] [bp-814h]
  int v19; // [sp+64h] [bp-810h]
  int v20; // [sp+68h] [bp-80Ch]
  int v21; // [sp+6Ch] [bp-808h] BYREF
  char s[2052]; // [sp+70h] [bp-804h] BYREF

  v14 = 50637397;
  v15 = 1792;
  v3 = &v14;
  v17 = 255;
  v4 = (a1 << 16) | 0x400000;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( v3 == (int *)((char *)&v15 + 1) )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (int *)((char *)v3 + 1);
  }
  v7 = &v16;
  sub_2A810();
  do
    *++v7 = sub_3832C(v4);
  while ( v7 != (char *)&v21 + 3 );
  pthread_mutex_unlock(&stru_6FC94);
  v8 = BYTE1(v17);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,       "
      "  read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         "
      "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,         "
      "read_back_data[12] = 0x%x, read_back_data[13] = 0x%x, read_back_data[14] = 0x%x, read_back_data[15] = 0x%x,       "
      "  read_back_data[16] = 0x%x, read_back_data[17] = 0x%x, read_back_data[18] = 0x%x, read_back_data[19] = 0x%x\n",
      "read_PIC16F1704_flash_data_new",
      (unsigned __int8)v17,
      BYTE1(v17),
      BYTE2(v17),
      HIBYTE(v17),
      (unsigned __int8)v18,
      BYTE1(v18),
      BYTE2(v18),
      HIBYTE(v18),
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
    sub_343C4(5, s, 0);
  }
  sub_2A810();
  if ( v8 != 3 || (unsigned __int8)v17 != 20 )
  {
    if ( !byte_73320 )
    {
      result = (unsigned __int8)byte_6FA70;
      if ( !byte_6FA70 && dword_6D35C <= 2 )
        return result;
    }
    snprintf(s, 0x800u, "%s failed!", "read_PIC16F1704_flash_data_new");
    goto LABEL_14;
  }
  v10 = BYTE2(v17);
  if ( BYTE2(v21) != (unsigned __int16)(BYTE1(v21)
                                      + (unsigned __int8)v21
                                      + HIBYTE(v20)
                                      + BYTE2(v20)
                                      + BYTE1(v20)
                                      + (unsigned __int8)v20
                                      + HIBYTE(v19)
                                      + BYTE2(v19)
                                      + BYTE1(v19)
                                      + (unsigned __int8)v19
                                      + HIBYTE(v18)
                                      + BYTE2(v18)
                                      + HIBYTE(v17)
                                      + BYTE2(v17)
                                      + 23
                                      + (unsigned __int8)v18
                                      + BYTE1(v18)) >> 8
    || HIBYTE(v21) != (unsigned __int8)(BYTE1(v21)
                                      + v21
                                      + HIBYTE(v20)
                                      + BYTE2(v20)
                                      + BYTE1(v20)
                                      + v20
                                      + HIBYTE(v19)
                                      + BYTE2(v19)
                                      + BYTE1(v19)
                                      + v19
                                      + HIBYTE(v18)
                                      + BYTE2(v18)
                                      + HIBYTE(v17)
                                      + BYTE2(v17)
                                      + 23
                                      + v18
                                      + BYTE1(v18)) )
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
      "%s failed! crc = 0x%04x\n\n",
      "read_PIC16F1704_flash_data_new",
      (unsigned __int16)(BYTE1(v21)
                       + (unsigned __int8)v21
                       + HIBYTE(v20)
                       + BYTE2(v20)
                       + BYTE1(v20)
                       + (unsigned __int8)v20
                       + HIBYTE(v19)
                       + BYTE2(v19)
                       + BYTE1(v19)
                       + (unsigned __int8)v19
                       + HIBYTE(v18)
                       + BYTE2(v18)
                       + HIBYTE(v17)
                       + BYTE2(v17)
                       + 23
                       + (unsigned __int8)v18
                       + BYTE1(v18)));
LABEL_14:
    sub_343C4(3, s, 0);
    return 0;
  }
  v11 = a2 - 1;
  for ( j = (int *)((char *)&v17 + 3); ; j = (_DWORD *)((char *)j + 1) )
  {
    *(_BYTE *)++v11 = v10;
    if ( j == (int *)((char *)&v21 + 2) )
      break;
    v13 = *(_BYTE *)j;
    v10 = v13;
  }
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
    return 1;
  snprintf(s, 0x800u, "%s ok", "read_PIC16F1704_flash_data_new");
  sub_343C4(5, s, 0);
  return 1;
}
