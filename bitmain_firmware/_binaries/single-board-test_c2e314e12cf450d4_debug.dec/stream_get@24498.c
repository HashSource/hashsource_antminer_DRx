int __fastcall stream_get(int a1, json_error_t *a2)
{
  int v3; // r3
  signed int v7; // [sp+Ch] [bp+Ch]
  int v8; // [sp+10h] [bp+10h]
  int v9; // [sp+10h] [bp+10h]
  int i; // [sp+14h] [bp+14h]

  if ( *(_DWORD *)(a1 + 20) )
    return *(_DWORD *)(a1 + 20);
  if ( !*(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8) )
  {
    v8 = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4));
    if ( v8 == -1 )
    {
      *(_DWORD *)(a1 + 20) = -1;
      return -1;
    }
    *(_BYTE *)(a1 + 8) = v8;
    *(_DWORD *)(a1 + 16) = 0;
    if ( v8 <= 127 || v8 > 255 )
    {
      *(_BYTE *)(a1 + 9) = 0;
    }
    else
    {
      v7 = utf8_check_first(v8);
      if ( !v7 )
        goto LABEL_22;
      if ( v7 <= 1 )
        _assert_fail("count >= 2", "3rdparty/jansson-2.6/src/load.c", 0xAFu, "stream_get");
      for ( i = 1; i < v7; *(_BYTE *)(a1 + i++ + 8) = (*(int (__fastcall **)(_DWORD))a1)(*(_DWORD *)(a1 + 4)) )
        ;
      if ( !utf8_check_full((char *)(a1 + 8), v7, 0) )
      {
LABEL_22:
        *(_DWORD *)(a1 + 20) = -2;
        error_set(a2, (const lex_t *)a1, "unable to decode byte 0x%x", v8);
        return -2;
      }
      *(_BYTE *)(a1 + v7 + 8) = 0;
    }
  }
  v3 = *(_DWORD *)(a1 + 16);
  v9 = *(unsigned __int8 *)(a1 + v3 + 8);
  *(_DWORD *)(a1 + 16) = v3 + 1;
  ++*(_DWORD *)(a1 + 36);
  if ( v9 == 10 )
  {
    ++*(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 28) = 0;
  }
  else if ( utf8_check_first(v9) )
  {
    ++*(_DWORD *)(a1 + 28);
  }
  return v9;
}
