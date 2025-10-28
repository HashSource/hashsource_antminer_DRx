int __fastcall sub_2D32C(pthread_mutex_t *a1)
{
  const char *kind; // r3
  int v3; // r2
  size_t v4; // r0
  int v5; // r8
  int v6; // r6
  char *v7; // r0
  char *v8; // r4
  int v10; // r9
  _DWORD *v11; // r4
  _DWORD *v12; // r0
  char *v13; // r4
  int v14; // r3
  int v15; // r3
  char *v16; // r0
  int v17; // r3
  int v18; // r2
  size_t v19; // r0
  const char *nusers; // [sp+0h] [bp-290Ch]
  _BYTE v21[252]; // [sp+Ch] [bp-2900h] BYREF
  char v22[2048]; // [sp+108h] [bp-2804h] BYREF
  char s[8196]; // [sp+908h] [bp-2004h] BYREF

  kind = (const char *)a1[7].__kind;
  v3 = dword_732B0;
  nusers = (const char *)a1[7].__nusers;
  ++dword_732B0;
  sprintf(s, "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}", v3, kind, nusers);
  v4 = strlen(s);
  v5 = sub_2AD28(a1, s, v4);
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = sub_2AFE4((int)a1);
      v8 = v7;
      if ( !v7 )
        return 0;
      v6 = sub_2C7C4(a1, v7);
      if ( !v6 )
        break;
      free(v8);
    }
    v10 = sub_475C8(v8, 0, v21);
    free(v8);
    v11 = (_DWORD *)sub_47F24(v10, "result");
    v12 = (_DWORD *)sub_47F24(v10, "error");
    if ( !v11 || *v11 == 6 )
    {
      if ( !v12 )
      {
        v16 = (char *)malloc(0x11u);
        v13 = v16;
        if ( v16 )
          strcpy(v16, "(unknown reason)");
        goto LABEL_13;
      }
    }
    else if ( !v12 || *v12 == 7 )
    {
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(v22, 0x800u, "Stratum authorisation success for pool %d", a1->__lock);
        sub_343C4(7, v22, 0);
      }
      v17 = dword_73224;
      byte_6F915 = 1;
      v6 = v5;
      a1[4].__size[3] = 1;
      if ( v17 )
      {
        v18 = dword_732B0++;
        sprintf(s, "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}", v18, v17);
        v19 = strlen(s);
        sub_2AD28(a1, s, v19);
      }
      goto LABEL_18;
    }
    v13 = (char *)sub_46454(v12, 3);
LABEL_13:
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      snprintf(v22, 0x800u, "pool %d JSON stratum auth failed: %s", a1->__lock, v13);
      sub_343C4(7, v22, 0);
    }
    free(v13);
    sub_2AC10(a1);
LABEL_18:
    if ( v10 )
    {
      v14 = *(_DWORD *)(v10 + 4);
      if ( v14 != -1 )
      {
        v15 = v14 - 1;
        *(_DWORD *)(v10 + 4) = v15;
        if ( !v15 )
          sub_482FC(v10);
      }
    }
    return v6;
  }
  return 0;
}
