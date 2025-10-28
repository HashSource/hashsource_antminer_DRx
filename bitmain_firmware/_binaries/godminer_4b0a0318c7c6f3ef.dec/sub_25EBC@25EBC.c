void *__fastcall sub_25EBC(_DWORD *a1)
{
  void *result; // r0
  _DWORD *v3; // r5
  char *v4; // r0
  char *v5; // r0
  char *v6; // r0
  char v7[64]; // [sp+0h] [bp-C4h] BYREF
  char s[64]; // [sp+40h] [bp-84h] BYREF
  char v9[68]; // [sp+80h] [bp-44h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(s, 0, sizeof(s));
  result = memset(v9, 0, 0x40u);
  if ( a1 )
  {
    v3 = json_object();
    snprintf(v7, 0x40u, "%s", g_miner_version);
    v4 = BUFX_strdup(v7);
    json_object_set_new(v3, "miner_version", v4);
    snprintf(s, 0x40u, "%s", g_miner_compiletime);
    v5 = BUFX_strdup(s);
    json_object_set_new(v3, "CompileTime", v5);
    snprintf(v9, 0x40u, "%s", g_miner_type);
    v6 = BUFX_strdup(v9);
    json_object_set_new(v3, "type", v6);
    return (void *)json_object_set_new(a1, "INFO", v3);
  }
  return result;
}
