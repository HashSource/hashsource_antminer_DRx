int __fastcall sub_39B80(int a1)
{
  int v1; // r6
  int v2; // r8
  double *v3; // r10
  double v4; // r0
  int v5; // r3
  double v6; // d0
  int v7; // r7
  int result; // r0

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 28);
  v2 = 0;
  v3 = (double *)&unk_68928;
  if ( *(_DWORD *)(v1 + 4328) )
    *(_DWORD *)(v1 + 52) = 1;
  *(_BYTE *)(a1 + 67) = 3;
  *(_DWORD *)(v1 + 4332) = 0;
  *(_DWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 4328) = 0;
  *(_DWORD *)(v1 + 2128) = 8;
  *(_DWORD *)(v1 + 2116) = 127;
  LODWORD(v4) = memset((void *)(v1 + 2200), 0, 0x438u);
  do
  {
    v5 = 216 * v2;
    v6 = *v3++;
    ++v2;
    v7 = v1 + v5 + 2200;
    *(_DWORD *)v7 = *(_DWORD *)(v1 + 2116);
    *(_DWORD *)(v7 + 96) = 256;
    floor(v4);
    sprintf((char *)(v7 + 100), "WV%.0f", v6);
    *(_DWORD *)(v7 + 200) = 512;
    LODWORD(v4) = sprintf((char *)(v7 + 204), "WH%.0f", v6);
  }
  while ( v2 != 5 );
  *(_DWORD *)(v1 + 3284) = 2;
  result = sub_399F8(a1);
  *(_DWORD *)(v1 + 3288) = *(_DWORD *)(v1 + 3284);
  return result;
}
