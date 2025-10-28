int __fastcall sub_5942C(_DWORD *a1, __int16 a2)
{
  int v4; // r4
  int v5; // r0
  _BYTE v7[16]; // [sp+4h] [bp-10h] BYREF

  if ( sub_5B34C(v7) )
    return 0;
  if ( sub_59368(a1, (int (__fastcall *)(__int16 *, int, int))sub_59348, (int)v7, a2) )
  {
    v4 = 0;
  }
  else
  {
    v5 = sub_5B3C4(v7);
    v4 = sub_5B2F0(v5);
  }
  sub_5B384(v7);
  return v4;
}
