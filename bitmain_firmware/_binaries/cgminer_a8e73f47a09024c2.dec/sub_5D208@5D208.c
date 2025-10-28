int __fastcall sub_5D208(int result, int a2, int a3, int a4, char *format, __gnuc_va_list arg)
{
  int v6; // r4

  v6 = result;
  if ( result )
  {
    result = *(unsigned __int8 *)(result + 92);
    if ( !*(_BYTE *)(v6 + 92) )
    {
      *(_DWORD *)v6 = a2;
      *(_DWORD *)(v6 + 4) = a3;
      *(_DWORD *)(v6 + 8) = a4;
      result = vsnprintf((char *)(v6 + 92), 0xA0u, format, arg);
      *(_BYTE *)(v6 + 251) = 0;
    }
  }
  return result;
}
