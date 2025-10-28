int __fastcall strbuffer_clear(int result)
{
  _BYTE *v1; // r2

  v1 = *(_BYTE **)result;
  *(_DWORD *)(result + 4) = 0;
  *v1 = 0;
  return result;
}
