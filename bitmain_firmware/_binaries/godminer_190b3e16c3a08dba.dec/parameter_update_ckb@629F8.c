int __fastcall parameter_update_ckb(int a1, char a2, int a3, char a4, int a5)
{
  int v8; // r1
  int result; // r0
  int v10; // r3
  _QWORD *v11; // r7
  double v12; // r0

  if ( *(_BYTE *)(a1 + 228) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x2EE )
    v8 = a2 & 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v11 = (_QWORD *)(a1 + 944);
    LODWORD(v12) = sub_12E0FC(*(_QWORD *)(a1 + 944));
    *v11 = (unsigned __int64)(v12 / (double)a3 * *(float *)(a1 + 924));
    *(float *)(a1 + 924) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x12C )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 928) = a5;
  return result;
}
