int jsonp_error_set(int result, int a2, int a3, int a4, char a5, char *format, ...)
{
  int v6; // r4
  va_list arg; // [sp+20h] [bp+14h] BYREF

  va_start(arg, format);
  v6 = result;
  if ( result )
  {
    if ( !*(_BYTE *)(result + 92) )
    {
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
      result = vsnprintf((char *)(result + 92), 0x9Fu, format, arg);
      *(_BYTE *)(v6 + 250) = 0;
      *(_BYTE *)(v6 + 251) = a5;
    }
  }
  return result;
}
