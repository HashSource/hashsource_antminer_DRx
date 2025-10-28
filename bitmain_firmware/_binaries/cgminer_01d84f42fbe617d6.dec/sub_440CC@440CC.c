int __fastcall sub_440CC(_DWORD *a1, __int16 a2)
{
  int v4; // r4
  int v6; // r0
  _BYTE v7[12]; // [sp+4h] [bp-Ch] BYREF

  v4 = sub_45E94(v7);
  if ( v4 )
    return 0;
  if ( !sub_4401C(a1, (int (__fastcall *)(const char *, int, int))sub_43934, (int)v7, a2) )
  {
    v6 = sub_45F0C(v7);
    v4 = sub_45E2C(v6);
  }
  sub_45ECC(v7);
  return v4;
}
