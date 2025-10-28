int __fastcall sub_2310C(int a1, const char *a2)
{
  char v4; // r1
  int v5; // r0
  char v6; // r3
  bool v7; // nf
  double v8; // d16
  int result; // r0
  _QWORD *v10; // r1
  __int64 v11; // r2
  int v12; // r4
  int v13; // r12
  int v14; // r4
  bool v15; // zf
  int v16; // r0
  int v17; // r1

  memset((void *)(a1 + 104), 0, 0x190u);
  v4 = *(_BYTE *)(a1 + 49);
  *(_BYTE *)(a1 + 70) = *(_BYTE *)(a1 + 50);
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 436) = 1076887552;
  *(_BYTE *)(a1 + 48) = v4;
  v5 = sub_227C8(a1);
  v6 = byte_CB478;
  v7 = byte_CB478 < 0;
  *(_DWORD *)(a1 + 108) = v5;
  if ( v7 )
    v8 = 1.0 / (double)(1 << -v6);
  else
    v8 = (double)(1 << v6);
  result = *(_DWORD *)(a1 + 52);
  v10 = (_QWORD *)(a1 + 264);
  LODWORD(v11) = 0;
  v12 = a1;
  v13 = 0;
  *(double *)(a1 + 424) = v8;
  if ( (result & 0x1000) != 0 )
    *(_DWORD *)(a1 + 124) = 1;
  HIDWORD(v11) = 1076887552;
  do
  {
    *(_BYTE *)(v12 + 360) = v13++;
    *v10++ = v11;
    ++v12;
  }
  while ( v13 != 8 );
  if ( (result & 8) == 0 )
  {
    *(_BYTE *)(a1 + 69) = 16;
    *(_BYTE *)(a1 + 67) = 3;
    *(_DWORD *)(a1 + 88) = *(_DWORD *)a2;
  }
  v14 = dword_CB548;
  v15 = dword_CAA98 == 0;
  *(_DWORD *)(a1 + 516) = dword_CB548;
  *(_DWORD *)(a1 + 504) = v14;
  *(_DWORD *)(a1 + 520) = v14;
  if ( v15 )
  {
    if ( *(_BYTE *)(a1 + 47) == 2 )
    {
      *(_DWORD *)(a1 + 520) = v14 + (1 << dword_7A1CC);
    }
    else
    {
      v16 = sub_504EC();
      result = sub_5AA04(v16, dword_CAC28);
      *(_DWORD *)(a1 + 520) = v17 + v14;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 520) = dword_CAC28 + v14;
  }
  if ( dword_7CF4C )
    return printf(
             "peer_clear: at %ld next %ld associd %d refid %s\n",
             dword_CB548,
             *(_DWORD *)(a1 + 520),
             *(unsigned __int16 *)(a1 + 44),
             a2);
  return result;
}
