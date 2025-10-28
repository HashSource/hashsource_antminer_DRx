unsigned int *__fastcall platform_dump_capability(unsigned int *result)
{
  unsigned int *v1; // [sp+4h] [bp+4h]
  unsigned int j; // [sp+8h] [bp+8h]
  unsigned int i; // [sp+Ch] [bp+Ch]

  v1 = result;
  if ( result )
  {
    printf("%s:%d", "platform_dump_capability", 32);
    puts("==========================capability start==========================");
    printf("%s:%d", "platform_dump_capability", 33);
    printf("board num = %d\n", *v1);
    for ( i = 0; i < *v1; ++i )
    {
      printf("%s:%d", "platform_dump_capability", 35);
      printf("board id = %d, chain num = %d\n", v1[18 * i + 1], v1[18 * i + 2]);
      for ( j = 0; j < v1[18 * i + 2]; ++j )
      {
        printf("%s:%d", "platform_dump_capability", 37);
        printf("\tchain id = %d\n", v1[18 * i + 3 + j]);
      }
    }
    printf("%s:%d", "platform_dump_capability", 41);
    return (unsigned int *)puts("==========================capability end============================");
  }
  return result;
}
