int sub_EB78()
{
  int v0; // r4
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v5; // r4
  int v6; // r4

  if ( byte_1B3BB != 102 )
    goto LABEL_2;
  if ( byte_1B3BC == 49 )
  {
    v1 = (unsigned __int8)byte_1B3BD;
    if ( !byte_1B3BD )
    {
      puts("Server respond  F1\n");
      exit(v1);
    }
LABEL_2:
    printf("respond rev : %s", &byte_1B3BB);
    exit(0);
  }
  switch ( byte_1B3BC )
  {
    case '2':
      v0 = (unsigned __int8)byte_1B3BD;
      if ( !byte_1B3BD )
      {
        puts("Server respond  F2\n");
        exit(v0);
      }
      goto LABEL_2;
    case '3':
      v2 = (unsigned __int8)byte_1B3BD;
      if ( !byte_1B3BD )
      {
        puts("Server respond  F3\n");
        exit(v2);
      }
      goto LABEL_2;
    case '4':
      v3 = (unsigned __int8)byte_1B3BD;
      if ( !byte_1B3BD )
      {
        puts("Server respond  F4\n");
        exit(v3);
      }
      goto LABEL_2;
  }
  if ( byte_1B3BC != 53 )
  {
    if ( byte_1B3BC == 54 )
    {
      v5 = (unsigned __int8)byte_1B3BD;
      if ( !byte_1B3BD )
      {
        puts("Server respond  F6\n");
        puts("F6 exit!!!!!!");
        exit(v5);
      }
    }
    else if ( byte_1B3BC == 55 )
    {
      v6 = (unsigned __int8)byte_1B3BD;
      if ( !byte_1B3BD )
      {
        puts("Server respond  F7\n");
        exit(v6);
      }
    }
    goto LABEL_2;
  }
  if ( byte_1B3BD )
    goto LABEL_2;
  return puts("Server respond  F5\n");
}
