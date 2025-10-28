int __fastcall sub_364C8(int result)
{
  _BYTE *v1; // r2

  v1 = *(_BYTE **)(result + 4);
  *(_DWORD *)(result + 8) = v1;
  *v1 = 0;
  *(_BYTE *)(result + 13) = 0;
  return result;
}
