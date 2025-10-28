__int64 __fastcall sub_5EE60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // r0

  result = sub_5EED8();
  *a3 = a1 - a2 * result;
  return result;
}
