pthread_mutex_t *__fastcall sub_31110(pthread_mutex_t *result)
{
  pthread_mutex_t *v1; // r4
  int v2; // r2
  size_t v3; // r0
  char v4[2048]; // [sp+0h] [bp-2800h] BYREF
  char s[8192]; // [sp+800h] [bp-2000h] BYREF

  v1 = result;
  if ( result[24].__size[4] )
  {
    v2 = dword_80228++;
    sprintf(s, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v2);
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(v4, 0x800u, "Send extranonce.subscribe for stratum pool %d", v1->__lock);
      sub_3F178(7, v4, 0);
    }
    v3 = strlen(s);
    return (pthread_mutex_t *)sub_30E24(v1, s, v3);
  }
  return result;
}
