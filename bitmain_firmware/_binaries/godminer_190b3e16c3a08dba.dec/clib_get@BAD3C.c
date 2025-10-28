// attributes: thunk
void *clib_get(void *dest, const void *src, size_t n)
{
  return memcpy(dest, src, n);
}
