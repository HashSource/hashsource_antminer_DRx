int __fastcall sub_11D84(int result)
{
  int v1; // r4
  _BYTE v2[8]; // [sp+0h] [bp-8h] BYREF

  v1 = result;
  if ( *(_DWORD *)(result + 368) )
  {
    sub_2FE30(v2);
    return sub_3000C(v2, v1 + 368);
  }
  return result;
}
