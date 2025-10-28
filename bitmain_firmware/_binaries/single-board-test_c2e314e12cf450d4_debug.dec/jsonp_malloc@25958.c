void *__cdecl jsonp_malloc(size_t size)
{
  if ( size )
    return do_malloc(size);
  else
    return 0;
}
