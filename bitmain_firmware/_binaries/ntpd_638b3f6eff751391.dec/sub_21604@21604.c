int __fastcall sub_21604(int a1)
{
  int v1; // r3

  v1 = dword_CB03C[a1 & 0x7F];
  ++dword_CAC2C;
  for ( ; v1; v1 = *(_DWORD *)(v1 + 4) )
  {
    if ( *(unsigned __int16 *)(v1 + 44) == a1 )
      break;
  }
  return v1;
}
