int __fastcall sub_CA64(int a1)
{
  int *v1; // r3
  int v2; // r2
  __int16 v3; // r12
  int result; // r0
  int v5; // r4

  ++dword_240A8;
  if ( !a1 || a1 == dword_240A0 )
    return 1;
  v1 = (int *)dword_240BC[a1 & 0x3F];
  ++dword_241BC;
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
      dword_240A0 = v1[17];
      dword_240B0 = v2;
      word_2409C = v3;
      dword_241C4 = (int)(v1 + 1);
      dword_24098 = v5;
      return 1;
    }
    else
    {
      ++dword_24090;
    }
  }
  else
  {
LABEL_11:
    ++dword_240A4;
    return 0;
  }
  return result;
}
