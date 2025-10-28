int __fastcall sub_19C2C(char *a1, size_t a2, time_t *a3)
{
  struct tm *v5; // r0
  time_t v7; // [sp+1Ch] [bp-4h] BYREF

  v7 = *a3;
  v5 = localtime(&v7);
  return snprintf(
           a1,
           a2,
           "[%d-%02d-%02d %02d:%02d:%02d]",
           v5->tm_year + 1900,
           v5->tm_mon + 1,
           v5->tm_mday,
           v5->tm_hour,
           v5->tm_min,
           v5->tm_sec);
}
