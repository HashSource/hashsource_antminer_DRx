int __fastcall sub_2E9B0(pthread_mutex_t *a1)
{
  const char *owner; // r12
  const char *count; // r3
  int v4; // r2
  size_t v5; // r0
  char *v6; // r4
  int v7; // r4
  int v9; // r7
  _DWORD *v10; // r4
  _DWORD *v11; // r0
  char *v12; // r4
  char *v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r2
  size_t v17; // r0
  int v18; // r2
  size_t v19; // r0
  _BYTE v20[252]; // [sp+Ch] [bp-2900h] BYREF
  char s[2040]; // [sp+108h] [bp-2804h] BYREF
  char v22[8196]; // [sp+908h] [bp-2004h] BYREF

  owner = (const char *)a1[7].__owner;
  count = (const char *)a1[7].__count;
  v4 = dword_636A0++;
  sprintf(v22, "{\"id\": %d, \"method\": \"mining.authorize\", \"params\": [\"%s\", \"%s\"]}", v4, count, owner);
  v5 = strlen(v22);
  if ( sub_2BEA8(a1, v22, v5) )
  {
    while ( 1 )
    {
      v6 = sub_2B920((int)a1);
      if ( !v6 )
        return 0;
      if ( !sub_2DC70(a1, (int)v6) )
        break;
      free(v6);
    }
    v9 = sub_45AA8(v6, 0, v20);
    free(v6);
    v10 = (_DWORD *)sub_46698(v9, "result");
    v11 = (_DWORD *)sub_46698(v9, "error");
    if ( !v10 || *v10 == 6 )
    {
      if ( !v11 )
      {
        v12 = (char *)malloc(0x11u);
        if ( v12 )
          strcpy(v12, "(unknown reason)");
        goto LABEL_13;
      }
    }
    else if ( !v11 || *v11 == 7 )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "Stratum authorisation success for pool %d", a1->__lock);
        sub_38438(7, s, 0);
      }
      a1[4].__size[3] = 1;
      byte_62F60 = 1;
      if ( dword_640C4 )
      {
        v18 = dword_636A0++;
        sprintf(v22, "{\"id\": %d, \"method\": \"mining.suggest_difficulty\", \"params\": [%d]}", v18, dword_640C4);
        v19 = strlen(v22);
        sub_2BEA8(a1, v22, v19);
      }
      if ( dword_60154 )
      {
        v16 = dword_636A0++;
        sprintf(v22, "{\"id\": %d, \"method\": \"mining.multi_version\", \"params\": [%d]}", v16, dword_60154);
        v7 = 1;
        v17 = strlen(v22);
        sub_2BEA8(a1, v22, v17);
      }
      else
      {
        v7 = 1;
      }
      goto LABEL_18;
    }
    v12 = (char *)sub_440CC(v11, 3);
LABEL_13:
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(s, 0x800u, "pool %d JSON stratum auth failed: %s", a1->__lock, v12);
      sub_38438(7, s, 0);
    }
    v13 = v12;
    v7 = 0;
    free(v13);
    sub_2B7C0(a1);
LABEL_18:
    if ( v9 )
    {
      v14 = *(_DWORD *)(v9 + 4);
      if ( v14 != -1 )
      {
        v15 = v14 - 1;
        *(_DWORD *)(v9 + 4) = v15;
        if ( !v15 )
          sub_46C5C(v9);
      }
    }
    return v7;
  }
  return 0;
}
