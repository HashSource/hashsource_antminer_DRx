char *sub_9E38()
{
  int v0; // r10
  int v1; // r7
  char *v2; // r9
  char *v3; // r0
  const char *v4; // r5
  char *v5; // r0
  const char *v6; // r11
  char *v7; // r0
  const char *v8; // r6
  char *v9; // r8
  char *v10; // r0
  const char *v11; // r1
  char *v12; // r11
  FILE *v14; // r4
  int v15; // r5
  DIR *v16; // r4
  struct dirent *v17; // r0
  const char *d_name; // r8
  FILE *v19; // r10
  char *v20; // r11
  char *v21; // r0
  int v22; // r8
  int *v23; // r9
  char *v24; // r0
  char *v25; // r3
  int v26; // r0
  int v27; // r10
  DIR *v28; // r9
  struct dirent *v29; // r0
  struct dirent *v30; // r12
  const char *v31; // r10
  int v32; // r3
  const char *v33; // r0
  char *ptr; // [sp+8h] [bp-3ACh]
  char *ptra; // [sp+8h] [bp-3ACh]
  char *v36; // [sp+Ch] [bp-3A8h]
  size_t v37; // [sp+10h] [bp-3A4h]
  FILE *stream; // [sp+14h] [bp-3A0h]
  int v39; // [sp+1Ch] [bp-398h] BYREF
  int v40; // [sp+20h] [bp-394h] BYREF
  char v41[20]; // [sp+24h] [bp-390h] BYREF
  char s[120]; // [sp+38h] [bp-37Ch] BYREF
  char s1[256]; // [sp+B0h] [bp-304h] BYREF
  char name[256]; // [sp+1B0h] [bp-204h] BYREF
  char filename[260]; // [sp+2B0h] [bp-104h] BYREF

  ptr = (char *)calloc(8u, 0x10u);
  if ( ptr )
  {
    stream = fopen("/proc/bus/i2c", "r");
    if ( stream )
    {
      v0 = 0;
      v1 = 0;
      v2 = ptr;
      while ( 1 )
      {
        ++v1;
        if ( !fgets(s, 120, stream) )
        {
          ptr = v2;
          fclose(stream);
          return ptr;
        }
        v3 = strrchr(s, 9);
        *v3 = 0;
        v4 = v3 + 1;
        v37 = sub_9B94(v3 + 1);
        v5 = strrchr(s, 9);
        *v5 = 0;
        v6 = v5 + 1;
        ptra = (char *)sub_9B94(v5 + 1);
        v7 = strrchr(s, 9);
        *v7 = 0;
        v8 = v7 + 1;
        v36 = &ptra[sub_9B94(v7 + 1)];
        _isoc99_sscanf(s, "i2c-%d", &v39);
        if ( (v1 & 7) == 0 )
        {
          v2 = sub_9C30(v2, v1);
          if ( !v2 )
            return 0;
        }
        v9 = &v2[v0];
        v10 = (char *)malloc((size_t)&v36[v37]);
        v11 = v6;
        v12 = v10;
        if ( !v10 )
          break;
        *(_DWORD *)&v2[v0] = v39;
        v0 += 16;
        *((_DWORD *)v9 + 1) = strcpy(v10, v11);
        *((_DWORD *)v9 + 2) = strcpy(&ptra[(_DWORD)v12], v8);
        *((_DWORD *)v9 + 3) = strcpy(&v36[(_DWORD)v12], v4);
      }
      sub_9BF8(v2);
      return 0;
    }
    else
    {
      v14 = fopen("/proc/mounts", "r");
      if ( v14 )
      {
        do
        {
          if ( !fgets(filename, 255, v14) )
          {
            fclose(v14);
            return ptr;
          }
          _isoc99_sscanf(filename, "%*[^ ] %[^ ] %[^ ] %*s\n", name, s1);
        }
        while ( strcasecmp(s1, "sysfs") );
        v15 = 0;
        fclose(v14);
        strcat(name, "/class/i2c-dev");
        v16 = opendir(name);
        if ( v16 )
        {
LABEL_18:
          while ( 1 )
          {
            v17 = readdir(v16);
            if ( !v17 )
              break;
            while ( v17->d_name[0] != 46 || v17->d_name[1] && (v17->d_name[1] != 46 || v17->d_name[2]) )
            {
              d_name = v17->d_name;
              sprintf(filename, "%s/%s/name", name, v17->d_name);
              v19 = fopen(filename, "r");
              if ( !v19 )
              {
                sprintf(filename, "%s/%s/device/name", name, d_name);
                v19 = fopen(filename, "r");
                if ( !v19 )
                {
                  sprintf(filename, "%s/%s/device", name, d_name);
                  v28 = opendir(filename);
                  if ( v28 )
                  {
                    while ( 1 )
                    {
                      v29 = readdir(v28);
                      v30 = v29;
                      v31 = v29->d_name;
                      if ( !v29 )
                        break;
                      v32 = (unsigned __int8)v29->d_name[0];
                      v33 = v29->d_name;
                      if ( (v32 != 46 || v30->d_name[1] && (v30->d_name[1] != 46 || v30->d_name[2]))
                        && !strncmp(v33, "i2c-", 4u) )
                      {
                        sprintf(filename, "%s/%s/device/%s/name", name, d_name, v31);
                        v19 = fopen(filename, "r");
                        if ( v19 )
                          goto LABEL_21;
                      }
                    }
                  }
                  goto LABEL_18;
                }
              }
LABEL_21:
              v20 = fgets(s, 120, v19);
              fclose(v19);
              if ( !v20 )
              {
                fprintf((FILE *)stderr, "%s: read error\n", filename);
                goto LABEL_18;
              }
              v21 = strchr(s, 10);
              if ( v21 )
                *v21 = 0;
              if ( !_isoc99_sscanf(d_name, "i2c-%d", &v39) )
                goto LABEL_18;
              if ( !strncmp(s, "ISA ", 4u) )
              {
                v22 = 1;
              }
              else
              {
                v26 = sub_9D08(v39, v41, 0x14u, 1);
                v27 = v26;
                if ( v26 >= 0 )
                {
                  if ( ioctl(v26, 0x705u, &v40) >= 0 )
                  {
                    if ( (v40 & 1) != 0 )
                    {
                      v22 = 2;
                    }
                    else if ( (v40 & 0x7E0000) != 0 )
                    {
                      v22 = 3;
                    }
                    else
                    {
                      v22 = 0;
                    }
                  }
                  else
                  {
                    v22 = 4;
                  }
                  close(v27);
                }
                else
                {
                  v22 = 4;
                }
              }
              if ( ((v15 + 1) & 7) == 0 )
              {
                ptr = sub_9C30(ptr, v15 + 1);
                if ( !ptr )
                  return 0;
              }
              v23 = (int *)&ptr[16 * v15];
              *v23 = v39;
              v24 = _strdup(s);
              v23[1] = (int)v24;
              if ( !v24 )
              {
                sub_9BF8(ptr);
                return 0;
              }
              ++v15;
              v25 = off_AD38[2 * v22 + 1];
              v23[2] = (int)off_AD38[2 * v22];
              v23[3] = (int)v25;
              v17 = readdir(v16);
              if ( !v17 )
                goto LABEL_32;
            }
          }
LABEL_32:
          closedir(v16);
        }
      }
    }
  }
  return ptr;
}
