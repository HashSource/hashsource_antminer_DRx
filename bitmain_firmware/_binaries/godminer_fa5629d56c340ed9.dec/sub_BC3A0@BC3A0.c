int __fastcall sub_BC3A0(int a1, char a2, int a3, int a4)
{
  char v4; // r7
  unsigned int v5; // r1
  bool v6; // cc
  int result; // r0
  int v10; // r0
  bool v11; // zf
  _BYTE src[4]; // [sp+Ch] [bp-10h] BYREF
  _BYTE v13[12]; // [sp+10h] [bp-Ch] BYREF

  v5 = (unsigned __int8)(a2 - 1);
  v6 = v5 > 3;
  v13[0] = a3;
  if ( v5 > 3 )
    v4 = 114;
  else
    a4 = 25492;
  if ( v5 <= 3 )
    HIWORD(a4) = 23;
  if ( v5 <= 3 )
    v5 += a4;
  if ( !v6 )
    v4 = *(_BYTE *)(v5 + 44);
  result = sub_BC348(a1, v4, 0, v13, 1u);
  if ( result )
  {
    src[0] = v4;
    src[2] = 1;
    src[1] = 0;
    v10 = sub_BBFE0(a1, 60, src, 3u, v13, 1u);
    v11 = v10 == 0;
    if ( v10 )
      result = 0;
    else
      result = v13[0];
    if ( v11 )
      return result == a3;
  }
  return result;
}
