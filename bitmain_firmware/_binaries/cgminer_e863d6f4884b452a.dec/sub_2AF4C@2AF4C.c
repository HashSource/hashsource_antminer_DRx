int __fastcall sub_2AF4C(pthread_mutex_t *a1)
{
  int v1; // r2
  size_t v3; // r0
  char v5[2048]; // [sp+0h] [bp-2804h] BYREF
  char s[8196]; // [sp+800h] [bp-2004h] BYREF

  v1 = dword_732B0++;
  sprintf(s, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v1);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(v5, 0x800u, "Send extranonce.subscribe for stratum pool %d", a1->__lock);
    sub_343C4(7, v5, 0);
  }
  v3 = strlen(s);
  return sub_2AD28(a1, s, v3);
}
