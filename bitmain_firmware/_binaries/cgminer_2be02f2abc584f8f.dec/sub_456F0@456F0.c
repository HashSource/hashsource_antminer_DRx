int __fastcall sub_456F0(int a1, _BYTE *a2)
{
  char *v4; // r4
  int v5; // t1
  unsigned __int8 *v6; // r4
  int v7; // r4
  int v9; // r3
  unsigned int v10; // r2
  char s[2024]; // [sp+18h] [bp-814h] BYREF
  _BYTE v12[6]; // [sp+817h] [bp-15h] BYREF
  char v13; // [sp+81Dh] [bp-Fh] BYREF
  char v14; // [sp+81Fh] [bp-Dh] BYREF
  int v15; // [sp+820h] [bp-Ch]
  unsigned __int8 v16; // [sp+824h] [bp-8h] BYREF

  v15 = 255;
  v16 = 0;
  v12[5] = 0;
  v12[1] = 85;
  v12[2] = -86;
  v12[3] = 4;
  v12[4] = 23;
  v13 = 27;
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
  while ( v6 != &v16 );
  pthread_mutex_unlock(&stru_75D68);
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_b"
      "ack_data[4] = 0x%x",
      "get_PIC16F1704_software_version_new",
      (unsigned __int8)v15,
      BYTE1(v15),
      BYTE2(v15),
      HIBYTE(v15),
      v16);
    sub_3F1C0(7, s, 0);
  }
  v7 = BYTE1(v15);
  if ( BYTE1(v15) == 23 && (unsigned __int8)v15 == 5 )
  {
    v9 = BYTE2(v15);
    v10 = BYTE2(v15) + 28;
    if ( HIBYTE(v15) == v10 >> 8 && v16 == (unsigned __int8)v10 )
    {
      *a2 = BYTE2(v15);
      if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
      {
        snprintf(s, 0x800u, "%s ok, version = 0x%02x", "get_PIC16F1704_software_version_new", v9);
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
      snprintf(s, 0x800u, "%s failed! crc = 0x%04x", "get_PIC16F1704_software_version_new", BYTE2(v15) + 28);
      sub_3F1C0(3, s, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( (byte_78D98 || byte_75C08 || dword_734EC > 2)
         && ((snprintf(s, 0x800u, "%s failed!", "get_PIC16F1704_software_version_new"), sub_3F1C0(3, s, 0), byte_78D98)
          || byte_75C08)
         || dword_734EC > 2 )
  {
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_b"
      "ack_data[4] = 0x%x",
      "get_PIC16F1704_software_version_new",
      (unsigned __int8)v15,
      v7,
      BYTE2(v15),
      HIBYTE(v15),
      v16);
    sub_3F1C0(3, s, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
