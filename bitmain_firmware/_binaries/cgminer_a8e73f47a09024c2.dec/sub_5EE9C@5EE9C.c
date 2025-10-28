__int64 __fastcall sub_5EE9C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // r0

  result = sub_5F330();
  *a3 = a1 - result * a2;
  return result;
}
