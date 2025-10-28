size_t __fastcall sub_1AC4C(int a1, int a2)
{
  size_t result; // r0
  unsigned int v3; // r1
  char *v4; // r0
  char *v5; // r3
  __int16 v6; // r3
  char *v7; // r7
  const char **v8; // r4
  char *v9; // r5
  size_t v10; // r0
  const void *v11; // r1
  size_t v12; // r3
  size_t v13; // r2
  char *v14; // r12
  char *v15; // r0
  int v16; // r1
  int v17; // r2
  char s[468]; // [sp+4h] [bp-1D4h] BYREF
  _BYTE vars0[24]; // [sp+1D8h] [bp+0h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0u:
      return (size_t)sub_1A444((char *)off_79F24, ((*(_DWORD *)(a2 + 52) ^ 2u) >> 1) & 1);
    case 1u:
      return (size_t)sub_1A444(off_79F2C, *(_DWORD *)(a2 + 100) != 0);
    case 2u:
      return (size_t)sub_1A444(off_79F34, (*(_DWORD *)(a2 + 52) >> 2) & 1);
    case 3u:
      return (size_t)sub_19F28(off_79F3C, 0, a2 + 12);
    case 4u:
      return (size_t)sub_1A444(off_79F44, (unsigned __int16)((*(_WORD *)(a2 + 14) << 8) | HIBYTE(*(_WORD *)(a2 + 14))));
    case 5u:
      v16 = *(_DWORD *)(a2 + 40);
      if ( v16 )
        v17 = v16 + 20;
      else
        v17 = 0;
      if ( v16 )
        v16 = 0;
      return (size_t)sub_19F28(off_79F4C, v16, v17);
    case 6u:
      v3 = *(_DWORD *)(a2 + 40);
      v4 = off_79F54;
      if ( v3 )
        v3 = (unsigned __int16)((*(_WORD *)(v3 + 22) << 8) | HIBYTE(*(_WORD *)(v3 + 22)));
      return (size_t)sub_1A444(v4, v3);
    case 7u:
      return (size_t)sub_1A444(off_79F5C, *(unsigned __int8 *)(a2 + 67));
    case 8u:
      return (size_t)sub_1A444(off_79F64, *(unsigned __int8 *)(a2 + 47));
    case 9u:
      return (size_t)sub_1A444(off_79F6C, *(unsigned __int8 *)(a2 + 69));
    case 0xAu:
      return (size_t)sub_1A444(off_79F74, *(unsigned __int8 *)(a2 + 70));
    case 0xBu:
      return (size_t)sub_1A444(off_79F7C, *(unsigned __int8 *)(a2 + 48));
    case 0xCu:
      return (size_t)sub_19E64(off_79F84, *(char *)(a2 + 71));
    case 0xDu:
      return (size_t)sub_1A270(off_79F8C);
    case 0xEu:
      return (size_t)sub_1A270(off_79F94);
    case 0xFu:
      if ( (*(_DWORD *)(a2 + 52) & 8) != 0 || (unsigned int)*(unsigned __int8 *)(a2 + 69) - 2 > 0xD )
        return (size_t)sub_1A010((unsigned __int8 *)off_79F9C, *(_DWORD *)(a2 + 88));
      else
        return (size_t)sub_19F28(off_79F9C, *(_DWORD *)(a2 + 88), 0);
    case 0x10u:
      return (size_t)sub_1A104(off_79FA4, (_DWORD *)(a2 + 92));
    case 0x11u:
      return (size_t)sub_1A104(off_79FAC, (_DWORD *)(a2 + 392));
    case 0x12u:
      return (size_t)sub_1A104(off_79FB4, (_DWORD *)(a2 + 384));
    case 0x13u:
      if ( *(double *)(a2 + 440) != 0.0 )
        return (size_t)sub_1A270(off_79FBC);
      return result;
    case 0x14u:
      return (size_t)sub_1AB88((char *)off_79FC4, *(unsigned __int8 *)(a2 + 106));
    case 0x15u:
      return (size_t)sub_1A444(off_79FCC, *(_DWORD *)(a2 + 508));
    case 0x16u:
      return (size_t)sub_1A444(off_79FD4, *(_DWORD *)(a2 + 520) - dword_CB548);
    case 0x17u:
      return (size_t)sub_1A270((char *)off_79FDC);
    case 0x18u:
      return (size_t)sub_1A270(off_79FE4);
    case 0x19u:
      return (size_t)sub_1A270((char *)off_79FEC);
    case 0x1Au:
      return (size_t)sub_1A270(off_79FF4);
    case 0x1Bu:
      v3 = *(_DWORD *)(a2 + 100);
      v4 = off_79FFC;
      if ( v3 < 0x10000 )
        return (size_t)sub_1A444(v4, v3);
      return (size_t)sub_1AB88(off_79FFC, v3);
    case 0x1Cu:
      return (size_t)sub_1AA84(off_7A004, a2 + 136, *(_DWORD *)(a2 + 128));
    case 0x1Du:
      return (size_t)sub_1AA84(off_7A00C, a2 + 200, *(_DWORD *)(a2 + 128));
    case 0x1Eu:
      return (size_t)sub_1A444(off_7A014, *(unsigned __int8 *)(a2 + 68));
    case 0x1Fu:
      return (size_t)sub_1A444(off_7A01C, *(_DWORD *)(a2 + 548));
    case 0x20u:
      v3 = *(_DWORD *)(a2 + 544);
      v4 = off_7A024;
      return (size_t)sub_1A444(v4, v3);
    case 0x21u:
      return (size_t)sub_1AA84(off_7A02C, a2 + 264, *(_DWORD *)(a2 + 128));
    case 0x22u:
      return (size_t)sub_1AB88(off_7A034, *(_DWORD *)(a2 + 108));
    case 0x23u:
      if ( *(_BYTE *)(a2 + 59) )
        return (size_t)sub_19E64(off_7A03C, (unsigned __int8)byte_CB460[*(unsigned __int8 *)(a2 + 59)]);
      return result;
    case 0x24u:
      v5 = &s[strlen(off_7A044) + 4];
      result = (size_t)vars0;
      if ( vars0 < v5 )
        return result;
      snprintf(s, 0x1D4u, "%s=\"", off_7A044);
      result = strlen(s);
      LOBYTE(v6) = word_79F1A;
      v7 = &s[result];
      if ( (word_79F1A & 0x80) != 0 )
      {
        v9 = &s[result];
      }
      else
      {
        v8 = (const char **)&unk_79F20;
        v9 = &s[result];
        do
        {
          if ( (v6 & 0x40) == 0 )
          {
            v10 = strlen(*(v8 - 1));
            v11 = *(v8 - 1);
            v12 = v10;
            v13 = v10;
            v14 = &v9[v10 + 1];
            result = (size_t)vars0;
            if ( vars0 <= v14 )
              break;
            if ( v9 != v7 )
              *v9++ = 44;
            v15 = v9;
            v9 += v12;
            result = (size_t)memcpy(v15, v11, v13);
          }
          v6 = *((_WORD *)v8 + 1);
          v8 += 2;
        }
        while ( (v6 & 0x80) == 0 );
      }
      if ( vars0 > v9 + 2 )
      {
        *v9 = 34;
        v9[1] = 0;
        return (size_t)sub_19D60(s, v9 + 1 - s, 0);
      }
      return result;
    case 0x25u:
      if ( *(double *)(a2 + 472) > 0.0 )
        return (size_t)sub_1A270(off_7A04C);
      return result;
    case 0x26u:
      if ( *(double *)(a2 + 496) > 0.0 )
        return (size_t)sub_1A270((char *)off_7A054);
      return result;
    case 0x27u:
      v3 = *(_DWORD *)(a2 + 512);
      v4 = off_7A05C;
      return (size_t)sub_1A444(v4, v3);
    case 0x28u:
      if ( *(double *)(a2 + 448) != 0.0 )
        return (size_t)sub_1A270(off_7A064);
      return result;
    default:
      return result;
  }
}
