char *__fastcall stratum_buffer_append(int a1, const char *a2)
{
  char *v3; // r4
  size_t v5; // r6
  size_t v6; // r0
  size_t v7; // r1

  v3 = *(char **)(a1 + 44);
  v5 = strlen(v3);
  v6 = strlen(a2) + v5 + 1;
  if ( *(_DWORD *)(a1 + 40) <= v6 )
  {
    v7 = (v6 & 0xFFFFC000) + 0x4000;
    *(_DWORD *)(a1 + 40) = v7;
    v3 = (char *)realloc(v3, v7);
    *(_DWORD *)(a1 + 44) = v3;
  }
  return strcpy(&v3[v5], a2);
}
