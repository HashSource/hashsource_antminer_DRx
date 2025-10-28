int __fastcall sub_AD24(unsigned int a1, const char *a2, int a3, const char *a4, int a5, int a6)
{
  int *v10; // r5
  int v11; // r7
  int result; // r0
  char s[2048]; // [sp+1Ch] [bp-808h] BYREF

  v10 = _errno_location();
  v11 = *v10;
  if ( (unsigned __int8)(a1 & 7) <= dword_16000 )
  {
    _vsnprintf_chk(s, 2048, 1, 2048, a5, a6);
    s[2047] = 0;
    result = sub_A138(a1, a2, a3, a4, 0, 0, s);
  }
  else
  {
    result = 0;
  }
  *v10 = v11;
  return result;
}
