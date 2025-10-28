int __fastcall sub_8520(_BYTE *a1, int a2)
{
  unsigned __int16 i; // [sp+Eh] [bp-6h]

  for ( i = 0; a2-- > 0; i = dword_11130[(unsigned __int8)(HIBYTE(i) ^ *a1++)] ^ (i << 8) )
    ;
  return i;
}
