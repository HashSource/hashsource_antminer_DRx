int __fastcall sub_8B84(int a1)
{
  _BYTE v2[40]; // [sp+Ch] [bp-28h] BYREF

  if ( sub_8B54(a1, 1, 0, 1, (int)v2) )
    return -1;
  else
    return v2[0];
}
