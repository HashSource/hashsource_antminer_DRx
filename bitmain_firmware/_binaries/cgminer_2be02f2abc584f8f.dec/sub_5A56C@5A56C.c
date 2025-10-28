__int64 __fastcall sub_5A56C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // r0

  result = sub_5AA00();
  *a3 = a1 - result * a2;
  return result;
}
