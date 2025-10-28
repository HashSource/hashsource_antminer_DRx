int __cdecl json_dump_file(const json_t *json, const char *path, size_t flags)
{
  int v7; // [sp+10h] [bp+10h]
  FILE *stream; // [sp+14h] [bp+14h]

  stream = fopen(path, "w");
  if ( !stream )
    return -1;
  v7 = json_dumpf(json, stream, flags);
  fclose(stream);
  return v7;
}
