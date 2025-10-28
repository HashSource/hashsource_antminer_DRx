_BYTE *__fastcall sub_2D050(_BYTE *result, char *a2, int a3)
{
  _BYTE *v3; // r4
  char v4; // t1

  if ( a3 <= 0 )
  {
    v3 = result;
  }
  else
  {
    v3 = &result[2 * a3];
    do
    {
      *result = *((_BYTE *)&dword_6740C[277] + ((unsigned __int8)*a2 >> 4));
      v4 = *a2++;
      result[1] = *((_BYTE *)&dword_6740C[277] + (v4 & 0xF));
      result += 2;
    }
    while ( v3 != result );
  }
  *v3 = 0;
  return result;
}
