int __fastcall sub_44C28(int a1, int a2)
{
  char *v4; // r4
  int v5; // t1
  unsigned __int8 *v6; // r4
  unsigned __int8 *v8; // r3
  int v9; // r7
  char v10; // t1
  char s[1984]; // [sp+40h] [bp-81Ch] BYREF
  _BYTE v12[6]; // [sp+83Fh] [bp-1Dh] BYREF
  char v13; // [sp+845h] [bp-17h] BYREF
  char v14; // [sp+847h] [bp-15h] BYREF
  int v15; // [sp+848h] [bp-14h] BYREF
  int v16; // [sp+84Ch] [bp-10h]
  int v17; // [sp+850h] [bp-Ch]
  unsigned __int8 v18[8]; // [sp+854h] [bp-8h] BYREF

  v15 = 255;
  v16 = 0;
  v17 = 0;
  *(_DWORD *)v18 = 0;
  v12[5] = 0;
  v12[1] = 85;
  v12[2] = -86;
  v12[3] = 4;
  v12[4] = 19;
  v13 = 23;
  pthread_mutex_lock(&stru_75D68);
  v4 = v12;
  do
  {
    v5 = (unsigned __int8)*++v4;
    sub_43628(a1, v5);
  }
  while ( v4 != &v13 );
  sub_2FF48();
  v6 = (unsigned __int8 *)&v14;
  do
    *++v6 = sub_4363C(a1);
  while ( v6 != &v18[3] );
  pthread_mutex_unlock(&stru_75D68);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,       "
      " read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,        re"
      "ad_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,        rea"
      "d_back_data[12] = 0x%x, read_back_data[13] = 0x%x, read_back_data[14] = 0x%x, read_back_data[15] = 0x%x\n",
      "read_hash_id_PIC16F1704_new",
      (unsigned __int8)v15,
      BYTE1(v15),
      BYTE2(v15),
      HIBYTE(v15),
      (unsigned __int8)v16,
      BYTE1(v16),
      BYTE2(v16),
      HIBYTE(v16),
      (unsigned __int8)v17,
      BYTE1(v17),
      BYTE2(v17),
      HIBYTE(v17),
      v18[0],
      v18[1],
      v18[2],
      v18[3]);
    sub_3F1C0(5, s, 0);
  }
  if ( BYTE1(v15) == 19 && (unsigned __int8)v15 == 16 )
  {
    if ( v18[2] == (unsigned __int16)(v18[1]
                                    + v18[0]
                                    + HIBYTE(v17)
                                    + BYTE2(v17)
                                    + BYTE1(v17)
                                    + (unsigned __int8)v17
                                    + HIBYTE(v16)
                                    + BYTE2(v16)
                                    + BYTE1(v16)
                                    + (unsigned __int8)v16
                                    + BYTE2(v15)
                                    + HIBYTE(v15)
                                    + 35) >> 8
      && v18[3] == (unsigned __int8)(v18[1]
                                   + v18[0]
                                   + HIBYTE(v17)
                                   + BYTE2(v17)
                                   + BYTE1(v17)
                                   + v17
                                   + HIBYTE(v16)
                                   + BYTE2(v16)
                                   + BYTE1(v16)
                                   + v16
                                   + BYTE2(v15)
                                   + HIBYTE(v15)
                                   + 35) )
    {
      v8 = (unsigned __int8 *)&v15 + 1;
      v9 = a2 - 1;
      do
      {
        v10 = *++v8;
        *(_BYTE *)++v9 = v10;
      }
      while ( v8 != &v18[1] );
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(s, 0x800u, "%s ok", "read_hash_id_PIC16F1704_new");
        sub_3F1C0(5, s, 0);
        return 1;
      }
      else
      {
        return 1;
      }
    }
    else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
    {
      snprintf(
        s,
        0x800u,
        "%s failed! crc = 0x%04x",
        "read_hash_id_PIC16F1704_new",
        (unsigned __int16)(v18[1]
                         + v18[0]
                         + HIBYTE(v17)
                         + BYTE2(v17)
                         + BYTE1(v17)
                         + (unsigned __int8)v17
                         + HIBYTE(v16)
                         + BYTE2(v16)
                         + BYTE1(v16)
                         + (unsigned __int8)v16
                         + BYTE2(v15)
                         + HIBYTE(v15)
                         + 35));
      sub_3F1C0(3, s, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(s, 0x800u, aSFailed_0, "read_hash_id_PIC16F1704_new");
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
