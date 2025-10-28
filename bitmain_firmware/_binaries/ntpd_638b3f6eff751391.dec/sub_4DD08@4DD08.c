int __fastcall sub_4DD08(int a1)
{
  int *v1; // r3
  int v2; // r2
  __int16 v3; // r12
  int result; // r0
  int v5; // r4

  ++dword_CB740;
  if ( !a1 || a1 == dword_CB738 )
    return 1;
  v1 = (int *)dword_CB754[a1 & 0x3F];
  ++dword_CB854;
  if ( !v1 )
    goto LABEL_11;
  while ( a1 != v1[17] )
  {
    v1 = (int *)*v1;
    if ( !v1 )
      goto LABEL_11;
  }
  v2 = v1[18];
  if ( v2 )
  {
    v3 = *((_WORD *)v1 + 38);
    result = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      v5 = v1[21];
      dword_CB738 = v1[17];
      dword_CB748 = v2;
      word_CB734 = v3;
      dword_CB85C = (int)(v1 + 1);
      dword_CB730 = v5;
      return 1;
    }
    else
    {
      ++dword_CB728;
    }
  }
  else
  {
LABEL_11:
    ++dword_CB73C;
    return 0;
  }
  return result;
}
