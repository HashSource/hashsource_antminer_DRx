int __fastcall sub_46454(_DWORD *a1, __int16 a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = 0;
  if ( !sub_478A8(v7) )
  {
    v4 = 0;
    if ( !sub_4642C(a1, (int (__fastcall *)(__int16 *, int, int))sub_45D8C, (int)v7, a2) )
    {
      v6 = sub_478EC(v7);
      v4 = sub_47870(v6);
    }
    sub_478C8(v7);
  }
  return v4;
}
