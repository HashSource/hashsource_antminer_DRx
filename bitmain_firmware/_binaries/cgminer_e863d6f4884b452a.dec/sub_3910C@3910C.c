int __fastcall sub_3910C(int a1, int a2)
{
  int *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  char *v7; // r4
  int v8; // r6
  int v9; // r8
  char v11; // r2
  unsigned int v12; // r3
  int v13; // r3
  char *v14; // r1
  int v15; // r7
  char v16; // t1
  int v17; // [sp+40h] [bp-818h] BYREF
  __int16 v18; // [sp+44h] [bp-814h] BYREF
  char v19; // [sp+47h] [bp-811h] BYREF
  int v20; // [sp+48h] [bp-810h] BYREF
  int v21; // [sp+4Ch] [bp-80Ch]
  int v22; // [sp+50h] [bp-808h]
  int v23; // [sp+54h] [bp-804h] BYREF
  char s[2048]; // [sp+58h] [bp-800h] BYREF

  v17 = 319072853;
  v18 = 5888;
  v3 = &v17;
  v20 = 255;
  v4 = (a1 << 16) | 0x400000;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( (int *)((char *)&v18 + 1) == v3 )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (int *)((char *)v3 + 1);
  }
  v7 = &v19;
  sub_2A810();
  do
    *++v7 = sub_3832C(v4);
  while ( v7 != (char *)&v23 + 3 );
  pthread_mutex_unlock(&stru_6FC94);
  v8 = BYTE1(v20);
  if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
  {
    if ( BYTE1(v20) != 19 )
    {
LABEL_23:
      if ( dword_6D35C <= 2 )
        return 0;
LABEL_11:
      snprintf(s, 0x800u, aSFailed_0, "read_hash_id_PIC16F1704_new");
      sub_343C4(3, s, 0);
      return 0;
    }
    if ( (unsigned __int8)v20 == 16 )
      goto LABEL_15;
LABEL_10:
    if ( byte_6FA70 )
      goto LABEL_11;
    goto LABEL_23;
  }
  v9 = (unsigned __int8)v20;
  snprintf(
    s,
    0x800u,
    "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,        r"
    "ead_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,        read_b"
    "ack_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,        read_back"
    "_data[12] = 0x%x, read_back_data[13] = 0x%x, read_back_data[14] = 0x%x, read_back_data[15] = 0x%x\n",
    "read_hash_id_PIC16F1704_new",
    (unsigned __int8)v20,
    BYTE1(v20),
    BYTE2(v20),
    HIBYTE(v20),
    (unsigned __int8)v21,
    BYTE1(v21),
    BYTE2(v21),
    HIBYTE(v21),
    (unsigned __int8)v22,
    BYTE1(v22),
    BYTE2(v22),
    HIBYTE(v22),
    (unsigned __int8)v23,
    BYTE1(v23),
    BYTE2(v23),
    HIBYTE(v23));
  sub_343C4(5, s, 0);
  if ( v8 != 19 || v9 != 16 )
  {
    if ( byte_73320 )
      goto LABEL_11;
    goto LABEL_10;
  }
LABEL_15:
  v11 = BYTE2(v20);
  v12 = (unsigned __int16)(BYTE1(v23)
                         + (unsigned __int8)v23
                         + HIBYTE(v22)
                         + BYTE2(v22)
                         + BYTE1(v22)
                         + (unsigned __int8)v22
                         + HIBYTE(v21)
                         + BYTE2(v21)
                         + HIBYTE(v20)
                         + BYTE2(v20)
                         + 35
                         + (unsigned __int8)v21
                         + BYTE1(v21));
  if ( BYTE2(v23) == v12 >> 8
    && HIBYTE(v23) == (unsigned __int8)(BYTE1(v23)
                                      + v23
                                      + HIBYTE(v22)
                                      + BYTE2(v22)
                                      + BYTE1(v22)
                                      + v22
                                      + HIBYTE(v21)
                                      + BYTE2(v21)
                                      + HIBYTE(v20)
                                      + BYTE2(v20)
                                      + 35
                                      + v21
                                      + BYTE1(v21)) )
  {
    v13 = a2 - 1;
    v14 = (char *)&v20 + 2;
    v15 = a2 + 11;
    while ( 1 )
    {
      *(_BYTE *)++v13 = v11;
      if ( v15 == v13 )
        break;
      v16 = *++v14;
      v11 = v16;
    }
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok", "read_hash_id_PIC16F1704_new");
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
      snprintf(s, 0x800u, "%s failed! crc = 0x%04x", "read_hash_id_PIC16F1704_new", v12);
      sub_343C4(3, s, 0);
    }
    return 0;
  }
}
