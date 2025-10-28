int __fastcall sub_F064(const char *a1)
{
  size_t v2; // r4

  v2 = strlen(byte_25AB4);
  printf("02revbody_size=%d\n", v2);
  sub_ECD0(a1, v2);
  dword_26F90 = off_1D43C(dword_26F98, dword_258BC, byte_25AB4, v2);
  if ( dword_26F90 == -1 )
  {
    perror("send");
    exit(1);
  }
  printf("send what I rev:\n%s\n", byte_25AB4);
  return 1;
}
