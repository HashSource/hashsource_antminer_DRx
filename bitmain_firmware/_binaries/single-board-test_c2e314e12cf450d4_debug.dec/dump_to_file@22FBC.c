int __cdecl dump_to_file(const char *buffer, size_t size, void *data)
{
  if ( fwrite(buffer, size, 1u, (FILE *)data) == 1 )
    return 0;
  else
    return -1;
}
