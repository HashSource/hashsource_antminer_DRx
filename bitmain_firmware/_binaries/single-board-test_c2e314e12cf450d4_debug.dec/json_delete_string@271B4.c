void __cdecl json_delete_string(json_string_t *string)
{
  jsonp_free(*((void **)string + 2));
  jsonp_free(string);
}
