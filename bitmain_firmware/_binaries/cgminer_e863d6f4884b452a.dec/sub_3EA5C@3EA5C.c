void sub_3EA5C()
{
  int v0; // r3
  int v1; // r9
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r1
  char v5; // r10
  int v6; // r3
  int v7; // r1
  char v8; // r12
  bool v9; // cf
  unsigned int v10; // [sp+Ch] [bp-804h]
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  sub_3E808(100);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "Begain %s", "check_fan_speed");
    sub_343C4(5, s, 0);
  }
  write(dword_73E84, &word_513BC, 2u);
  write(dword_73ED0, &word_513BC, 2u);
  v0 = (unsigned __int8)byte_74739;
  dword_7473B = 0;
  dword_7473F = 0;
  while ( (unsigned __int8)byte_74739 <= 1u )
  {
    v1 = 6;
    do
    {
      v10 = *(_DWORD *)(dword_6FAEC + 4);
      if ( v10 == -1 )
        goto LABEL_13;
      v2 = (v10 >> 8) & 7;
      v3 = 120 * (unsigned __int8)v10;
      *(_DWORD *)((char *)&unk_73ED8 + 4 * v2 + 2098) = v3;
      if ( !(_BYTE)v10 )
      {
        if ( *((_BYTE *)&unk_73ED8 + v2 + 2068) == 1 )
        {
          v4 = dword_73EFC;
          v5 = byte_74739;
          *((_BYTE *)&unk_73ED8 + v2 + 2068) = 0;
          dword_73EFC = v4 & ~(1 << v2);
          byte_74739 = v5 - 1;
        }
        v6 = dword_7473F;
LABEL_11:
        if ( v6 )
          goto LABEL_13;
        goto LABEL_12;
      }
      if ( !*((_BYTE *)&unk_73ED8 + v2 + 2068) )
      {
        v7 = dword_73EFC;
        v8 = byte_74739;
        *((_BYTE *)&unk_73ED8 + v2 + 2068) = 1;
        dword_73EFC = v7 | (1 << v2);
        byte_74739 = v8 + 1;
      }
      v6 = dword_7473F;
      if ( v3 > dword_7473B )
        dword_7473B = 120 * (unsigned __int8)v10;
      v9 = 1;
      if ( v3 )
        v9 = v3 >= dword_7473F;
      if ( v9 )
        goto LABEL_11;
LABEL_12:
      dword_7473F = 120 * (unsigned __int8)v10;
LABEL_13:
      sub_2A7F4();
      --v1;
    }
    while ( v1 );
    sub_2A7F4();
    v0 = (unsigned __int8)byte_74739;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "%s, check_fan_speed ok, dev.fan_num = %d", "check_fan_speed", v0);
    sub_343C4(5, s, 0);
    sub_3E808(70);
  }
  else
  {
    sub_3E808(70);
  }
}
