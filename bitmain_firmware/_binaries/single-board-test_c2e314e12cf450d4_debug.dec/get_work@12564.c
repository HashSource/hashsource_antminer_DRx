unsigned int __fastcall get_work(int a1, int a2, FILE *a3, unsigned int a4)
{
  char s[1024]; // [sp+10h] [bp+10h] BYREF
  void *ptr; // [sp+410h] [bp+410h]
  int i; // [sp+414h] [bp+414h]
  unsigned int v13; // [sp+418h] [bp+418h]
  char *v14; // [sp+41Ch] [bp+41Ch]

  memset(s, 0, sizeof(s));
  v13 = 0;
  i = 0;
  while ( 1 )
  {
    if ( !fgets(s, 1023, a3) || a4 <= v13 )
      return v13;
    ptr = (void *)(*((_DWORD *)&cgpu + a1 + 131112) + 204 * (a4 * a2 + v13));
    v14 = strstr(s, "nonce");
    if ( !v14 )
      break;
    for ( v14 += 5; *v14 == 32; ++v14 )
      ;
    s2hex((_BYTE *)ptr + 4, v14, 8);
    v14 = strstr(s, "work");
    if ( !v14 )
      break;
    for ( v14 += 4; *v14 == 32; ++v14 )
      ;
    s2hex((_BYTE *)ptr + 8, v14, 360);
    for ( i = 0; i <= 3; ++i )
      *((_DWORD *)ptr + i + 47) = 0;
    *(_DWORD *)ptr = v13++;
  }
  free(ptr);
  puts("get work err");
  return v13;
}
