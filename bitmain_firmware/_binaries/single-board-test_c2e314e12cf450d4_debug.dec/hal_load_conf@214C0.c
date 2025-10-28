int __fastcall hal_load_conf(const char *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  size_t v6; // r4
  int v7; // r0
  int v8; // r0
  int v9; // r0
  size_t v10; // r4
  _BYTE v13[252]; // [sp+8h] [bp+8h] BYREF
  int v14; // [sp+104h] [bp+104h]
  int v15; // [sp+108h] [bp+108h]
  int v16; // [sp+10Ch] [bp+10Ch]
  int v17; // [sp+110h] [bp+110h]
  int v18; // [sp+114h] [bp+114h]
  int v19; // [sp+118h] [bp+118h]
  int v20; // [sp+11Ch] [bp+11Ch]
  void *ptr; // [sp+120h] [bp+120h]
  json_t *v22; // [sp+124h] [bp+124h]
  const json_t *v23; // [sp+128h] [bp+128h]
  json_t *file; // [sp+12Ch] [bp+12Ch]
  signed int j; // [sp+130h] [bp+130h]
  signed int i; // [sp+134h] [bp+134h]

  file = 0;
  v23 = 0;
  v22 = 0;
  ptr = 0;
  memset(chains, 255, sizeof(chains));
  memset(fans, 255, sizeof(fans));
  file = json_load_file(a1, 0, (json_error_t *)v13);
  if ( file && !*(_DWORD *)file )
  {
    ptr = json_dumps(file, 0);
    printf("%s:%d", "hal_load_conf", 46);
    printf("json = %s \n", (const char *)ptr);
    free(ptr);
    v23 = (const json_t *)json_object_get(file, "chain");
    if ( v23 && *(_DWORD *)v23 == 1 )
    {
      for ( i = 0; ; ++i )
      {
        v6 = i;
        if ( v6 >= json_array_size(v23) || i > 15 )
          break;
        v22 = json_array_get(v23, i);
        if ( !v22 || *(_DWORD *)v22 )
        {
          printf("%s:%d", "hal_load_conf", 62);
          printf("%s,%d bad object in chain\n", "platform/7007/src/hal_conf.c", 62);
          json_decref(file);
          return -3;
        }
        v20 = json_object_get(v22, "id");
        v2 = json_integer_value(v20);
        chains[4 * i] = v2;
        v19 = json_object_get(v22, "uart");
        v3 = json_integer_value(v19);
        chains[4 * i + 1] = v3;
        v18 = json_object_get(v22, "plug");
        v4 = json_integer_value(v18);
        chains[4 * i + 2] = v4;
        v17 = json_object_get(v22, "reset");
        v5 = json_integer_value(v17);
        chains[4 * i + 3] = v5;
      }
      v23 = (const json_t *)json_object_get(file, "fan");
      if ( v23 && *(_DWORD *)v23 == 1 )
      {
        for ( j = 0; ; ++j )
        {
          v10 = j;
          if ( v10 >= json_array_size(v23) || j > 5 )
            break;
          v22 = json_array_get(v23, j);
          if ( !v22 || *(_DWORD *)v22 )
          {
            printf("%s:%d", "hal_load_conf", 88);
            printf("%s,%d bad object in fan\n", "platform/7007/src/hal_conf.c", 88);
            json_decref(file);
            return -5;
          }
          v16 = json_object_get(v22, "id");
          v7 = json_integer_value(v16);
          fans[3 * j] = v7;
          v15 = json_object_get(v22, "name");
          v8 = json_integer_value(v15);
          fans[3 * j + 1] = v8;
          v14 = json_object_get(v22, "max");
          v9 = json_integer_value(v14);
          fans[3 * j + 2] = v9;
        }
        v22 = (json_t *)json_object_get(file, "red");
        if ( v22 && *(_DWORD *)v22 == 3 )
        {
          red_addr = json_integer_value(v22);
          v22 = (json_t *)json_object_get(file, "green");
          if ( v22 && *(_DWORD *)v22 == 3 )
          {
            green_addr = json_integer_value(v22);
            v22 = (json_t *)json_object_get(file, "reset");
            if ( v22 && *(_DWORD *)v22 == 3 )
            {
              reset_addr = json_integer_value(v22);
              v22 = (json_t *)json_object_get(file, "ipreport");
              if ( v22 && *(_DWORD *)v22 == 3 )
              {
                ipreport_addr = json_integer_value(v22);
                json_decref(file);
                conf_loaded = 1;
                return 0;
              }
              else
              {
                printf("%s:%d", "hal_load_conf", 127);
                printf("%s,%d bad ipreport\n", "platform/7007/src/hal_conf.c", 127);
                json_decref(file);
                return -9;
              }
            }
            else
            {
              printf("%s:%d", "hal_load_conf", 119);
              printf("%s,%d bad reset\n", "platform/7007/src/hal_conf.c", 119);
              json_decref(file);
              return -8;
            }
          }
          else
          {
            printf("%s:%d", "hal_load_conf", 111);
            printf("%s,%d bad green\n", "platform/7007/src/hal_conf.c", 111);
            json_decref(file);
            return -7;
          }
        }
        else
        {
          printf("%s:%d", "hal_load_conf", 103);
          printf("%s,%d bad red\n", "platform/7007/src/hal_conf.c", 103);
          json_decref(file);
          return -6;
        }
      }
      else
      {
        printf("%s:%d", "hal_load_conf", 79);
        printf("%s,%d bad fan format\n", "platform/7007/src/hal_conf.c", 79);
        json_decref(file);
        return -4;
      }
    }
    else
    {
      printf("%s:%d", "hal_load_conf", 52);
      printf("%s,%d bad chain format\n", "platform/7007/src/hal_conf.c", 52);
      json_decref(file);
      return -2;
    }
  }
  else
  {
    printf("%s:%d", "hal_load_conf", 42);
    printf("%s,%d bad json format\n", "platform/7007/src/hal_conf.c", 42);
    return -1;
  }
}
