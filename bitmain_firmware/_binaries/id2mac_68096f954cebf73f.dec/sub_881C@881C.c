int sub_881C()
{
  size_t v2; // [sp+0h] [bp-Ch]
  FILE *stream; // [sp+4h] [bp-8h]

  stream = fopen("/dev/urandom", "rb");
  if ( !stream )
    return -1;
  v2 = fread(&dword_11548, 1u, 0x10u, stream);
  fclose(stream);
  if ( v2 == 16 )
    return 0;
  else
    return -1;
}
