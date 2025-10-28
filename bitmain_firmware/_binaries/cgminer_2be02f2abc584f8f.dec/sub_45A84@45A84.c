int __fastcall sub_45A84(int a1, _BYTE *a2)
{
  char *v4; // r4
  int v5; // t1
  unsigned __int8 *v6; // r4
  int v8; // r3
  unsigned int v9; // r2
  char s[2024]; // [sp+18h] [bp-814h] BYREF
  _BYTE v11[6]; // [sp+817h] [bp-15h] BYREF
  char v12; // [sp+81Dh] [bp-Fh] BYREF
  char v13; // [sp+81Fh] [bp-Dh] BYREF
  int v14; // [sp+820h] [bp-Ch]
  unsigned __int8 v15; // [sp+824h] [bp-8h] BYREF

  v14 = 255;
  v15 = 0;
  v11[5] = 0;
  v11[1] = 85;
  v11[2] = -86;
  v11[3] = 4;
  v11[4] = 24;
  v12 = 28;
  pthread_mutex_lock(&stru_75D68);
  v4 = v11;
  do
  {
    v5 = (unsigned __int8)*++v4;
    sub_43628(a1, v5);
  }
  while ( v4 != &v12 );
  sub_2FF48();
  v6 = (unsigned __int8 *)&v13;
  do
    *++v6 = sub_4363C(a1);
  while ( v6 != &v15 );
  pthread_mutex_unlock(&stru_75D68);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_b"
      "ack_data[4] = 0x%x\n",
      "get_PIC16F1704_voltage_new",
      (unsigned __int8)v14,
      BYTE1(v14),
      BYTE2(v14),
      HIBYTE(v14),
      v15);
    sub_3F1C0(5, s, 0);
  }
  if ( BYTE1(v14) == 24 && (unsigned __int8)v14 == 5 )
  {
    v8 = BYTE2(v14);
    v9 = BYTE2(v14) + 29;
    if ( HIBYTE(v14) == v9 >> 8 && v15 == (unsigned __int8)v9 )
    {
      *a2 = BYTE2(v14);
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(s, 0x800u, "%s ok, voltage = 0x%02x", "get_PIC16F1704_voltage_new", v8);
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
      snprintf(s, 0x800u, "%s failed! crc = 0x%04x", "get_PIC16F1704_voltage_new", BYTE2(v14) + 29);
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
    snprintf(s, 0x800u, "%s failed!", "get_PIC16F1704_voltage_new");
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
