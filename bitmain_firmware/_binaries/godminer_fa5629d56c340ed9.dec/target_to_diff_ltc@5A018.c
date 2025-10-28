int __fastcall target_to_diff_ltc(int a1)
{
  int result; // r0
  int v3; // r8
  unsigned int v4; // r7
  unsigned int v5; // t1
  int v6; // r3
  int v7; // r2

  result = 0;
  v3 = a1 + 32;
LABEL_2:
  v5 = *(_DWORD *)(v3 - 8);
  v3 -= 8;
  v4 = v5;
  v6 = 63;
  while ( 1 )
  {
    v7 = __PAIR64__(*(_DWORD *)(v3 + 4), v4) >> v6--;
    if ( (v7 & 1) != 0 )
      return result;
    result = (unsigned __int8)(result + 1);
    if ( v6 == -1 )
    {
      if ( v3 == a1 )
        return result;
      goto LABEL_2;
    }
  }
}
