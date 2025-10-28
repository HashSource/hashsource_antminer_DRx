__int64 __fastcall sub_5AA70(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // r0

  result = sub_5AAE8();
  *a3 = a1 - a2 * result;
  return result;
}
