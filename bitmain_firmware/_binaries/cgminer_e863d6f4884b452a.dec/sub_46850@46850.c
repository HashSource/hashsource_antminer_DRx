int __fastcall sub_46850(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r2
  int v4; // r1
  _DWORD *v5; // r3
  _DWORD *v6; // r1

  result = sub_46530((int)a1);
  v3 = a1 + 3;
  v4 = dword_5A8CC[a1[2]];
  if ( v4 )
  {
    v5 = (_DWORD *)a1[1];
    v6 = &v5[2 * v4];
    do
    {
      v5[1] = v3;
      *v5 = v3;
      v5 += 2;
    }
    while ( v6 != v5 );
  }
  a1[3] = v3;
  a1[4] = v3;
  *a1 = 0;
  return result;
}
