void sub_4D3D8()
{
  int v0; // r6
  unsigned int v1; // r4
  char *v2; // r8
  int v3; // r4
  int v4; // [sp+4h] [bp-818h]
  int i; // [sp+Ch] [bp-810h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v4 = 736019;
  for ( i = 0; i != 4; ++i )
  {
    if ( *(_BYTE *)++v4 )
    {
      if ( *(_BYTE *)(v4 + 2114) )
      {
        v0 = 0;
        v1 = 0;
        v2 = (char *)&unk_B3AFC + 88 * i;
        do
        {
          if ( (v1 & 7) == 0 )
          {
            if ( (int)(v1 + v0) > 88 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
            {
              snprintf(s, 0x800u, "offset[%d] ERR", v1 + v0);
              sub_3F178(3, s, 0);
            }
            v2[v1 + 1688 + v0] = 32;
            v0 = (unsigned __int8)(v0 + 1);
          }
          if ( (int)(v1 + v0) > 88 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
          {
            snprintf(s, 0x800u, "offset[%d] ERR", v1 + v0);
            sub_3F178(3, s, 0);
          }
          v2[v1 + 1688 + v0] = 111;
          *((_DWORD *)&unk_B3AFC + 72 * i + v1 + 134) = 0;
          v1 = (unsigned __int8)(v1 + 1);
        }
        while ( *(unsigned __int8 *)(v4 + 2114) > v1 );
        v3 = v1 + v0;
        if ( v3 > 88 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 2) )
        {
          snprintf(s, 0x800u, "offset[%d] ERR", v3);
          sub_3F178(3, s, 0);
        }
      }
      else
      {
        v3 = 0;
      }
      *((_BYTE *)&unk_B3AFC + 88 * i + v3 + 1688) = 0;
    }
  }
}
