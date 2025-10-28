int __fastcall sub_28E64(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r0

  if ( a1 && *a1 == 1 && sub_46864(a1) >= a2 && (v4 = (_DWORD *)sub_46880(a1, a2)) != 0 && *v4 == 2 )
    return sub_469F0(v4);
  else
    return 0;
}
