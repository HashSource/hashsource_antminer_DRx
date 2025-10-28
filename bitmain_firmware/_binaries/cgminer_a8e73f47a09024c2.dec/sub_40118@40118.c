void __fastcall __noreturn sub_40118(int a1)
{
  FILE *v2; // r0
  FILE *v3; // r4
  unsigned int v4; // r4
  struct tm *v5; // r9
  int v6; // r11
  size_t v7; // r0
  char v8[20]; // [sp+0h] [bp-3Ch] BYREF
  char s[32]; // [sp+14h] [bp-28h] BYREF
  time_t timer; // [sp+34h] [bp-8h] BYREF

  if ( !a1 )
  {
    sub_3F61C(off_7A534, 1u);
    v2 = fopen(off_7A534, "a+");
    v3 = v2;
    if ( v2 )
      fprintf(v2, "Assert fail!! %s:%d: input arg wrong\n", "log.c", 207);
    fclose(v3);
    _assert_fail(word_661D0, "log.c", 0xCFu, "log_thread_routine");
  }
  puts("logs:log_thread_routine");
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 92) = "cglog_sync";
  v4 = 1;
  while ( 1 )
  {
    do
    {
      sleep(1u);
      ++v4;
    }
    while ( v4 != 30 * (v4 / 0x1E) );
    time(&timer);
    v5 = localtime(&timer);
    strftime(s, 0xFu, "%Y-%m/%d", v5);
    strftime(v8, 0xAu, "%H-%M-%S", v5);
    if ( !strcmp((const char *)(a1 + 42), "1970") )
    {
      if ( timer > 30660000 )
      {
        v6 = sub_3FCD0(a1, "cglog_init", s, v8);
        if ( sub_3FCD0(a1, "cglog_sync", s, v8) | v6 )
        {
          sub_3FF9C(a1);
        }
        else
        {
          strncpy((char *)(a1 + 42), s, 0x1Eu);
          strncpy((char *)(a1 + 72), v8, 0x14u);
        }
      }
    }
    else if ( *(_BYTE *)(a1 + 12) )
    {
      v7 = strlen(s);
      if ( strncmp((const char *)(a1 + 12), s, v7) )
      {
        puts("logs:_log_generate_symbol_link");
        if ( !sub_3FE68(a1, "cglog_sync", s) )
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
    if ( sub_3F930(a1) )
    {
      puts("logs:log remote");
      sub_3FF9C(a1);
    }
  }
}
