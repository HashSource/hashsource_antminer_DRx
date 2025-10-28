void __cdecl json_delete_object(json_object_t *object)
{
  hashtable_close((json_object_t *)((char *)object + 8));
  jsonp_free(object);
}
