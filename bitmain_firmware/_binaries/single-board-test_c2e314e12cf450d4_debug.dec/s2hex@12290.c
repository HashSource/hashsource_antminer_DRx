int __fastcall s2hex(_BYTE *a1, _BYTE *a2, int a3)
{
  int v7; // [sp+14h] [bp+14h]
  int v8; // [sp+18h] [bp+18h]
  int i; // [sp+1Ch] [bp+1Ch]

  if ( a2 && a3 > 0 && a1 )
  {
    v8 = a3 / 2;
    v7 = a3 % 2;
    for ( i = 0; i < v8; ++i )
      a1[i] = twoc2hex(a2[2 * i], a2[2 * i + 1]);
    if ( v7 )
      a1[i] = twoc2hex(a2[2 * i], 0);
    return v8 + v7;
  }
  else
  {
    printf("s2hex para error dst(%p), src(%p), inlen(%d)\n", a1, a2, a3);
    return -1;
  }
}
