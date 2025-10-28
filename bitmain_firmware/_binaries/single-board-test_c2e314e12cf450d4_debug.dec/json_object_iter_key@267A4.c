const char *__cdecl json_object_iter_key(void *iter)
{
  if ( iter )
    return (const char *)hashtable_iter_key((int)iter);
  else
    return 0;
}
