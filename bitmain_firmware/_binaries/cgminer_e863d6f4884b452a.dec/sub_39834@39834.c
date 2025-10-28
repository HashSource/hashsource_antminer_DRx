int __fastcall sub_39834(int a1, _BYTE *a2)
{
  int *v3; // r4
  int v4; // r5
  int i; // r0
  int v6; // t1
  int *v7; // r4
  int v8; // r6
  int v9; // r0
  unsigned __int16 v10; // r3
  int v12; // [sp+18h] [bp-814h] BYREF
  unsigned __int8 v13; // [sp+1Ch] [bp-810h]
  char v14; // [sp+1Dh] [bp-80Fh] BYREF
  int v15; // [sp+20h] [bp-80Ch] BYREF
  __int16 v16; // [sp+24h] [bp-808h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v15 = 386181717;
  v16 = 6912;
  v3 = &v15;
  v12 = 255;
  v4 = (a1 << 16) | 0x400000;
  v13 = 0;
  pthread_mutex_lock(&stru_6FC94);
  for ( i = 85; ; i = v6 )
  {
    sub_382C4(i | v4);
    if ( (int *)((char *)&v16 + 1) == v3 )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (int *)((char *)v3 + 1);
  }
  v7 = &v12;
  sub_2A810();
  do
  {
    *(_BYTE *)v7 = sub_3832C(v4);
    v7 = (int *)((char *)v7 + 1);
  }
  while ( &v14 != (char *)v7 );
  pthread_mutex_unlock(&stru_6FC94);
  v8 = BYTE1(v12);
  if ( byte_6FA71 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
    {
      if ( BYTE1(v12) != 23 )
      {
LABEL_25:
        if ( dword_6D35C <= 2 )
          return 0;
LABEL_22:
        snprintf(s, 0x800u, "%s failed!", "get_PIC16F1704_software_version_new");
        sub_343C4(3, s, 0);
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
        {
          snprintf(
            s,
            0x800u,
            "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, "
            "read_back_data[4] = 0x%x",
            "get_PIC16F1704_software_version_new",
            (unsigned __int8)v12,
            v8,
            BYTE2(v12),
            HIBYTE(v12),
            v13);
          sub_343C4(3, s, 0);
          return 0;
        }
        return 0;
      }
      if ( (unsigned __int8)v12 == 5 )
        goto LABEL_12;
LABEL_21:
      if ( byte_6FA70 )
        goto LABEL_22;
      goto LABEL_25;
    }
    snprintf(
      s,
      0x800u,
      "%s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, read_b"
      "ack_data[4] = 0x%x",
      "get_PIC16F1704_software_version_new",
      (unsigned __int8)v12,
      BYTE1(v12),
      BYTE2(v12),
      HIBYTE(v12),
      v13);
    sub_343C4(7, s, 0);
  }
  if ( v8 != 23 || (unsigned __int8)v12 != 5 )
  {
    if ( byte_73320 )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_12:
  v9 = BYTE2(v12);
  v10 = BYTE2(v12) + 28;
  if ( HIBYTE(v12) == HIBYTE(v10) && v13 == (unsigned __int8)v10 )
  {
    *a2 = BYTE2(v12);
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s ok, version = 0x%02x", "get_PIC16F1704_software_version_new", v9);
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
      snprintf(s, 0x800u, "%s failed! crc = 0x%04x", "get_PIC16F1704_software_version_new", v10);
      sub_343C4(3, s, 0);
    }
    return 0;
  }
}
