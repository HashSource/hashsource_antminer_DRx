int __fastcall dump_log_hal(const char *a1, int a2, int a3, int a4)
{
  int v6; // r4
  int v7; // r5
  int v8; // t1

  printf("%s[%d] ", a1, a2);
  if ( a4 > 0 )
  {
    v6 = a3 - 1;
    v7 = v6 + a4;
    do
    {
      v8 = *(unsigned __int8 *)++v6;
      printf("%02x ", v8);
    }
    while ( v6 != v7 );
  }
  return putchar(10);
}
