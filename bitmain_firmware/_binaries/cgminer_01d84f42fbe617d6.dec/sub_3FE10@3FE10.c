int __fastcall sub_3FE10(int result, char a2, unsigned __int8 a3)
{
  int v3; // r7
  int v4; // r6
  int v5; // r5
  int v6; // t1
  int v7; // r4
  char v8; // r3

  v3 = 805859;
  v4 = 805836;
  v5 = ((a2 & 1) << 7) | ((unsigned __int8)result << 16) & 0xFFFFFF | (a3 << 24);
  do
  {
    v6 = *(unsigned __int8 *)++v3;
    if ( v6 == 1 )
    {
      v7 = 0;
LABEL_6:
      v8 = v7;
      while ( 1 )
      {
        v5 = v5 & 0xFFFFF0FF | ((v8 & 0xF) << 8);
        ++v7;
        sub_3F864(*(_DWORD *)(v4 + 8), 1, 0, 60, v5);
        result = sub_2B21C();
        v8 = v7 + 2;
        if ( v7 == 12 )
          break;
        if ( v7 <= 5 )
          goto LABEL_6;
      }
    }
    v4 += 4;
  }
  while ( v3 != 805863 );
  return result;
}
