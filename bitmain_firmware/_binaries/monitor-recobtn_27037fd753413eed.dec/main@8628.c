void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  struct timezone *v5; // r1
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r0
  __pid_t v9; // r0
  int v10; // r4
  int v11; // r0
  int v12; // r0
  struct timeval v13; // [sp+0h] [bp-14h] BYREF
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  printf("monitor-recobtn compile %s--%s\n", "Dec 13 2018", "20:07:04");
  while ( 1 )
  {
    v5 = (struct timezone *)sub_8974(0);
    if ( v5 )
      goto LABEL_15;
    do
    {
      v6 = gettimeofday(&v13, v5);
      sub_891C(v6);
      puts("Detect recovery button push off");
      while ( 1 )
      {
        v7 = sub_8974(0);
        if ( v7 == 1 )
          break;
LABEL_5:
        gettimeofday(&tv, 0);
        if ( tv.tv_usec + 1000000 * (tv.tv_sec - v13.tv_sec) - v13.tv_usec <= 3000000 )
        {
          usleep(0x7A120u);
        }
        else
        {
          puts("recovery button off over 3S, wait push on");
          while ( !sub_8974(0) )
          {
            sub_891C(0);
            v8 = sleep(1u);
            sub_893C(v8);
            sleep(1u);
          }
          puts("recovery button on");
          v9 = fork();
          if ( v9 >= 0 )
          {
            if ( !v9 )
            {
              sub_893C(0);
              if ( a1 <= 1 )
                sleep(1u);
              else
                execvp(a2[1], a2 + 1);
              exit(0);
            }
            v10 = 100;
            wait(0);
            v11 = puts("child complete");
            do
            {
              sub_891C(v11);
              v12 = usleep(0x186A0u);
              sub_893C(v12);
              v11 = usleep(0x186A0u);
              --v10;
            }
            while ( v10 );
            puts("recovery factory complete");
            v7 = sub_8974(0);
            if ( v7 == 1 )
              break;
            goto LABEL_5;
          }
          puts("error occured.");
        }
      }
      sub_893C(v7);
      v5 = (struct timezone *)sub_8974(0);
    }
    while ( !v5 );
LABEL_15:
    sleep(1u);
  }
}
