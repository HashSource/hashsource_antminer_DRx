int __fastcall sub_5821C(_QWORD *a1, int *a2)
{
  int result; // r0
  int v4; // r2

  result = 0;
  v4 = dword_1968E0 + 1;
  if ( (unsigned int)(dword_1968E0 + 1) >= 0x4000 )
    v4 = 0;
  dword_1968E0 = v4;
  *a1 = *a2;
  return result;
}
