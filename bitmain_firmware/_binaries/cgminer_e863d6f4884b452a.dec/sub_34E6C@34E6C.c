void __fastcall __noreturn sub_34E6C(int a1)
{
  unsigned int v2; // r4
  struct tm *v3; // r6
  size_t v4; // r0
  int v5; // r6
  FILE *v6; // r0
  FILE *v7; // r4
  const char **v8; // [sp+0h] [bp-44h]
  time_t timer; // [sp+8h] [bp-3Ch] BYREF
  char src[20]; // [sp+Ch] [bp-38h] BYREF
  char s[36]; // [sp+20h] [bp-24h] BYREF

  if ( a1 )
  {
    puts("logs:log_thread_routine");
    *(_DWORD *)(a1 + 92) = "cglog_sync";
    v2 = 1;
    *(_DWORD *)a1 = 0;
    v8 = (const char **)(a1 + 8);
    while ( 1 )
    {
      do
      {
        ++v2;
        sleep(1u);
      }
      while ( v2 != 30 * (v2 / 0x1E) );
      time(&timer);
      v3 = localtime(&timer);
      strftime(s, 0xFu, "%Y-%m/%d", v3);
      strftime(src, 0xAu, "%H-%M-%S", v3);
      if ( !strcmp((const char *)(a1 + 42), "1970") )
      {
        if ( timer > 30660000 )
        {
          v5 = sub_348E4(a1, "cglog_init", s, src);
          if ( v5 | sub_348E4(a1, "cglog_sync", s, src) )
          {
            sub_349FC(v8);
          }
          else
          {
            strncpy((char *)(a1 + 42), s, 0x1Eu);
            strncpy((char *)(a1 + 72), src, 0x14u);
          }
        }
      }
      else if ( *(_BYTE *)(a1 + 12) )
      {
        v4 = strlen(s);
        if ( strncmp((const char *)(a1 + 12), s, v4) )
        {
          puts("logs:_log_generate_symbol_link");
          if ( !sub_34D88(a1, s) )
          {
            puts("logs:copy to last path");
            strncpy((char *)(a1 + 12), s, 0x1Eu);
          }
        }
      }
      else
      {
        puts("logs:not init path yet ");
        strcpy((char *)(a1 + 12), (const char *)(a1 + 42));
      }
      if ( sub_34AF4(a1) )
      {
        puts("logs:log remote");
        sub_349FC(v8);
      }
    }
  }
  sub_34700(off_6D364, 1u);
  v6 = fopen(off_6D364, "a+");
  v7 = v6;
  if ( v6 )
    fprintf(v6, "Assert fail!! %s:%d: input arg wrong\n", "log.c", 207);
  fclose(v7);
  _assert_fail((const char *)&word_513BC, "log.c", 0xCFu, "log_thread_routine");
}
