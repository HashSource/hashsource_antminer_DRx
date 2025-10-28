void __cdecl list_remove(list_t *list)
{
  *(_DWORD *)(*(_DWORD *)list + 4) = *((_DWORD *)list + 1);
  **((_DWORD **)list + 1) = *(_DWORD *)list;
}
