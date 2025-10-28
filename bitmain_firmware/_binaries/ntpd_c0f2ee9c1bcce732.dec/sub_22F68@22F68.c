int __fastcall sub_22F68(int a1, int a2)
{
  int v3; // r3
  int v4; // r12
  int result; // r0
  unsigned int v6; // r2
  int v7; // r6
  int v8; // r7
  unsigned int v9; // r7
  const char *v10; // r0
  unsigned int v11; // r8
  unsigned int v12; // r1
  int v13; // r3
  unsigned int v14; // r1
  unsigned __int8 v15; // r0

  if ( (*(_BYTE *)(a1 + 56) & 0x20) != 0 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 49);
    LOBYTE(v3) = a2;
  }
  else
  {
    v3 = *(unsigned __int8 *)(a1 + 49);
    if ( a2 >= *(unsigned __int8 *)(a1 + 50) )
      a2 = *(unsigned __int8 *)(a1 + 50);
    if ( a2 < v3 )
      LOBYTE(a2) = *(_BYTE *)(a1 + 49);
  }
  v4 = *(_DWORD *)(a1 + 512);
  result = *(_DWORD *)(a1 + 116);
  v6 = dword_CB548;
  v7 = 1 << dword_7A1CC;
  v8 = v4 - (7 << v3);
  *(_BYTE *)(a1 + 48) = a2;
  if ( v8 < v7 )
    v9 = v6 + v7;
  else
    v9 = v6 + v8;
  if ( result <= 0 )
  {
    if ( *(int *)(a1 + 120) <= 0 )
    {
      if ( *(_BYTE *)(a1 + 106) )
      {
        v11 = *(unsigned __int8 *)(a1 + 70);
        if ( (unsigned __int8)a2 < v11 )
          LOBYTE(v11) = a2;
      }
      else
      {
        LOBYTE(v11) = a2;
      }
    }
    else
    {
      LOBYTE(v11) = v3;
    }
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      v12 = 1 << v11;
    }
    else
    {
      v15 = sub_504EC();
      v4 = *(_DWORD *)(a1 + 512);
      LOBYTE(v3) = *(_BYTE *)(a1 + 49);
      v12 = (v15 | 0x1000u) << v11 >> 12;
    }
    result = 1;
    v13 = v4 - (1 << v3);
    v14 = v12 + *(_DWORD *)(a1 + 516);
    if ( v14 < v9 )
      v14 = v9;
    *(_DWORD *)(a1 + 520) = v14;
    if ( v13 > 0 )
      *(_DWORD *)(a1 + 520) = v14 + v7;
  }
  else
  {
    if ( v6 < *(_DWORD *)(a1 + 520) )
      return result;
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
      *(_DWORD *)(a1 + 520) = v6 + 1;
    else
      *(_DWORD *)(a1 + 520) = v9;
  }
  if ( dword_7CF4C > 1 )
  {
    v10 = (const char *)sub_50CD0(a1 + 12);
    return printf(
             "poll_update: at %lu %s poll %d burst %d retry %d head %d early %lu next %lu\n",
             dword_CB548,
             v10,
             *(unsigned __int8 *)(a1 + 48),
             *(_DWORD *)(a1 + 116),
             *(_DWORD *)(a1 + 120),
             *(_DWORD *)(a1 + 512),
             v9 - dword_CB548,
             *(_DWORD *)(a1 + 520) - dword_CB548);
  }
  return result;
}
