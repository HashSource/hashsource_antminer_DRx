int __fastcall sub_46038(int *a1, int a2, int a3)
{
  int v3; // r3
  bool v4; // zf
  int result; // r0

  v3 = a1[1];
  v4 = v3 == 0;
  if ( v3 )
  {
    a3 = v3 - 1;
    a1[1] = v3 - 1;
    a2 = *a1;
    LOBYTE(v3) = 0;
    result = *(unsigned __int8 *)(*a1 + a3);
  }
  else
  {
    result = 0;
  }
  if ( !v4 )
    *(_BYTE *)(a2 + a3) = v3;
  return result;
}
