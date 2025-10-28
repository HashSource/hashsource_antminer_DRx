unsigned int __fastcall IndicesBefore(int a1, int a2, int a3, size_t n)
{
  return (unsigned int)memcmp((const void *)(a1 + a3), (const void *)(a2 + a3), n) >> 31;
}
