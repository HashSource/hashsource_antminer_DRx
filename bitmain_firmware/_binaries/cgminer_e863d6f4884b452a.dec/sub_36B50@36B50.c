int __fastcall sub_36B50(int a1, int a2, __int16 a3)
{
  char *v3; // r3
  int result; // r0
  int v5; // r4
  int v6; // r6
  int v7; // t1

  v3 = &byte_6FB38;
  result = 4 * a1;
  v5 = result + 4;
  v6 = a3 & 0xFF00;
  do
  {
    v7 = (unsigned __int8)*v3++;
    if ( v7 == a2 )
    {
      if ( (a3 & 0xFF00) != 0 )
      {
        switch ( v6 )
        {
          case 256:
            *((_WORD *)&unk_73ED8 + 4 * result + 153) = (unsigned __int8)a3;
            byte_6FB3C[4 * result + 1] = 1;
            break;
          case 4352:
            byte_6FB3C[result + 64] = a3;
            byte_6FB3C[4 * result + 2] = 1;
            break;
          case 65024:
            byte_6FB8C[result] = a3;
            byte_6FB3C[4 * result + 3] = 1;
            break;
        }
      }
      else
      {
        *((_WORD *)&unk_73ED8 + 4 * result + 152) = (unsigned __int8)a3;
        byte_6FB3C[4 * result] = 1;
      }
    }
    ++result;
  }
  while ( v5 != result );
  return result;
}
