int sub_48A60(int result, int a2, int a3, int a4, const char *arg, ...)
{
  int v5; // r5
  va_list va; // [sp+24h] [bp+18h] BYREF

  va_start(va, arg);
  if ( result )
  {
    v5 = result;
    if ( !*(_BYTE *)(result + 92) )
    {
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
      result = vsnprintf((char *)(result + 92), 0xA0u, arg, va);
      *(_BYTE *)(v5 + 251) = 0;
    }
  }
  return result;
}
