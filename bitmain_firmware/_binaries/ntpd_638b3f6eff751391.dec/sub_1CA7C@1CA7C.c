int __fastcall sub_1CA7C(unsigned __int16 *a1, int a2, int a3)
{
  int *v4; // r0

  v4 = sub_1BA48(a1, a2);
  if ( !v4 || (*((_BYTE *)v4 + 50) & 4) != 0 && a3 )
    return 0;
  *((_BYTE *)v4 + 50) = 0;
  --dword_CAAD4;
  return 1;
}
