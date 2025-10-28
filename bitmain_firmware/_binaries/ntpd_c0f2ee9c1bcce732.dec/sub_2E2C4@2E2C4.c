char *__fastcall sub_2E2C4(int a1)
{
  struct tm *v1; // r0
  time_t v3; // [sp+14h] [bp-4h] BYREF

  v3 = a1 + 2085978496;
  v1 = gmtime(&v3);
  if ( v1 )
    snprintf(
      byte_80078,
      0x14u,
      "%04d%02d%02d%02d%02d",
      v1->tm_year + 1900,
      v1->tm_mon + 1,
      v1->tm_mday,
      v1->tm_hour,
      v1->tm_min);
  else
    strcpy(byte_80078, "gmtime() error");
  return byte_80078;
}
