void sub_3DFA4()
{
  int v0; // r7
  unsigned __int8 *v1; // r8
  int v3; // r6
  int v4; // r6
  char *v5; // r9
  unsigned int v6; // r4
  int v7; // r5
  char v8[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_73EF0;
  do
  {
    if ( *v1++ )
    {
      v3 = v1[2113];
      if ( v1[2113] )
      {
        v4 = 0;
        v5 = (char *)&unk_73ED8 + 88 * v0;
        v6 = 0;
        do
        {
          v7 = v4 + v6;
          if ( !(v6 << 29) )
          {
            if ( v7 > 88 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
            {
              snprintf(v8, 0x800u, "offset[%d] ERR", v4 + v6);
              sub_343C4(3, v8, 0);
            }
            v4 = (unsigned __int8)(v4 + 1);
            v5[v7 + 1688] = 32;
            v7 = v6 + v4;
          }
          if ( v7 > 88 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
          {
            snprintf(v8, 0x800u, "offset[%d] ERR", v7);
            sub_343C4(3, v8, 0);
          }
          v5[v7 + 1688] = 111;
          *((_DWORD *)&unk_73ED8 + 72 * v0 + v6 + 134) = 0;
          v6 = (unsigned __int8)(v6 + 1);
        }
        while ( v1[2113] > v6 );
        v3 = v4 + v6;
        if ( v3 > 88 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
        {
          snprintf(v8, 0x800u, "offset[%d] ERR", v3);
          sub_343C4(3, v8, 0);
        }
      }
      *((_BYTE *)&unk_73ED8 + 88 * v0 + v3 + 1688) = 0;
    }
    ++v0;
  }
  while ( v0 != 4 );
}
