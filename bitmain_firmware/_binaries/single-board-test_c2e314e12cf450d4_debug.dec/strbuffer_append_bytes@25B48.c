int __cdecl strbuffer_append_bytes(strbuffer_t *strbuff, const char *data, size_t size)
{
  size_t v4; // r3
  void *dest; // [sp+10h] [bp+10h]
  size_t v10; // [sp+14h] [bp+14h]

  if ( *((_DWORD *)strbuff + 2) - *((_DWORD *)strbuff + 1) > size )
    goto LABEL_11;
  if ( *((int *)strbuff + 2) >= 0 && size != -1 && *((_DWORD *)strbuff + 1) <= -2 - size )
  {
    v4 = 2 * *((_DWORD *)strbuff + 2);
    if ( *((_DWORD *)strbuff + 1) + size + 1 >= v4 )
      v4 = *((_DWORD *)strbuff + 1) + size + 1;
    v10 = v4;
    dest = jsonp_malloc(v4);
    if ( !dest )
      return -1;
    memcpy(dest, *(const void **)strbuff, *((_DWORD *)strbuff + 1));
    jsonp_free(*(void **)strbuff);
    *(_DWORD *)strbuff = dest;
    *((_DWORD *)strbuff + 2) = v10;
LABEL_11:
    memcpy((void *)(*(_DWORD *)strbuff + *((_DWORD *)strbuff + 1)), data, size);
    *((_DWORD *)strbuff + 1) += size;
    *(_BYTE *)(*(_DWORD *)strbuff + *((_DWORD *)strbuff + 1)) = 0;
    return 0;
  }
  return -1;
}
