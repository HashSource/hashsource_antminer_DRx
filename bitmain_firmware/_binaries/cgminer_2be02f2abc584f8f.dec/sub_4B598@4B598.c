int __fastcall sub_4B598(_BYTE *a1, _DWORD *a2)
{
  int result; // r0

  result = sub_42544(1);
  *a2 = (unsigned __int8)result;
  *a1 = BYTE1(result) & 7;
  return result;
}
