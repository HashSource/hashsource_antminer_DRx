int __fastcall sub_5C748(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int result; // r0
  char *v6; // r4
  int v7; // r3
  int v8; // r0
  int v9; // r5

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v4 = sub_5BCD8(a2);
  result = sub_5BD88(v4);
  v6 = (char *)result;
  if ( result )
  {
    while ( 1 )
    {
      v9 = sub_5BE10((int)v6);
      result = sub_5BDA4(v9);
      if ( !result )
        break;
      v7 = *(_DWORD *)(result + 4);
      if ( v7 != -1 )
        *(_DWORD *)(result + 4) = v7 + 1;
      if ( sub_5C59C(a1, v6, result) )
        return -1;
      v8 = sub_5BD44(a2, v9);
      v6 = (char *)sub_5BD88(v8);
      if ( !v6 )
        return 0;
    }
  }
  return result;
}
