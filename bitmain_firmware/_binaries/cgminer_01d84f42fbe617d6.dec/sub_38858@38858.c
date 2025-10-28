const char *__fastcall sub_38858(const char **a1, const char *a2, const char *a3, int a4)
{
  const char *result; // r0
  int v6; // r3
  const char *v7; // r2
  size_t v8; // r6
  char *v9; // r0
  int v10; // r1
  const char *v11; // r0
  const char **v12; // r0
  const char **v13; // r5
  size_t v14; // lr
  const char *v15; // r1
  const char *v16; // r0
  const char **v17; // r3
  int v18; // r2
  const char *v19; // r1
  const char **v20; // r3
  int v21; // r2
  char *v22; // r0
  int v23; // r1
  const char *v24; // r0
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = (const char *)*((unsigned __int8 *)a1 + 4);
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
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v6 = (int)a1[10];
  if ( v6 <= 0 )
  {
    v8 = (size_t)a1[9];
  }
  else
  {
    v7 = a1[6];
    if ( v6 <= (int)v7 )
      return result;
    v8 = (size_t)a1[9];
    if ( v6 < (int)&v7[v8] )
      v8 = v6 - (_DWORD)v7;
  }
  v9 = (char *)a1[13];
  v10 = (int)(a1[12] + 1);
  a1[12] = (const char *)v10;
  v11 = (const char *)realloc(v9, 4 * v10);
  a1[13] = v11;
  if ( !v11 )
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
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v12 = (const char **)calloc(v8, 0x10u);
  v13 = v12;
  if ( !v12 )
  {
    snprintf(
      s,
      0x800u,
      "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d",
      *a1,
      v8,
      a1[6],
      a1[10],
      "klist.c",
      "k_alloc_items",
      38);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  v14 = v8 - 1;
  *(_DWORD *)&a1[13][4 * (_DWORD)(a1[12] - 1)] = v12;
  v15 = *a1;
  v16 = a1[6];
  a1[7] = (const char *)v8;
  a1[8] = (const char *)v8;
  a1[6] = &v16[v8];
  *v13 = v15;
  v13[1] = 0;
  v13[2] = (const char *)(v13 + 4);
  if ( (int)(v8 - 1) > 1 )
  {
    v17 = v13;
    v18 = 1;
    do
    {
      v19 = *a1;
      ++v18;
      v17[5] = (const char *)v17;
      v17[6] = (const char *)(v17 + 8);
      v17[4] = v19;
      v17 += 4;
    }
    while ( v18 != v14 );
  }
  v20 = &v13[4 * v14];
  *v20 = *a1;
  v20[1] = (const char *)&v13[4 * v8 - 8];
  v20[2] = 0;
  v21 = *((unsigned __int8 *)a1 + 44);
  a1[3] = (const char *)v13;
  if ( v21 )
    a1[4] = (const char *)v20;
  do
  {
    v22 = (char *)a1[15];
    v23 = (int)(a1[14] + 1);
    a1[14] = (const char *)v23;
    v24 = (const char *)realloc(v22, 4 * v23);
    a1[15] = v24;
    if ( !v24 )
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
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    result = (const char *)calloc(1u, (size_t)a1[5]);
    v13[3] = result;
    if ( !result )
    {
      snprintf(s, 0x800u, "List %s failed to calloc item data in %s %s():%d", *a1, "klist.c", "k_alloc_items", 73);
      sub_38438(3, s, 1);
      sub_16724(1);
    }
    *(_DWORD *)&a1[15][4 * (_DWORD)(a1[14] - 1)] = result;
    v13 = (const char **)v13[2];
  }
  while ( v13 );
  return result;
}
