int __fastcall sub_17EC4(int result, int a2)
{
  int v2; // r4
  int v3; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = result;
  if ( dword_72C0C )
  {
    if ( dword_72C0C != 1 )
    {
      strcpy(v4, "Fatal Error Coin Type");
      sub_3F1C0(3, v4, 1);
      sub_132C4(1);
    }
    v3 = 140;
  }
  else
  {
    v3 = 32;
  }
  *(_DWORD *)(result + v3) = a2;
  if ( !dword_72C0C )
    result = sub_1160C(result);
  if ( dword_72C0C == 1 )
    return sub_116C8(v2);
  return result;
}
