void __fastcall sub_3DE4C(int a1)
{
  _WORD *v2; // r0
  _WORD *v3; // r1
  __int16 v4; // r3
  unsigned int v5; // r2
  int v6; // t1
  unsigned int v7; // r5
  __int16 v8; // r3
  unsigned int v9; // r2
  int v10; // t1
  int v11; // r5
  _WORD v12[92]; // [sp+8h] [bp-8BCh] BYREF
  char v13[2052]; // [sp+C0h] [bp-804h] BYREF

  memset(&v12[1], 0, 0xB6u);
  v2 = v12;
  v3 = v12;
  v4 = 14994;
  LOWORD(v5) = -1;
  v12[0] = -224;
  while ( 1 )
  {
    v5 = (unsigned __int16)(v4 ^ ((_WORD)v5 << 8));
    v7 = v5 >> 8;
    if ( (_WORD *)((char *)&v12[90] + 1) == v3 )
      break;
    v6 = *((unsigned __int8 *)v3 + 1);
    v3 = (_WORD *)((char *)v3 + 1);
    v4 = *(_WORD *)&aBitmainDcrDete_0[2 * (v6 ^ v7) + 100];
  }
  v8 = 14994;
  LOWORD(v9) = -1;
  while ( 1 )
  {
    v9 = (unsigned __int16)(v8 ^ ((_WORD)v9 << 8));
    if ( v2 == v3 )
      break;
    v10 = *((unsigned __int8 *)v2 + 1);
    v2 = (_WORD *)((char *)v2 + 1);
    v8 = *(_WORD *)&aBitmainDcrDete_0[2 * (v10 ^ (v9 >> 8)) + 100];
  }
  v12[91] = v7 | ((_WORD)v9 << 8);
  if ( *((_BYTE *)&unk_73ED8 + a1 + 24) == 1 )
  {
    v11 = 0;
    do
    {
      sub_3C790((unsigned __int8)a1, 1, 0, 36, v11 | 0x8201);
      v11 += 0x10000;
      usleep(0x64u);
      sub_37A50((unsigned __int8)a1, v12, 0xB8u);
      sub_2A7F4();
    }
    while ( v11 != 18087936 );
  }
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v13, 0x800u, "chain %d %s end", a1, "open_core_chain");
    sub_343C4(7, v13, 0);
  }
}
