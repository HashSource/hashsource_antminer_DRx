int __fastcall sub_27E00(__int64 a1, int a2)
{
  int v2; // r10
  unsigned int v4; // r9
  int v5; // r3
  int v6; // r2
  char v7; // r1
  char v8; // r1
  char v9; // r1
  char v10; // r1
  __int64 v11; // r4
  int v12; // r12
  int v13; // r12
  int v14; // r6
  int v15; // r2
  int (__fastcall *v16)(_DWORD, int, int); // r12

  v2 = HIDWORD(a1);
  if ( *(_WORD *)a1 == 2 )
  {
    v4 = bswap32(*(_DWORD *)(a1 + 4));
    if ( HIWORD(v4) << 16 == 2139029504 )
    {
      LODWORD(a1) = sub_21500((unsigned __int16 *)a1, 0, -1, 0);
      v5 = a1;
      if ( (_DWORD)a1 )
      {
        v6 = *(_DWORD *)(a1 + 60);
        if ( v6 )
        {
          if ( v2 )
          {
            BYTE4(a1) = *(_BYTE *)(v2 + 2);
            if ( (a1 & 0x100000000LL) != 0 )
            {
              a1 = *(_QWORD *)(v2 + 40);
              *(_QWORD *)(v6 + 728) = a1;
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x200000000LL) != 0 )
            {
              a1 = *(_QWORD *)(v2 + 48);
              *(_QWORD *)(v6 + 736) = a1;
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x400000000LL) != 0 )
            {
              v7 = *(_BYTE *)(v2 + 56);
              *(_BYTE *)(v6 + 744) = v7;
              *(_BYTE *)(v5 + 69) = v7;
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x800000000LL) != 0 )
            {
              HIDWORD(a1) = *(_DWORD *)(v2 + 60);
              *(_DWORD *)(v6 + 748) = HIDWORD(a1);
              *(_DWORD *)(v5 + 88) = HIDWORD(a1);
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x1000000000LL) != 0 )
            {
              v8 = *(_BYTE *)(v6 + 752) & 0xFE;
              *(_BYTE *)(v6 + 752) = v8;
              LODWORD(a1) = *(_BYTE *)(v2 + 1) & 1;
              *(_BYTE *)(v6 + 752) = v8 | a1;
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x2000000000LL) != 0 )
            {
              v9 = *(_BYTE *)(v6 + 752) & 0xFD;
              *(_BYTE *)(v6 + 752) = v9;
              LODWORD(a1) = *(_BYTE *)(v2 + 1) & 2;
              *(_BYTE *)(v6 + 752) = v9 | a1;
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x4000000000LL) != 0 )
            {
              v10 = *(_BYTE *)(v6 + 752) & 0xFB;
              *(_BYTE *)(v6 + 752) = v10;
              LODWORD(a1) = *(_BYTE *)(v2 + 1) & 4;
              *(_BYTE *)(v6 + 752) = v10 | a1;
              BYTE4(a1) = *(_BYTE *)(v2 + 2);
            }
            if ( (a1 & 0x8000000000LL) != 0 )
            {
              BYTE4(a1) = *(_BYTE *)(v6 + 752) & 0xF7;
              *(_BYTE *)(v6 + 752) = BYTE4(a1);
              LODWORD(a1) = *(_BYTE *)(v2 + 1) & 8;
              *(_BYTE *)(v6 + 752) = BYTE4(a1) | a1;
            }
          }
          if ( a2 )
          {
            *(_BYTE *)(a2 + 2) = -115;
            LODWORD(a1) = v6 + 40;
            v11 = *(_QWORD *)(v6 + 736);
            v12 = *(_DWORD *)(v6 + 748);
            *(_QWORD *)(a2 + 40) = *(_QWORD *)(v6 + 728);
            *(_QWORD *)(a2 + 48) = v11;
            HIDWORD(a1) = *(unsigned __int8 *)(v6 + 744);
            *(_DWORD *)(a2 + 60) = v12;
            *(_DWORD *)(a2 + 56) = HIDWORD(a1);
            *(_BYTE *)(a2 + 1) = *(_BYTE *)(v6 + 752);
            HIDWORD(a1) = *(_DWORD *)(v6 + 772);
            HIDWORD(v11) = *(_DWORD *)(v6 + 764);
            v13 = *(_DWORD *)(v6 + 768);
            v14 = dword_CB548;
            LODWORD(v11) = *(_DWORD *)(v6 + 756);
            *(_DWORD *)(a2 + 12) = *(_DWORD *)(v6 + 760);
            *(_DWORD *)(a2 + 16) = HIDWORD(v11);
            *(_DWORD *)(a2 + 20) = v13;
            *(_DWORD *)(a2 + 28) = v14 - v11;
            *(_DWORD *)(a2 + 24) = HIDWORD(a1);
            *(_BYTE *)(a2 + 65) = *(_BYTE *)(v6 + 34);
            *(_BYTE *)(a2 + 64) = *(_BYTE *)(v6 + 33);
            *(_BYTE *)a2 = *(_BYTE *)(v6 + 35);
            HIDWORD(a1) = *(_DWORD *)(v6 + 36);
            v15 = *(_DWORD *)(v6 + 168);
            *(_DWORD *)(a2 + 8) = a1;
            *(_DWORD *)(a2 + 32) = HIDWORD(a1);
            *(_WORD *)(a2 + 4) = v15;
          }
          v16 = (int (__fastcall *)(_DWORD, int, int))*((_DWORD *)*(&off_65B1C + BYTE1(v4)) + 3);
          if ( v16 )
            LODWORD(a1) = v16((unsigned __int8)v4, v2, a2);
        }
      }
    }
  }
  return a1;
}
