void sub_21AE0()
{
  int v0; // r4
  int v1; // r7
  int v2; // r0
  int v3; // r3
  int v4; // r6
  _DWORD *v5; // r1
  int v6; // r6
  int v7; // r3
  bool v8; // zf
  char v9; // r3
  int v10; // r10
  int v11; // r9
  int v12; // r11
  const char *v13; // r0
  int v14; // r3
  const char *v15; // r0
  const char *v16; // r0
  int v17; // r0
  const char *v18; // r11
  const char *v19; // r0
  int v20; // [sp+20h] [bp-Ch]
  _DWORD *v21; // [sp+24h] [bp-8h]

  v21 = &unk_CB238;
  do
  {
    v0 = v21[1];
    ++v21;
    if ( v0 )
    {
      do
      {
        v1 = *(_DWORD *)v0;
        v2 = sub_212EC(v0 + 12, 0, *(_BYTE *)(v0 + 56));
        v3 = dword_7CF4C;
        v4 = v2;
        if ( dword_7CF4C > 3 )
        {
          v17 = *(_DWORD *)(v0 + 40);
          if ( v17 )
            v18 = (const char *)sub_50CD0(v17 + 20);
          else
            v18 = "<null>";
          v19 = (const char *)sub_50CD0(v0 + 12);
          printf(
            "peer_refresh_interface: %s->%s mode %d vers %d poll %d %d flags 0x%x 0x%x ttl %d key %08x: new interface: ",
            v18,
            v19,
            *(unsigned __int8 *)(v0 + 47),
            *(unsigned __int8 *)(v0 + 46),
            *(unsigned __int8 *)(v0 + 49),
            *(unsigned __int8 *)(v0 + 50),
            *(_DWORD *)(v0 + 52),
            *(unsigned __int8 *)(v0 + 56),
            *(unsigned __int8 *)(v0 + 59),
            *(_DWORD *)(v0 + 100));
          v3 = dword_7CF4C;
          if ( !v4 )
          {
            if ( dword_7CF4C > 3 )
              puts("<NONE>");
            goto LABEL_6;
          }
        }
        else if ( !v2 )
        {
          goto LABEL_6;
        }
        if ( v3 > 3 )
        {
          v10 = *(_DWORD *)(v4 + 12);
          v11 = *(_DWORD *)(v4 + 140);
          v12 = *(_DWORD *)(v4 + 172);
          v20 = *(_DWORD *)(v4 + 8);
          v13 = (const char *)sub_50CD0(v4 + 20);
          printf(
            "fd=%d, bfd=%d, name=%.16s, flags=0x%x, ifindex=%u, sin=%s",
            v20,
            v10,
            (const char *)(v4 + 104),
            v11,
            v12,
            v13);
          v14 = dword_7CF4C;
          if ( (*(_DWORD *)(v4 + 140) & 8) == 0 )
            goto LABEL_21;
          if ( dword_7CF4C > 3 )
          {
            v15 = (const char *)sub_50CD0(v4 + 76);
            printf(", bcast=%s", v15);
            v14 = dword_7CF4C;
LABEL_21:
            if ( v14 > 3 )
            {
              v16 = (const char *)sub_50CD0(v4 + 48);
              printf(", mask=%s\n", v16);
            }
          }
        }
LABEL_6:
        v5 = (_DWORD *)v4;
        v6 = *(_DWORD *)(v0 + 40);
        sub_21778(v0, v5);
        v7 = *(_DWORD *)(v0 + 40);
        if ( v7 )
        {
          v8 = v6 == v7;
          v9 = *(_BYTE *)(v0 + 56);
          if ( !v8 && (*(_BYTE *)(v0 + 56) & 0x10) == 0 && *(_BYTE *)(v0 + 68) != 5 )
          {
            sub_2310C(v0, "XFAC");
            v9 = *(_BYTE *)(v0 + 56);
          }
          if ( (v9 & 4) != 0 )
          {
            sub_14AC8(*(_DWORD *)(v0 + 40), (unsigned __int16 *)(v0 + 12));
            v9 = *(_BYTE *)(v0 + 56);
          }
          if ( (v9 & 2) != 0 )
            sub_14AE4(*(_DWORD *)(v0 + 40), (unsigned __int16 *)(v0 + 12));
        }
        v0 = v1;
      }
      while ( v1 );
    }
  }
  while ( v21 != (_DWORD *)&unk_CB438 );
}
