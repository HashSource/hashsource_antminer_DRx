_QWORD *__fastcall sub_46A94(__int64 a1)
{
  _QWORD *result; // r0

  result = sub_45DE4(0x10u);
  if ( result )
  {
    result[1] = a1;
    *(_DWORD *)result = 3;
    *((_DWORD *)result + 1) = 1;
  }
  return result;
}
