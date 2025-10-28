void __fastcall sub_10E88(int a1, _DWORD *a2)
{
  int v4; // r2
  _DWORD *v5; // r1

  if ( a2 )
  {
    while ( 1 )
    {
      v5 = (_DWORD *)a2[1];
      if ( !v5 )
        break;
      v4 = a2[2];
      a2[1] = *v5;
      a2[2] = v4 - 1;
      sub_10DCC(a1, (int)(v5 + 2));
    }
  }
  sub_10D2C(a2);
}
