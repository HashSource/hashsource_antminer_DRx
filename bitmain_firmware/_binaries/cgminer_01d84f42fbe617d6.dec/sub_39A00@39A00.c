int __fastcall sub_39A00(const char **ptr, const char *a2, const char *a3, int a4)
{
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( !*((_BYTE *)ptr + 4) )
  {
    snprintf(
      s,
      0x800u,
      "Store %s can't %s() the list - from %s %s() line %d in %s %s():%d",
      *ptr,
      "_k_free_store",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_free_store",
      424);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  free(ptr);
  return 0;
}
