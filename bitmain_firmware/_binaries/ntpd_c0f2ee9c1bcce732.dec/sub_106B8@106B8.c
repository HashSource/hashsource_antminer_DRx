_QWORD *__fastcall sub_106B8(int a1)
{
  __int64 v1; // d0
  _QWORD *v3; // r6
  _DWORD *v4; // r0
  _DWORD *v5; // r7
  int v6; // r2

  v3 = (_QWORD *)sub_10D64(48);
  v3[1] = 0;
  *v3 = v1;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0x3F50624DD2F1A9FCLL;
  v3[5] = 0x3F50624DD2F1A9FCLL;
  v4 = (_DWORD *)sub_10DB4(a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = *v4;
    while ( 1 )
    {
      switch ( v6 )
      {
        case 416:
          v3[1] = *((_QWORD *)v5 + 1);
          break;
        case 417:
          v3[2] = *((_QWORD *)v5 + 1);
          break;
        case 418:
          v3[3] = *((_QWORD *)v5 + 1);
          break;
        case 419:
          v3[4] = *((_QWORD *)v5 + 1);
          break;
        case 420:
          v3[5] = *((_QWORD *)v5 + 1);
          break;
        default:
          sub_4FE78(3, "Unknown script token %d", v6);
          v6 = *v5;
          break;
      }
    }
  }
  return v3;
}
