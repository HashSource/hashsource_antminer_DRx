__int64 __fastcall sub_B034(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // r0

  result = sub_B4C8();
  *a3 = a1 - result * a2;
  return result;
}
