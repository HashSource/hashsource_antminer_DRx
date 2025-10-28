int __fastcall sub_145AC4(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // [sp+8h] [bp-8h] BYREF

  if ( a2 )
    return _udivmoddi4(a1, HIDWORD(a1), a2, HIDWORD(a2), &v3);
  if ( a1 )
    HIDWORD(a1) = -1;
  LODWORD(v3) = HIDWORD(a1);
  return raise(8);
}
