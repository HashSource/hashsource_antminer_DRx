void sub_4A938()
{
  int v0; // r6
  unsigned int v1; // r4
  char *v2; // r8
  char *v3; // r7
  int v4; // r4
  int v5; // [sp+4h] [bp-818h]
  int i; // [sp+Ch] [bp-810h]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v5 = 603403;
  for ( i = 0; i != 4; ++i )
  {
    if ( *(_BYTE *)++v5 )
    {
      if ( *(_BYTE *)(v5 + 1860) )
      {
        v0 = 0;
        v1 = 0;
        v2 = (char *)&unk_93504 + 70 * i;
        do
        {
          if ( (v1 & 7) == 0 )
          {
            if ( (int)(v1 + v0) > 70 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
            {
              snprintf(s, 0x800u, "offset[%d] ERR", v1 + v0);
              sub_3F1C0(3, s, 0);
            }
            v2[v1 + 1490 + v0] = 32;
            v0 = (unsigned __int8)(v0 + 1);
          }
          if ( (int)(v1 + v0) > 70 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
          {
            snprintf(s, 0x800u, "offset[%d] ERR", v1 + v0);
            sub_3F1C0(3, s, 0);
          }
          v2[v1 + 1490 + v0] = 111;
          v3 = (char *)&unk_93504 + 216 * i + 4 * v1 + 624;
          *((_WORD *)v3 + 1) = 0;
          *((_WORD *)v3 + 2) = 0;
          v1 = (unsigned __int8)(v1 + 1);
        }
        while ( *(unsigned __int8 *)(v5 + 1860) > v1 );
        v4 = v1 + v0;
        if ( v4 > 70 && (byte_78D98 || byte_75C08 || dword_734EC > 2) )
        {
          snprintf(s, 0x800u, "offset[%d] ERR", v4);
          sub_3F1C0(3, s, 0);
        }
      }
      else
      {
        v4 = 0;
      }
      *((_BYTE *)&unk_93504 + 70 * i + v4 + 1490) = 0;
    }
  }
}
