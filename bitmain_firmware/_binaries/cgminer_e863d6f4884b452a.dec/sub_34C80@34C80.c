void sub_34C80()
{
  struct tm *v0; // r5
  FILE *v1; // r0
  FILE *v2; // r4
  time_t v3; // [sp+0h] [bp-8h] BYREF
  pthread_t newthread; // [sp+4h] [bp-4h] BYREF

  if ( byte_6FA9E != 48 )
  {
    time(&v3);
    v0 = localtime(&v3);
    strftime(&byte_6FA9E, 0xFu, "%Y-%m/%d", v0);
    strftime(byte_6FABC, 0xAu, "%H-%M-%S", v0);
    printf("logs: init path %s ts %s\n", &byte_6FA9E, byte_6FABC);
    dword_6FA78 = (int)"/var/log";
    dword_6FA7C = (int)"config";
    dword_6FAD0 = (int)"cglog_init";
    dword_6FA74 = 1;
    sub_34AF4((int)&dword_6FA74);
    if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_34E6C, &dword_6FA74) )
    {
      sub_34700(off_6D364, 1u);
      v1 = fopen(off_6D364, "a+");
      v2 = v1;
      if ( v1 )
        fprintf(v1, "Assert fail!! %s:%d: Failed to create log thread", "log.c", 304);
      fclose(v2);
      _assert_fail((const char *)&word_513BC, "log.c", 0x130u, "log_init");
    }
    pthread_detach(newthread);
  }
}
