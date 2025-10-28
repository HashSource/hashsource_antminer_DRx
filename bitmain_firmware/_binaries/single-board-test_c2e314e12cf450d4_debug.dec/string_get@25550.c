int __cdecl string_get(void *data)
{
  unsigned __int8 v3; // [sp+Bh] [bp+Bh]

  v3 = *(_BYTE *)(*(_DWORD *)data + *((_DWORD *)data + 1));
  if ( !v3 )
    return -1;
  ++*((_DWORD *)data + 1);
  return v3;
}
