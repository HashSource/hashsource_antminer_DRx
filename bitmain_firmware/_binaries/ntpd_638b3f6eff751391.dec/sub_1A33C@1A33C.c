struct tm *__fastcall sub_1A33C(char *a1, int a2)
{
  char v2; // r2
  char *v3; // r3
  char *v4; // r12
  int v5; // t1
  char *v6; // r4
  struct tm *result; // r0
  size_t v8; // r0
  time_t v9; // [sp+14h] [bp-CCh] BYREF
  char v10; // [sp+18h] [bp-C8h] BYREF
  char v11; // [sp+19h] [bp-C7h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v3 = &v11;
    do
    {
      *(v3 - 1) = v2;
      v4 = v3;
      v5 = (unsigned __int8)*++a1;
      v2 = v5;
      ++v3;
    }
    while ( v5 );
  }
  else
  {
    v4 = &v10;
  }
  v9 = a2 + 2085978496;
  *v4 = 61;
  v6 = v4 + 1;
  result = gmtime(&v9);
  if ( result )
  {
    if ( (unsigned int)(v6 - &v10) > 0xC7 )
      off_7C9FC("ntp_control.c", 1138, 2, "(cp - buffer) < sizeof(buffer)");
    snprintf(
      v6,
      &v10 - v6 + 200,
      "%04d%02d%02d%02d%02d",
      result->tm_year + 1900,
      result->tm_mon + 1,
      result->tm_mday,
      result->tm_hour,
      result->tm_min);
    v8 = strlen(v6);
    return (struct tm *)sub_19D60(&v10, &v6[v8] - &v10, 0);
  }
  return result;
}
