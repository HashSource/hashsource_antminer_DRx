int __fastcall sub_180A4(int result, int a2)
{
  int v2; // r4
  int v3; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v2 = result;
  if ( dword_79C4C )
  {
    if ( dword_79C4C != 1 )
    {
      strcpy(v4, "Fatal Error Coin Type");
      sub_3F178(3, v4, 1);
      sub_134A4(1);
    }
    v3 = 140;
  }
  else
  {
    v3 = 32;
  }
  *(_DWORD *)(result + v3) = a2;
  if ( !dword_79C4C )
    result = sub_117D4(result);
  if ( dword_79C4C == 1 )
    return sub_11890(v2);
  return result;
}
