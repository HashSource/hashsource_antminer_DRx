void *__fastcall sub_36710(int a1, char *s)
{
  char **v4; // r5
  char *v5; // r6
  size_t v6; // r0
  size_t v7; // r4
  char *v8; // r10
  unsigned int v9; // r1
  int v10; // r9
  void *result; // r0
  char sa[2048]; // [sp+18h] [bp-800h] BYREF

  v4 = *(char ***)(a1 + 12);
  v5 = *v4;
  v6 = strlen(s);
  v7 = v6;
  v8 = v4[1];
  v9 = (unsigned int)v4[2];
  if ( (unsigned int)&v8[v6 + 1] > v9 )
  {
    v10 = v6 + 4097 - (((_WORD)v6 + 1) & 0xFFF);
    v5 = (char *)realloc(v5, v10 + v9);
    *v4 = v5;
    if ( !v5 )
    {
      snprintf(
        sa,
        0x800u,
        "OOM buf siz=%d tot=%d ext=%d in %s %s():%d",
        v7,
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8),
        v10,
        "api.c",
        "add_item_buf",
        1174);
      sub_3F178(3, sa, 1);
      sub_134A4(1);
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) += v10;
  }
  result = memcpy(&v8[(_DWORD)v5], s, v7 + 1);
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) += v7;
  return result;
}
