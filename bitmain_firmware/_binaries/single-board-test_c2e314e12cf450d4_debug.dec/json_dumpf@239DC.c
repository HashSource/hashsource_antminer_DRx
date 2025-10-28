int __cdecl json_dumpf(const json_t *json, FILE *output, size_t flags)
{
  return json_dump_callback(json, dump_to_file, output, flags);
}
