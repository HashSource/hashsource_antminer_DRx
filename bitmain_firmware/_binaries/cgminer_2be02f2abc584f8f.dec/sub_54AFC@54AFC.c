int __fastcall sub_54AFC(_DWORD *a1, __int16 a2)
{
  int v4; // r4
  int v5; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( sub_56A1C(v7) )
    return 0;
  if ( sub_54A38(a1, (int (__fastcall *)(__int16 *, int, int))sub_54A18, (int)v7, a2) )
  {
    v4 = 0;
  }
  else
  {
    v5 = sub_56A94(v7);
    v4 = sub_569C0(v5);
  }
  sub_56A54(v7);
  return v4;
}
