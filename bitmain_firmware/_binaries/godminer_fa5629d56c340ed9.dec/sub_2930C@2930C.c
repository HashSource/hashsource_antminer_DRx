_DWORD *__fastcall sub_2930C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // r0
  _BYTE v5[16]; // [sp+4h] [bp-10h] BYREF

  result = (_DWORD *)get_miner_working_status((int)v5);
  if ( a1 )
  {
    if ( a2 )
      return sub_29164(a1, a2, -v5[5]);
  }
  return result;
}
