int __fastcall sub_A6190(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  bool v6; // zf
  __int16 src; // [sp+Ch] [bp-Ch] BYREF
  char v8; // [sp+Eh] [bp-Ah]
  _BYTE v9[8]; // [sp+10h] [bp-8h] BYREF

  v9[0] = a2;
  result = sub_A6130(a1, 0, v9, 1u);
  if ( result )
  {
    v8 = 1;
    src = 114;
    v5 = sub_A5DC8(a1, 60, &src, 3u, v9, 1u);
    v6 = v5 == 0;
    if ( v5 )
      result = 0;
    else
      result = v9[0];
    if ( v6 )
      return result == a2;
  }
  return result;
}
