int *__fastcall sub_4DE88(int a1, unsigned int a2)
{
  int v2; // r5
  int *result; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r11
  int v8; // r3
  int v9; // r9
  int v10; // r8
  int *v11; // r2
  int v12; // r4

  v2 = a1 & 0x3F;
  result = (int *)dword_CB754[v2];
  if ( !result )
    goto LABEL_6;
  v5 = dword_CB754[v2];
  if ( result[17] != a1 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)v5;
      if ( !v5 )
        break;
      if ( *(_DWORD *)(v5 + 68) == a1 )
        goto LABEL_9;
    }
LABEL_6:
    if ( !a2 )
      return result;
    v6 = dword_CB860;
    if ( !dword_CB860 )
    {
      result = sub_4DE24();
      if ( !result )
        return result;
      v6 = dword_CB860;
      result = (int *)dword_CB754[v2];
    }
    v7 = v6 - 1;
    v8 = dword_CB858;
    v9 = *(_DWORD *)dword_CB858;
    v10 = dword_CB744 + 1;
    *(_DWORD *)(dword_CB858 + 68) = a1;
    dword_CB860 = v7;
    dword_CB858 = v9;
    *(_WORD *)(v8 + 76) = 1;
    *(_DWORD *)v8 = result;
    *(_DWORD *)(v8 + 72) = 0;
    *(_DWORD *)(v8 + 84) = 0;
    dword_CB744 = v10;
    dword_CB754[v2] = v8;
    return result;
  }
LABEL_9:
  if ( dword_CB738 == a1 )
  {
    dword_CB738 = 0;
    word_CB734 = 0;
  }
  if ( a2 )
  {
    *(_WORD *)(v5 + 76) |= 1u;
    if ( a2 <= 1 )
    {
      v11 = 0;
      *(_DWORD *)(v5 + 80) = 0;
    }
    else
    {
      v11 = &dword_CB548;
    }
    if ( a2 > 1 )
      *(_DWORD *)(v5 + 80) = a2 + *v11;
  }
  else
  {
    *(_WORD *)(v5 + 76) &= ~1u;
    if ( (int *)v5 == result )
    {
      dword_CB754[v2] = *(_DWORD *)v5;
    }
    else
    {
      while ( *result != v5 )
        result = (int *)*result;
      *result = *(_DWORD *)v5;
    }
    v12 = dword_CB860;
    --dword_CB744;
    *(_DWORD *)v5 = dword_CB858;
    dword_CB858 = v5;
    dword_CB860 = v12 + 1;
    return (int *)(v12 + 1);
  }
  return result;
}
