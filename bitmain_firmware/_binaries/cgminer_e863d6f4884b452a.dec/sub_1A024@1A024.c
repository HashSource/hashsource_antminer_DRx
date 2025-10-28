int __fastcall sub_1A024(int result)
{
  int v1; // r4
  _BYTE v2[8]; // [sp+0h] [bp-8h] BYREF

  if ( *(_DWORD *)(result + 368) )
  {
    v1 = result;
    sub_2A69C(v2);
    return sub_2A8A4(v2, v1 + 368);
  }
  return result;
}
