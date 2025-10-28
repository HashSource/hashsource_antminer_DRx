int __fastcall sub_33434(int result)
{
  int v1; // r4
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r1
  int *v5; // r4
  int v6; // r1
  int v7; // r3
  int *v8; // r4
  int v9; // r1
  int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r1
  unsigned int v13; // r1
  unsigned int v14; // r1
  unsigned int v15; // r1
  int v16; // r2
  __int16 v17; // r3
  __int16 v18; // r7
  __int16 v19; // r12
  int v20; // r4
  __int16 v21; // r3
  int i; // r3
  __int16 v23; // r7
  int v24; // r7
  int v25; // r7
  int v26; // r1
  int v27; // r1

  v1 = result;
  v2 = *(_DWORD *)(result + 8);
  if ( dword_7CF4C )
    result = fprintf(
               (FILE *)stderr,
               "leitch_recieve(%*.*s)\n",
               *(_DWORD *)(result + 88),
               *(_DWORD *)(result + 88),
               (const char *)(result + 92));
  if ( *(_DWORD *)(v1 + 88) == 7 )
  {
    switch ( *(_WORD *)(v2 + 48) )
    {
      case 0:
        return result;
      case 1:
        v10 = *(unsigned __int8 *)(v1 + 92);
        if ( (unsigned int)(v10 - 48) > 9 )
          goto LABEL_48;
        v11 = *(unsigned __int8 *)(v1 + 93);
        if ( v11 <= 0x2F )
          goto LABEL_48;
        if ( v11 > 0x39 )
          goto LABEL_48;
        v12 = *(unsigned __int8 *)(v1 + 94);
        if ( v12 <= 0x2F )
          goto LABEL_48;
        if ( v12 > 0x39 )
          goto LABEL_48;
        v13 = *(unsigned __int8 *)(v1 + 95);
        if ( v13 <= 0x2F )
          goto LABEL_48;
        if ( v13 > 0x39 )
          goto LABEL_48;
        v14 = *(unsigned __int8 *)(v1 + 96);
        if ( v14 <= 0x2F )
          goto LABEL_48;
        if ( v14 > 0x39 )
          goto LABEL_48;
        v15 = *(unsigned __int8 *)(v1 + 97);
        if ( v15 <= 0x2F )
          goto LABEL_48;
        if ( v15 > 0x39 )
          goto LABEL_48;
        v16 = (unsigned __int16)(v11 - 528 + 10 * v10);
        result = (unsigned __int16)v16;
        *(_WORD *)(v2 + 34) = v16;
        v17 = *(unsigned __int8 *)(v1 + 95) - 528 + 10 * *(unsigned __int8 *)(v1 + 94);
        *(_WORD *)(v2 + 38) = v17;
        v18 = *(unsigned __int8 *)(v1 + 97);
        v19 = *(unsigned __int8 *)(v1 + 96);
        v20 = v17;
        v21 = v18 - 528 + 10 * v19;
        *(_WORD *)(v2 + 40) = v21;
        if ( v20 > 12 || v21 > (int)byte_66AC0[v20 - 1] )
        {
LABEL_48:
          *(_WORD *)(v2 + 48) = 0;
        }
        else
        {
          *(_WORD *)(v2 + 36) = v21;
          for ( i = 0; v20 - 1 > i; ++i )
          {
            v23 = byte_66AC0[i];
            *(_WORD *)(v2 + 36) += v23;
          }
          if ( (__int16)v16 <= 90 )
            v24 = 2000;
          else
            v24 = 1900;
          v25 = v16 + v24;
          if ( (v25 & 3) != 0 || (sub_5AA04(v25, 100), !v26) && (sub_5AA04(v25, 400), v27) )
          {
            if ( v20 > 2 )
              --*(_WORD *)(v2 + 36);
          }
          if ( dword_7CF4C )
            fprintf((FILE *)stderr, "write leitch %s\n", "T\r");
          result = write(*(_DWORD *)(v2 + 24), "T\r", 3u);
          if ( result < 0 )
          {
            if ( dword_7CF4C )
              result = fprintf((FILE *)stderr, "leitch_send: unit %d send failed\n", *(unsigned __int8 *)(v2 + 32));
            else
              result = sub_4FE78(3, "leitch_send: unit %d send failed %m", *(unsigned __int8 *)(v2 + 32));
          }
          if ( dword_7CF4C )
            result = fprintf((FILE *)stderr, "%u\n", *(__int16 *)(v2 + 36));
          *(_WORD *)(v2 + 48) = 2;
        }
        break;
      case 2:
        sub_33340((unsigned __int8 *)v1, (_WORD *)v2);
        result = sub_4EFC8(
                   *(__int16 *)(v2 + 36),
                   *(__int16 *)(v2 + 42),
                   *(__int16 *)(v2 + 46),
                   *(__int16 *)(v2 + 44),
                   1,
                   *(_DWORD *)(v1 + 76),
                   v2 + 100,
                   v2 + 52);
        if ( !result )
          goto LABEL_18;
        v7 = dword_7CF4C;
        *(_DWORD *)(v2 + 56) = 0;
        if ( v7 )
          fprintf((FILE *)stderr, "%lu\n", *(_DWORD *)(v2 + 52));
        v8 = (int *)(v1 + 76);
        *(_DWORD *)(v2 + 56) = dword_7BD68[(*(unsigned __int16 *)(v2 + 50) >> 5) & 0x1F]
                             + dword_7BDE8[*(_WORD *)(v2 + 50) & 0x1F];
        result = *v8;
        v9 = v8[1];
        *(_WORD *)(v2 + 48) = 3;
        *(_DWORD *)(v2 + 76) = result;
        *(_DWORD *)(v2 + 80) = v9;
        break;
      case 3:
        sub_33340((unsigned __int8 *)v1, (_WORD *)v2);
        result = sub_4EFC8(
                   *(__int16 *)(v2 + 36),
                   *(__int16 *)(v2 + 42),
                   *(__int16 *)(v2 + 46),
                   *(__int16 *)(v2 + 44),
                   1,
                   *(_DWORD *)(v1 + 76),
                   v2 + 100,
                   v2 + 60);
        if ( !result )
          goto LABEL_18;
        if ( dword_7CF4C )
          fprintf((FILE *)stderr, "%lu\n", *(_DWORD *)(v2 + 60));
        v5 = (int *)(v1 + 76);
        *(_DWORD *)(v2 + 64) = dword_7BD68[(*(unsigned __int16 *)(v2 + 50) >> 5) & 0x1F]
                             + dword_7BDE8[*(_WORD *)(v2 + 50) & 0x1F];
        result = *v5;
        v6 = v5[1];
        *(_WORD *)(v2 + 48) = 4;
        *(_DWORD *)(v2 + 84) = result;
        *(_DWORD *)(v2 + 88) = v6;
        break;
      case 4:
        sub_33340((unsigned __int8 *)v1, (_WORD *)v2);
        result = sub_4EFC8(
                   *(__int16 *)(v2 + 36),
                   *(__int16 *)(v2 + 42),
                   *(__int16 *)(v2 + 46),
                   *(__int16 *)(v2 + 44),
                   0,
                   *(_DWORD *)(v1 + 76),
                   v2 + 100,
                   v2 + 68);
        if ( result )
        {
          if ( dword_7CF4C )
            fprintf((FILE *)stderr, "%lu\n", *(_DWORD *)(v2 + 68));
          v3 = (_DWORD *)(v1 + 76);
          *(_DWORD *)(v2 + 72) = dword_7BD68[(*(unsigned __int16 *)(v2 + 50) >> 5) & 0x1F]
                               + dword_7BDE8[*(_WORD *)(v2 + 50) & 0x1F];
          v4 = v3[1];
          *(_DWORD *)(v2 + 92) = *v3;
          *(_DWORD *)(v2 + 96) = v4;
          result = sub_276A0(*(_DWORD *)v2);
          *(_WORD *)(v2 + 48) = 0;
        }
        else
        {
LABEL_18:
          *(_WORD *)(v2 + 48) = result;
        }
        break;
      default:
        result = sub_4FE78(
                   3,
                   "leitech_receive: invalid state %d unit %d",
                   *(__int16 *)(v2 + 48),
                   *(unsigned __int8 *)(v2 + 32));
        break;
    }
  }
  return result;
}
