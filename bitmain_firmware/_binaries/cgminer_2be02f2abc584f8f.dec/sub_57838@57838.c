_DWORD *__fastcall sub_57838(__int64 a1)
{
  _DWORD *result; // r0

  result = sub_56978(0x10u);
  if ( !result )
    return 0;
  *result = 3;
  result[1] = 1;
  *((_QWORD *)result + 1) = a1;
  return result;
}
