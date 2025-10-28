// attributes: thunk
void *clib_copy(void *dest, const void *src, size_t n)
{
  return memcpy(dest, src, n);
}
