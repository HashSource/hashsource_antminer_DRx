int __fastcall sub_36608(unsigned __int8 *a1)
{
  int v1; // r1
  __int16 v2; // r2
  int result; // r0

  v1 = a1[1];
  if ( (unsigned int)(v1 - 1) > 0xB )
    return -1;
  v2 = a1[3] + (a1[2] << 8);
  result = *a1 + *(_DWORD *)&aGps_2[4 * v1 + 4];
  if ( (v2 & 3) == 0 && (v2 % 100 || !(v2 % 400)) && v1 > 2 )
    ++result;
  return result;
}
