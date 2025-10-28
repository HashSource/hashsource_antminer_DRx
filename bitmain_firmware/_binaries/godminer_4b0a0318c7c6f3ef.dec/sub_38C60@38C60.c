int __fastcall sub_38C60(int a1)
{
  int v1; // r3
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // t1
  unsigned int v6; // lr
  int v7; // r3
  unsigned int v8; // r12
  int v9; // r2

  v1 = 0;
  v2 = a1 + 4;
  while ( 1 )
  {
    v3 = 16 * v1;
    v5 = *(unsigned __int8 *)++a1;
    v4 = v5;
    v6 = v5 - 97;
    v1 = v5 - 48 + 16 * v1;
    if ( (unsigned __int8)(v5 - 48) > 9u )
      break;
LABEL_6:
    if ( a1 == v2 )
      return v1;
  }
  v7 = v4 - 55;
  v8 = v4 - 65;
  v9 = v4 - 87;
  v1 = v7 + v3;
  if ( v6 <= 0x19 )
  {
    v1 = v9 + v3;
    goto LABEL_6;
  }
  if ( v8 <= 0x19 )
    goto LABEL_6;
  return -1;
}
