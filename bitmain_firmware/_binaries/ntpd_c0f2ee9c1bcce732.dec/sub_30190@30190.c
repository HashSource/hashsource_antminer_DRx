ssize_t __fastcall sub_30190(int a1, int a2)
{
  int *v3; // r4
  _DWORD *v4; // r3
  ssize_t result; // r0

  v3 = *(int **)(a2 + 60);
  v4 = (_DWORD *)v3[7];
  if ( *v4 )
    --*v4;
  else
    sub_27040(a2, 1);
  result = write(v3[5], ":PTIME:TCODE?\r", 0xEu);
  if ( result != 14 )
    return sub_27040(a2, 3);
  ++v3[190];
  return result;
}
