void *(*__fastcall json_set_alloc_funcs(void *(*result)(size_t size), void (*a2)(void *ptr)))(size_t size)
{
  do_malloc = result;
  do_free = a2;
  return result;
}
