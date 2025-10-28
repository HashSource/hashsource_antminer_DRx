int __fastcall rev(int result, char a2)
{
  char v2; // [sp+Dh] [bp+Dh]
  unsigned __int8 i; // [sp+Eh] [bp+Eh]
  unsigned __int8 v4; // [sp+Fh] [bp+Fh]

  v4 = 0;
  for ( i = a2 - 1; v4 < (unsigned int)i; --i )
  {
    v2 = *(_BYTE *)(result + v4);
    *(_BYTE *)(result + v4) = *(_BYTE *)(result + i);
    *(_BYTE *)(result + i) = v2;
    ++v4;
  }
  return result;
}
