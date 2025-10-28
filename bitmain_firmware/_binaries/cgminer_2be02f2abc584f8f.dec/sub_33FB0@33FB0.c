int __fastcall sub_33FB0(pthread_mutex_t *a1)
{
  int v2; // r2
  size_t v3; // r0
  int v4; // r4
  char *v5; // r4
  int v6; // r6
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  char *v9; // r4
  int v10; // r2
  size_t v11; // r0
  int v12; // r3
  int v13; // r3
  char s[2048]; // [sp+Ch] [bp-28FCh] BYREF
  int v16; // [sp+80Ch] [bp-20FCh] BYREF
  char v17[8192]; // [sp+908h] [bp-2000h] BYREF

  v2 = dword_79148++;
  sprintf(
    v17,
    "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}",
    v2,
    (const char *)a1[7].__kind,
    (const char *)a1[7].__nusers);
  v3 = strlen(v17);
  if ( !sub_30BA0(a1, v17, v3) )
    return 0;
  while ( 1 )
  {
    v5 = sub_3063C((int)a1);
    if ( !v5 )
      return 0;
    if ( !sub_32F44(a1, (int)v5) )
      break;
    free(v5);
  }
  v6 = sub_5662C(v5, 0, &v16);
  free(v5);
  v7 = (_DWORD *)sub_57304(v6, "result");
  v8 = (_DWORD *)sub_57304(v6, "error");
  if ( !v7 || *v7 == 6 )
  {
    if ( !v8 )
    {
      v9 = (char *)malloc(0x11u);
      if ( v9 )
        strcpy(v9, "(unknown reason)");
      goto LABEL_15;
    }
LABEL_12:
    v9 = (char *)sub_54AFC(v8, 3);
LABEL_15:
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "pool %d JSON stratum auth failed: %s", a1->__lock, v9);
      sub_3F1C0(7, s, 0);
    }
    free(v9);
    sub_304C4(a1);
    v4 = 0;
    goto LABEL_29;
  }
  if ( v8 && *v8 != 7 )
    goto LABEL_12;
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "Stratum authorisation success for pool %d", a1->__lock);
    sub_3F1C0(7, s, 0);
  }
  a1[4].__size[3] = 1;
  byte_75AA8 = 1;
  if ( dword_79C70 )
  {
    v10 = dword_79148++;
    sprintf(v17, "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}", v10, dword_79C70);
    v11 = strlen(v17);
    sub_30BA0(a1, v17, v11);
  }
  v4 = 1;
LABEL_29:
  if ( v6 )
  {
    v12 = *(_DWORD *)(v6 + 4);
    if ( v12 != -1 )
    {
      v13 = v12 - 1;
      *(_DWORD *)(v6 + 4) = v13;
      if ( !v13 )
        sub_57A64(v6);
    }
  }
  return v4;
}
