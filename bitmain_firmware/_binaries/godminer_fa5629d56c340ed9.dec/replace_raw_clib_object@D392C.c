void *__fastcall replace_raw_clib_object(void **a1, const void *a2, size_t a3)
{
  void *v6; // r0

  free(*a1);
  v6 = malloc(a3);
  *a1 = v6;
  return memcpy(v6, a2, a3);
}
