// Alternative name is '__extendsfdf2'
int __fastcall _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r2
  int result; // r0
  bool v6; // zf

  v4 = 2 * a1;
  v6 = 2 * a1 == 0;
  result = a1 << 29;
  if ( v6 || (a4 = v4 & 0xFF000000, (v4 & 0xFF000000) == 0) || a4 == 0xFF000000 )
  {
    v6 = v4 == 0;
    if ( v4 )
      v6 = a4 == 0xFF000000;
    if ( !v6 )
      JUMPOUT(0x27FCC);
  }
  return result;
}
