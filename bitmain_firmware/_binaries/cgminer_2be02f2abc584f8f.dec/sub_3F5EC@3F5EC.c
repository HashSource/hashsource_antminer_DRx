size_t __fastcall sub_3F5EC(const char **a1, const char *a2, const char *a3, int a4)
{
  size_t result; // r0
  int v6; // r3
  const char *v7; // r2
  int v8; // r1
  const char *v9; // r0
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  _DWORD *v12; // r3
  int v13; // r2
  const char **v14; // r3
  int v15; // r1
  const char *v16; // r0
  size_t v17; // r7
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *((unsigned __int8 *)a1 + 4);
  if ( result )
  {
    snprintf(
      s,
      0x800u,
      "List %s store can't %s() - from %s %s() line %d in %s %s():%d",
      *a1,
      "k_alloc_items",
      a2,
      a3,
      a4,
      "klist.c",
      "k_alloc_items",
      19);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v6 = (int)a1[10];
  if ( v6 <= 0 )
  {
    v17 = (size_t)a1[9];
  }
  else
  {
    v7 = a1[6];
    if ( v6 <= (int)v7 )
      return result;
    v17 = (size_t)a1[9];
    if ( v6 < (int)&v7[v17] )
      v17 = v6 - (_DWORD)v7;
  }
  v8 = (int)(a1[12] + 1);
  a1[12] = (const char *)v8;
  v9 = (const char *)realloc((void *)a1[13], 4 * v8);
  a1[13] = v9;
  if ( !v9 )
  {
    snprintf(
      s,
      0x800u,
      "List %s item_memory failed to realloc count=%d in %s %s():%d",
      *a1,
      a1[12],
      "klist.c",
      "k_alloc_items",
      33);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v10 = calloc(v17, 0x10u);
  v11 = v10;
  if ( !v10 )
  {
    snprintf(
      s,
      0x800u,
      "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d",
      *a1,
      v17,
      a1[6],
      a1[10],
      "klist.c",
      "k_alloc_items",
      38);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  *(_DWORD *)&a1[13][4 * (_DWORD)(a1[12] - 1)] = v10;
  a1[6] += v17;
  a1[7] = (const char *)v17;
  a1[8] = (const char *)v17;
  *v10 = *a1;
  v10[1] = 0;
  v10[2] = v10 + 4;
  result = v17 - 1;
  if ( (int)(v17 - 1) > 1 )
  {
    v12 = v11;
    v13 = 1;
    do
    {
      v12[4] = *a1;
      v12[5] = v12;
      v12[6] = v12 + 8;
      ++v13;
      v12 += 4;
    }
    while ( v13 != result );
  }
  v14 = (const char **)&v11[4 * v17 - 4];
  *v14 = *a1;
  v14[1] = (const char *)&v11[4 * v17 - 8];
  v14[2] = 0;
  a1[3] = (const char *)v11;
  if ( *((_BYTE *)a1 + 44) )
    a1[4] = (const char *)v14;
  for ( ; v11; v11 = (_DWORD *)v11[2] )
  {
    v15 = (int)(a1[14] + 1);
    a1[14] = (const char *)v15;
    v16 = (const char *)realloc((void *)a1[15], 4 * v15);
    a1[15] = v16;
    if ( !v16 )
    {
      snprintf(
        s,
        0x800u,
        "List %s data_memory failed to realloc count=%d in %s %s():%d",
        *a1,
        a1[14],
        "klist.c",
        "k_alloc_items",
        69);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    result = (size_t)calloc(1u, (size_t)a1[5]);
    v11[3] = result;
    if ( !result )
    {
      snprintf(s, 0x800u, "List %s failed to calloc item data in %s %s():%d", *a1, "klist.c", "k_alloc_items", 73);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    *(_DWORD *)&a1[15][4 * (_DWORD)(a1[14] - 1)] = v11[3];
  }
  return result;
}
