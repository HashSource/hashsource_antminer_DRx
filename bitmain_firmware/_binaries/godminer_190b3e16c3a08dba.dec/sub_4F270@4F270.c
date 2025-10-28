int __fastcall sub_4F270(_QWORD *a1, int *a2)
{
  int result; // r0
  int v4; // r2

  result = 0;
  v4 = dword_17AE20 + 1;
  if ( (unsigned int)(dword_17AE20 + 1) >= 0x4000 )
    v4 = 0;
  dword_17AE20 = v4;
  *a1 = *a2;
  return result;
}
