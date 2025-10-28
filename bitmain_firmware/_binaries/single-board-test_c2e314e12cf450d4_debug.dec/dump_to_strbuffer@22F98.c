int __cdecl dump_to_strbuffer(const char *buffer, size_t size, void *data)
{
  return strbuffer_append_bytes((strbuffer_t *)data, buffer, size);
}
