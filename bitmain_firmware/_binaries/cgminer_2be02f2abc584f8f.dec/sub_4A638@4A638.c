void __fastcall sub_4A638(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r4
  int v4; // r5
  char s[2040]; // [sp+8h] [bp-8B8h] BYREF
  _WORD v6[92]; // [sp+808h] [bp-B8h] BYREF

  memset(v6, 0, sizeof(v6));
  v6[0] = 32544;
  v2 = sub_41FF4(0xFFFFu, (unsigned __int8 *)v6, 182);
  v6[91] = (v2 >> 8) | ((_WORD)v2 << 8);
  if ( *((_BYTE *)&unk_93504 + a1 + 8) == 1 )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      if ( v3 > 0x1F )
      {
        if ( v3 - 32 > 0x1F )
        {
          if ( v3 - 64 > 0x1F )
          {
            if ( v3 - 96 > 0x1F )
            {
              if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
              {
                snprintf(s, 0x800u, "%s: which_core = %d, error!!!\n", "open_core_chain", v3);
                sub_3F1C0(7, s, 0);
              }
            }
            else
            {
              if ( v3 == 96 )
                v4 = 0;
              v4 = (2 * v4) | 1;
              sub_47C40((unsigned __int8)a1, 1, 0, 92, v4);
            }
          }
          else
          {
            if ( v3 == 64 )
              v4 = 0;
            v4 = (2 * v4) | 1;
            sub_47C40((unsigned __int8)a1, 1, 0, 88, v4);
          }
        }
        else
        {
          if ( v3 == 32 )
            v4 = 0;
          v4 = (2 * v4) | 1;
          sub_47C40((unsigned __int8)a1, 1, 0, 84, v4);
        }
      }
      else
      {
        if ( !v3 )
          v4 = 0;
        v4 = (2 * v4) | 1;
        sub_47C40((unsigned __int8)a1, 1, 0, 80, v4);
      }
      sub_429E0((unsigned __int8)a1, v6, 0xB8u);
      sub_2FF20();
      ++v3;
    }
    while ( v3 != 120 );
    sub_47BD4((unsigned __int8)a1, 1, 0, 80);
    sub_47BD4((unsigned __int8)a1, 1, 0, 84);
    sub_47BD4((unsigned __int8)a1, 1, 0, 88);
    sub_47BD4((unsigned __int8)a1, 1, 0, 92);
  }
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "chain %d %s end", a1, "open_core_chain");
    sub_3F1C0(7, s, 0);
  }
}
