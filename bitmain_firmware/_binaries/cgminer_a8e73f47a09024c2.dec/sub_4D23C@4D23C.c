void __fastcall sub_4D23C(int a1)
{
  unsigned int v2; // r0
  int i; // r4
  char s[2040]; // [sp+8h] [bp-8B8h] BYREF
  _WORD v5[92]; // [sp+808h] [bp-B8h] BYREF

  memset(v5, 0, sizeof(v5));
  v5[0] = -224;
  v2 = sub_432AC(0xFFFFu, (unsigned __int8 *)v5, 182);
  v5[91] = (v2 >> 8) | ((_WORD)v2 << 8);
  if ( *((_BYTE *)&unk_B3AFC + a1 + 24) == 1 )
  {
    for ( i = 0; i != 276; ++i )
    {
      sub_4B140((unsigned __int8)a1, 1, 0, 36, ((i & 0x1FF) << 16) | 0x8201);
      usleep(0x64u);
      sub_43CC0((unsigned __int8)a1, v5, 0xB8u);
      sub_30140();
    }
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "chain %d %s end", a1, "open_core_chain");
    sub_3F178(7, s, 0);
  }
}
