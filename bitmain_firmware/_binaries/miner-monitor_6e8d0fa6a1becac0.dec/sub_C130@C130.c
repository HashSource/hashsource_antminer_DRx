int __fastcall sub_C130(unsigned __int8 *a1)
{
  int v1; // r3
  int v2; // r3
  int v3; // r2
  int v4; // r3
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r12
  int v9; // r12
  int v10; // r3
  int v11; // r12

  v1 = *a1;
  if ( (unsigned __int8)(v1 - 48) > 9u )
  {
    if ( (unsigned int)(v1 - 65) > 5 )
    {
      if ( (unsigned int)(v1 - 97) > 5 )
        return 0;
      v2 = v1 - 87;
    }
    else
    {
      v2 = v1 - 55;
    }
  }
  else
  {
    v2 = v1 - 48;
  }
  v3 = a1[1];
  v4 = 16 * v2;
  if ( (unsigned __int8)(v3 - 48) > 9u )
  {
    if ( (unsigned int)(v3 - 65) > 5 )
    {
      if ( (unsigned int)(v3 - 97) > 5 )
        return 0;
      v5 = v3 - 87 + v4;
    }
    else
    {
      v5 = v3 - 55 + v4;
    }
  }
  else
  {
    v5 = v3 - 48 + v4;
  }
  v6 = a1[2];
  v7 = 16 * v5;
  v8 = v6 - 48;
  if ( (unsigned __int8)(v6 - 48) <= 9u )
    goto LABEL_14;
  if ( (unsigned int)(v6 - 65) > 5 )
  {
    if ( (unsigned int)(v6 - 97) > 5 )
      return 0;
    v8 = v6 - 87;
LABEL_14:
    v9 = v8 + v7;
    goto LABEL_15;
  }
  v9 = v6 - 55 + v7;
LABEL_15:
  v10 = a1[3];
  v11 = 16 * v9;
  if ( (unsigned __int8)(v10 - 48) <= 9u )
    return v10 - 48 + v11;
  if ( (unsigned int)(v10 - 65) <= 5 )
    return v10 - 55 + v11;
  if ( (unsigned int)(v10 - 97) <= 5 )
    return v10 - 87 + v11;
  return 0;
}
