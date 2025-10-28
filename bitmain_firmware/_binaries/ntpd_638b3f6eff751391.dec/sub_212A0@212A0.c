int __fastcall sub_212A0(int a1)
{
  int v1; // r2
  int v2; // r3
  bool v3; // zf
  unsigned int v4; // r2

  v1 = *(_DWORD *)(a1 + 108);
  v2 = (v1 & 0x200) == 0;
  if ( (v1 & 0x1000) == 0 )
    ++v2;
  if ( (v1 & 0x800) == 0 )
    ++v2;
  v3 = (v1 & 0x400) == 0;
  v4 = *(unsigned __int8 *)(a1 + 104);
  if ( v3 )
    ++v2;
  if ( v4 <= 2 || (++v2, v4 != 5) )
    ++v2;
  return v2;
}
