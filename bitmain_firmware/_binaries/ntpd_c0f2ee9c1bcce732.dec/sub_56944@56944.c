_DWORD *__fastcall sub_56944(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r4
  int v5; // r12
  int v6; // r3

  v2 = *(unsigned __int16 *)a2;
  *result = v2;
  if ( v2 == 2 )
  {
    v3 = a2[1];
    result[5] = 0;
    result[1] = v3;
  }
  else
  {
    if ( v2 != 10 )
      off_7C9FC("./../lib/isc/netaddr.c", 359, 2, "0");
    v4 = a2[3];
    v5 = a2[4];
    v6 = a2[5];
    result[1] = a2[2];
    result[2] = v4;
    result[3] = v5;
    result[4] = v6;
    result[5] = a2[6];
  }
  return result;
}
