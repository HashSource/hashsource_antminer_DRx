int __fastcall sub_3E7D8(_BYTE *a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(dword_6FAEC + 4);
  *a2 = (unsigned __int8)v2;
  *a1 = BYTE1(v2) & 7;
  return v2;
}
