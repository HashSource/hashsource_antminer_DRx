_DWORD *__fastcall sub_550B4(_DWORD *a1)
{
  _DWORD *result; // r0
  unsigned int v3; // r3
  _DWORD *v4; // r1

  result = (_DWORD *)sub_54C7C((int)a1);
  if ( dword_696BC[a1[2]] )
  {
    v3 = 0;
    v4 = a1 + 3;
    do
    {
      result = (_DWORD *)(a1[1] + 8 * v3);
      result[1] = v4;
      *result = v4;
      ++v3;
    }
    while ( v3 < dword_696BC[a1[2]] );
  }
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  *a1 = 0;
  return result;
}
