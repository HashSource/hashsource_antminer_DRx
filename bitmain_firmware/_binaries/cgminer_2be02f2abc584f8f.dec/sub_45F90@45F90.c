int __fastcall sub_45F90(int a1, int a2)
{
  char *v4; // r4
  int v5; // t1
  unsigned __int8 *v6; // r4
  unsigned int v8; // r2
  unsigned __int8 *v9; // r3
  int v10; // r7
  char v11; // t1
  char s[1996]; // [sp+34h] [bp-818h] BYREF
  _BYTE v13[4]; // [sp+833h] [bp-19h] BYREF
  char v14[4]; // [sp+837h] [bp-15h] BYREF
  char v15; // [sp+83Bh] [bp-11h] BYREF
  int v16; // [sp+83Ch] [bp-10h] BYREF
  int v17; // [sp+840h] [bp-Ch]
  unsigned __int8 v18[8]; // [sp+844h] [bp-8h] BYREF

  v16 = 255;
  v17 = 0;
  *(_DWORD *)v18 = 0;
  v13[1] = 85;
  v13[2] = -86;
  v13[3] = 4;
  strcpy(v14, "#");
  v14[2] = 39;
  pthread_mutex_lock(&stru_75D68);
  v4 = v13;
  do
  {
    v5 = (unsigned __int8)*++v4;
    sub_43628(a1, v5);
  }
  while ( v4 != &v14[2] );
  sub_2FF48();
  v6 = (unsigned __int8 *)&v15;
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
      "  read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         "
      "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, read_back_data[10] = 0x%x, read_back_data[11] = 0x%x\n",
      "read_temperature_offset_PIC16F1704_new",
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
  if ( BYTE1(v16) == 35 && (unsigned __int8)v16 == 12 )
  {
    v8 = v18[1] + v18[0] + HIBYTE(v17) + BYTE2(v17) + BYTE1(v17) + (unsigned __int8)v17 + BYTE2(v16) + HIBYTE(v16) + 47;
    if ( v18[2] == v8 >> 8 && v18[3] == (unsigned __int8)v8 )
    {
      v9 = (unsigned __int8 *)&v16 + 1;
      v10 = a2 - 1;
      do
      {
        v11 = *++v9;
        *(_BYTE *)++v10 = v11;
      }
      while ( v9 != &v18[1] );
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(s, 0x800u, "%s ok", "read_temperature_offset_PIC16F1704_new");
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
        "read_temperature_offset_PIC16F1704_new",
        v18[1] + v18[0] + HIBYTE(v17) + BYTE2(v17) + BYTE1(v17) + (unsigned __int8)v17 + BYTE2(v16) + HIBYTE(v16) + 47);
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
    snprintf(s, 0x800u, "%s failed!", "read_temperature_offset_PIC16F1704_new");
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
