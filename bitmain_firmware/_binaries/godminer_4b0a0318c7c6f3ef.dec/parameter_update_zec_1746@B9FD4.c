int __fastcall parameter_update_zec_1746(int a1, char a2, int a3, char a4, int a5)
{
  int v8; // r1
  int result; // r0
  int v10; // r3
  int v11; // r7
  double v12; // r0

  if ( *(_BYTE *)(a1 + 260) )
    return 0;
  if ( (unsigned int)(a3 - 50) <= 0x352 )
    v8 = a2 & 1;
  else
    v8 = 0;
  if ( v8 )
  {
    v11 = a1 + 1024;
    LODWORD(v12) = sub_14579C(*(_QWORD *)(a1 + 1016));
    *(_QWORD *)(v11 - 8) = (unsigned __int64)(v12 / (double)a3 * *(float *)(a1 + 996));
    *(float *)(a1 + 996) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1200) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 1000) = a5;
  return result;
}
