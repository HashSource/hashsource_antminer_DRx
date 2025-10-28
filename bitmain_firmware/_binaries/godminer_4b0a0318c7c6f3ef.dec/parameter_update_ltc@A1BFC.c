int __fastcall parameter_update_ltc(int a1, char a2, int a3, char a4, int a5)
{
  int v7; // r1
  int result; // r0
  int v10; // r4
  int v11; // r7
  __int64 v12; // r0

  if ( *(_BYTE *)(a1 + 260) )
    return 0;
  if ( (unsigned int)(a3 - 900) <= 0x3E8 )
    v7 = a2 & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    v11 = a1 + 1024;
    LODWORD(v12) = sub_145AC4(*(_QWORD *)(a1 + 1016), a3);
    *(_QWORD *)(v11 - 8) = v12 * (int)*(float *)(a1 + 996);
    *(float *)(a1 + 996) = (float)a3;
  }
  result = 0;
  if ( (unsigned int)(a5 - 1400) <= 0x96 )
    v10 = a4 & 1;
  else
    v10 = 0;
  if ( v10 )
    *(_DWORD *)(a1 + 1000) = a5;
  return result;
}
