void *__fastcall sub_305F4(int a1, char *s)
{
  void **v2; // r5
  size_t v5; // r0
  char *v6; // r10
  unsigned int v7; // r1
  char *v8; // r6
  size_t v9; // r4
  size_t v10; // r9
  void *result; // r0
  int v12; // r11
  char sa[2052]; // [sp+18h] [bp-804h] BYREF

  v2 = *(void ***)(a1 + 12);
  v5 = strlen(s);
  v6 = (char *)v2[1];
  v7 = (unsigned int)v2[2];
  v8 = (char *)*v2;
  v9 = v5;
  v10 = v5 + 1;
  if ( (unsigned int)&v6[v5 + 1] > v7 )
  {
    v12 = v5 + 4097 - (v10 & 0xFFF);
    v8 = (char *)realloc(*v2, v12 + v7);
    *v2 = v8;
    if ( !v8 )
    {
      snprintf(
        sa,
        0x800u,
        "OOM buf siz=%d tot=%d ext=%d in %s %s():%d",
        v9,
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8),
        v12,
        "api.c",
        "add_item_buf",
        1174);
      sub_38438(3, sa, 1);
      sub_16724(1);
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) += v12;
  }
  result = memcpy(&v6[(_DWORD)v8], s, v10);
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) += v9;
  return result;
}
