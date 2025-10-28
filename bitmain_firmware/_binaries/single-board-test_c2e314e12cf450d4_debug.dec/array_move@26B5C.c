void __cdecl array_move(json_array_t *array, size_t dest, size_t src, size_t count)
{
  memmove((void *)(*((_DWORD *)array + 4) + 4 * dest), (const void *)(*((_DWORD *)array + 4) + 4 * src), 4 * count);
}
