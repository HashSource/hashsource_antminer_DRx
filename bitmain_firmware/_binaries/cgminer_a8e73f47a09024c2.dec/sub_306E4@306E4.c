int __fastcall sub_306E4(int a1)
{
  int v1; // r12
  int v2; // r4
  int result; // r0
  int v4; // r3
  unsigned int v5; // r1
  int v6; // t1

  v1 = a1 + 32;
  v2 = 7;
  result = 0;
LABEL_5:
  v6 = *(_DWORD *)(v1 - 4);
  v1 -= 4;
  v5 = v6;
  if ( v6 >= 0 )
  {
    result = (unsigned __int8)(result + 1);
    v4 = 30;
    while ( ((v5 >> v4) & 1) == 0 )
    {
      result = (unsigned __int8)(result + 1);
      if ( --v4 == -1 )
      {
        if ( --v2 == -1 )
          return result;
        goto LABEL_5;
      }
    }
  }
  return result;
}
