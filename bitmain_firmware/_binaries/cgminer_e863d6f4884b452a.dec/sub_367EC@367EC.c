void __noreturn sub_367EC()
{
  int v0; // r7
  int v1; // r11
  int v2; // r3
  unsigned int v3; // r0
  int v4; // r1
  char v5; // r12
  int v6; // r3
  int v7; // r2
  char v8; // r1
  bool v9; // cf
  unsigned int v10; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  while ( 1 )
  {
    v0 = 2;
    dword_7473B = 0;
    dword_7473F = 0;
    while ( 1 )
    {
      v1 = 6;
      do
      {
        v10 = *(_DWORD *)(dword_6FAEC + 4);
        if ( v10 == -1 )
          goto LABEL_10;
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
LABEL_8:
          if ( v6 )
            goto LABEL_10;
          goto LABEL_9;
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
          goto LABEL_8;
LABEL_9:
        dword_7473F = 120 * (unsigned __int8)v10;
LABEL_10:
        sub_2A7F4();
        --v1;
      }
      while ( v1 );
      if ( v0 == 1 )
        break;
      v0 = 1;
    }
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(s, 0x800u, "fan speed  %d %d", dword_7470A, dword_7470E);
      sub_343C4(7, s, 0);
    }
    sleep(1u);
  }
}
