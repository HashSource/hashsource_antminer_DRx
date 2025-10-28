int __fastcall sub_2C1C4(int result)
{
  pthread_mutex_t *v1; // r4
  int v2; // r2
  size_t v3; // r0
  char v4[2048]; // [sp+0h] [bp-2800h] BYREF
  char s[8192]; // [sp+800h] [bp-2000h] BYREF

  v1 = (pthread_mutex_t *)result;
  if ( *(_BYTE *)(result + 572) )
  {
    v2 = dword_636A0++;
    sprintf(s, "{\"id\": %d, \"method\": \"mining.extranonce.subscribe\", \"params\": []}", v2);
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(v4, 0x800u, "Send extranonce.subscribe for stratum pool %d", v1->__lock);
      sub_38438(7, v4, 0);
    }
    v3 = strlen(s);
    return sub_2BEA8(v1, s, v3);
  }
  return result;
}
