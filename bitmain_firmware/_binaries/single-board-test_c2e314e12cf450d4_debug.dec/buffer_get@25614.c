int __cdecl buffer_get(void *data)
{
  if ( *((_DWORD *)data + 2) >= *((_DWORD *)data + 1) )
    return -1;
  return *(unsigned __int8 *)(*(_DWORD *)data + (*((_DWORD *)data + 2))++);
}
