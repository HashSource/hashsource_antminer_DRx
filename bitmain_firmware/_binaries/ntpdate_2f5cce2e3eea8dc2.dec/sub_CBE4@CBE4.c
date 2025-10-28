int *__fastcall sub_CBE4(int a1, unsigned int a2)
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
  result = (int *)dword_240BC[v2];
  if ( !result )
    goto LABEL_6;
  v5 = dword_240BC[v2];
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
    v6 = dword_241C8;
    if ( !dword_241C8 )
    {
      result = sub_CB80();
      if ( !result )
        return result;
      v6 = dword_241C8;
      result = (int *)dword_240BC[v2];
    }
    v7 = v6 - 1;
    v8 = dword_241C0;
    v9 = *(_DWORD *)dword_241C0;
    v10 = dword_240AC + 1;
    *(_DWORD *)(dword_241C0 + 68) = a1;
    dword_241C8 = v7;
    dword_241C0 = v9;
    *(_WORD *)(v8 + 76) = 1;
    *(_DWORD *)v8 = result;
    *(_DWORD *)(v8 + 72) = 0;
    *(_DWORD *)(v8 + 84) = 0;
    dword_240AC = v10;
    dword_240BC[v2] = v8;
    return result;
  }
LABEL_9:
  if ( dword_240A0 == a1 )
  {
    dword_240A0 = 0;
    word_2409C = 0;
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
      v11 = &dword_21F94;
    }
    if ( a2 > 1 )
      *(_DWORD *)(v5 + 80) = a2 + *v11;
  }
  else
  {
    *(_WORD *)(v5 + 76) &= ~1u;
    if ( (int *)v5 == result )
    {
      dword_240BC[v2] = *(_DWORD *)v5;
    }
    else
    {
      while ( *result != v5 )
        result = (int *)*result;
      *result = *(_DWORD *)v5;
    }
    v12 = dword_241C8;
    --dword_240AC;
    *(_DWORD *)v5 = dword_241C0;
    dword_241C0 = v5;
    dword_241C8 = v12 + 1;
    return (int *)(v12 + 1);
  }
  return result;
}
