int __fastcall sub_482A8(double a1)
{
  if ( LODWORD(a1) && *(_DWORD *)LODWORD(a1) == 3 )
    a1 = sub_4A0BC(*(_DWORD *)(LODWORD(a1) + 8), *(_DWORD *)(LODWORD(a1) + 12));
  return LODWORD(a1);
}
