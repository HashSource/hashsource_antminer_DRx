int __fastcall sub_D914(int a1, char **a2, unsigned __int8 *a3)
{
  int v4; // r6
  int v5; // r4
  int result; // r0
  unsigned __int8 *v7; // r3
  int v8; // r12
  int v9; // t1
  char *v10; // r6
  bool v11; // zf
  int v12; // r1

  off_212F0 = *a2;
  dword_241D0 = 0;
  if ( !dword_23FC8 )
  {
    dword_23FCC = 0;
    dword_23FC8 = 1;
LABEL_14:
    if ( dword_23FC8 >= a1 )
      return -1;
    v10 = a2[dword_23FC8];
    if ( *v10 != 45 || !v10[1] )
      return -1;
    if ( v10[1] == 45 && !v10[2] )
    {
      ++dword_23FC8;
      return -1;
    }
    ++dword_23FC8;
    v5 = (unsigned __int8)v10[1];
    v4 = (int)(v10 + 1);
    goto LABEL_4;
  }
  v4 = dword_23FCC;
  if ( !dword_23FCC )
    goto LABEL_14;
  v5 = *(unsigned __int8 *)dword_23FCC;
  if ( !*(_BYTE *)dword_23FCC )
    goto LABEL_14;
LABEL_4:
  result = v5;
  dword_23FCC = v4 + 1;
  dword_241CC = v5;
  if ( !a3 || !*a3 )
    goto LABEL_11;
  if ( *a3 != v5 )
  {
    v7 = a3 + 1;
    do
    {
      a3 = v7;
      if ( !v7 )
        goto LABEL_11;
      v9 = *v7++;
      v8 = v9;
      if ( !v9 )
        goto LABEL_11;
    }
    while ( v8 != v5 );
  }
  v11 = v5 == 58;
  if ( v5 != 58 )
    v11 = v5 == 63;
  if ( v11 )
  {
LABEL_11:
    if ( !dword_212F4 )
      return 63;
    sub_D8C4(": unknown option -", v5);
    return 63;
  }
  if ( a3[1] == 58 )
  {
    if ( *(_BYTE *)(v4 + 1) )
    {
      dword_241D0 = v4 + 1;
      dword_23FCC = 0;
    }
    else if ( a1 <= dword_23FC8 )
    {
      if ( !dword_212F4 )
        return 63;
      sub_D8C4(": option requires argument -", v5);
      return 63;
    }
    else
    {
      v12 = (int)a2[dword_23FC8++];
      dword_241D0 = v12;
    }
  }
  return result;
}
