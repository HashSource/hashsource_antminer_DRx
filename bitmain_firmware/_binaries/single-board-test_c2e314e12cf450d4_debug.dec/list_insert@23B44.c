void __cdecl list_insert(list_t *list, list_t *node)
{
  *((_DWORD *)node + 1) = list;
  *(_DWORD *)node = *(_DWORD *)list;
  *(_DWORD *)(*(_DWORD *)list + 4) = node;
  *(_DWORD *)list = node;
}
