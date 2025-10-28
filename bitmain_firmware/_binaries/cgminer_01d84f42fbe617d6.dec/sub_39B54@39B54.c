int __fastcall sub_39B54(__int64 a1, _QWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)HIDWORD(a1) = *(_QWORD *)(v2 + 16);
    a1 = *(_QWORD *)(v2 + 24);
    *a2 = a1;
  }
  else
  {
    *(_QWORD *)HIDWORD(a1) = 0;
    *a2 = 0;
  }
  return a1;
}
