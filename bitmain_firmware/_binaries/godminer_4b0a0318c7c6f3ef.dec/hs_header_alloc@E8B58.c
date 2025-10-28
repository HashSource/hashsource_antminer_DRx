void *hs_header_alloc()
{
  void *v0; // r0
  void *v1; // r4

  v0 = malloc(0x108u);
  v1 = v0;
  if ( v0 )
    sub_E8A94((int)v0);
  return v1;
}
