int __fastcall sub_4D29C(const char *a1, int a2, int a3)
{
  FILE *v5; // r7
  char *v6; // r0
  signed int v7; // r0
  signed int v8; // r6
  signed int v9; // r5
  int v10; // r4
  int v11; // r11
  const unsigned __int16 **v12; // r0
  char *v13; // r3
  const unsigned __int16 *v14; // r0
  int v15; // r4
  unsigned int v16; // r3
  const unsigned __int16 **v17; // r0
  char *v18; // r2
  char *v19; // r11
  char *v20; // r6
  char *v21; // r9
  int v22; // t1
  char *v23; // r10
  const unsigned __int16 *v24; // r0
  int v25; // r3
  char *v26; // r2
  int v27; // r0
  char *v28; // r10
  int v29; // r4
  int v30; // r6
  int v31; // r0
  int v32; // r5
  int v33; // r0
  int *v35; // r0
  char *v36; // r0
  int *v37; // r0
  char *v38; // r0
  int *v39; // r0
  char *v40; // r0
  int v42; // [sp+10h] [bp-104h] BYREF
  char filename[20]; // [sp+14h] [bp-100h] BYREF
  char s[32]; // [sp+28h] [bp-ECh] BYREF
  char v45[100]; // [sp+48h] [bp-CCh] BYREF
  char src[100]; // [sp+ACh] [bp-68h] BYREF

  snprintf(s, 0x1Eu, "/dev/mixer%d", a3);
  snprintf(filename, 0x14u, "%s%d", "/etc/ntp.audio", a3);
  v5 = fopen(filename, "r");
  if ( v5
    || (printf("audio_config_read: <%s> NO\n", filename),
        snprintf(filename, 0x14u, "%s.%d", "/etc/ntp.audio", a3),
        (v5 = fopen(filename, "r")) != 0)
    || (printf("audio_config_read: <%s> NO\n", filename),
        strcpy(filename, "/etc/ntp.audio"),
        (v5 = fopen(filename, "r")) != 0) )
  {
    printf("audio_config_read: reading <%s>\n", filename);
    while ( 1 )
    {
      do
      {
LABEL_3:
        if ( !fgets(v45, 100, v5) )
        {
          fclose(v5);
          goto LABEL_52;
        }
        v6 = strchr(v45, 35);
        if ( v6 )
          *v6 = 0;
        v7 = strlen(v45);
        v8 = v7;
        v9 = v7;
        if ( v7 > 0 )
        {
          v9 = v7 - 1;
          v10 = (unsigned __int8)v45[v7 - 1];
          if ( (v10 & 0xFFFFFF80) == 0 )
          {
            v12 = _ctype_b_loc();
            v11 = v10 & 0x80;
            v13 = &v45[v8];
            v14 = *v12;
            while ( (v14[v10] & 0x2000) != 0 )
            {
              *--v13 = v11;
              v8 = v9;
              if ( !v9 )
                goto LABEL_14;
              v10 = (unsigned __int8)*(v13 - 1);
              if ( (v10 & 0x80) != 0 )
                goto LABEL_14;
              --v9;
            }
          }
          v9 = v8;
        }
LABEL_14:
        v15 = (unsigned __int8)v45[0];
      }
      while ( !v45[0] );
      v16 = v45[0] & 0x80;
      if ( v16 )
      {
        v19 = v45;
      }
      else
      {
        v17 = _ctype_b_loc();
        v18 = v45;
        while ( 1 )
        {
          v19 = v18++;
          if ( ((*v17)[v15] & 0x2000) == 0 )
            break;
          v15 = (unsigned __int8)v19[1];
          if ( !v19[1] )
            goto LABEL_3;
          v16 = v15 & 0xFFFFFF80;
          if ( (v15 & 0xFFFFFF80) != 0 )
          {
            v19 = v18;
            goto LABEL_20;
          }
        }
        v15 = (unsigned __int8)*v19;
        if ( !*v19 )
        {
          v23 = v19;
          goto LABEL_33;
        }
        v16 = v15 & 0xFFFFFF80;
      }
LABEL_20:
      v20 = v19 + 1;
      v21 = v19;
      while ( 1 )
      {
        if ( v16 )
          goto LABEL_22;
        v24 = *_ctype_b_loc();
        if ( (v24[(__int16)v15] & 0x200) == 0 )
          break;
        *(v20 - 1) = (*_ctype_toupper_loc())[(__int16)v15];
LABEL_22:
        v22 = (unsigned __int8)*++v21;
        v15 = v22;
        v23 = v20++;
        v16 = v22 & 0xFFFFFF80;
        if ( !v22 )
          goto LABEL_33;
      }
      if ( (v24[(__int16)v15] & 0x2000) == 0 && v15 != 61 )
        goto LABEL_22;
      v25 = (unsigned __int8)*v21;
      if ( !*v21 || (v25 & 0x80) != 0 )
      {
        v23 = v21;
      }
      else
      {
        v26 = v21;
        while ( 1 )
        {
          v23 = v26;
          if ( (v24[v25] & 0x2000) == 0 && v25 != 61 )
            break;
          v25 = (unsigned __int8)*++v26;
          if ( !v23[1] || (v25 & 0x80) != 0 )
          {
            v23 = v26;
            break;
          }
        }
      }
LABEL_33:
      if ( !strncmp(v19, "IDEV", 4u) && sscanf(v23, "%99s", src) == 1 )
      {
        strncpy(&byte_CB5FC, src, 0x64u);
        printf("idev <%s>\n", src);
      }
      else if ( !strncmp(v19, "CDEV", 4u) && sscanf(v23, "%99s", src) == 1 )
      {
        strncpy(&byte_CB660, src, 0x64u);
        printf("cdev <%s>\n", src);
      }
      else if ( !strncmp(v19, "AGC", 3u) && sscanf(v23, "%99s", src) == 1 )
      {
        strncpy(&byte_CB598, src, 0x64u);
        printf("agc <%s> %d\n", src, v9);
      }
      else if ( !strncmp(v19, "MONITOR", 7u) && sscanf(v23, "%99s", src) == 1 )
      {
        strncpy(&dest, src, 0x64u);
        v27 = sub_4D24C(src, -1);
        printf("monitor <%s> %d\n", src, v27);
      }
    }
  }
  printf("audio_config_read: <%s> NO\n", filename);
LABEL_52:
  v28 = s;
  if ( byte_CB5FC )
    a1 = &byte_CB5FC;
  if ( byte_CB660 )
    v28 = &byte_CB660;
  v29 = open(a1, 2050, 511);
  if ( v29 < 0 )
  {
    sub_4FE78(3, "audio_init: %s %m\n", a1);
  }
  else
  {
    dword_C9AE8 = open(v28, 2);
    if ( dword_C9AE8 < 0 )
    {
      sub_4FE78(3, "audio_init: invalid control device <%s>\n", v28);
      close(v29);
      return dword_C9AE8;
    }
    else
    {
      printf("audio_init: <%s> bufsiz %d\n", a1, a2);
      v42 = 1048582;
      if ( ioctl(v29, 0xC004500A, &v42) == -1 )
      {
        v35 = _errno_location();
        v36 = strerror(*v35);
        printf("audio_init: SNDCTL_DSP_SETFRAGMENT: %s\n", v36);
      }
      v30 = dword_C9AE8;
      if ( ioctl(dword_C9AE8, 0x80044DFE, &dword_C9AEC) == -1 )
      {
        v37 = _errno_location();
        v38 = strerror(*v37);
        printf("SOUND_MIXER_READ_DEVMASK: %s\n", v38);
        v30 = dword_C9AE8;
      }
      if ( ioctl(v30, 0x80044DFD, &dword_C9AF0) == -1 )
      {
        v39 = _errno_location();
        v40 = strerror(*v39);
        printf("SOUND_MIXER_READ_RECMASK: %s\n", v40);
      }
      if ( byte_CB598 )
      {
        v31 = sub_4D24C(&byte_CB598, dword_C9AEC);
        if ( v31 < 0 )
          printf("input %s not in recmask %#x\n", &byte_CB598, dword_C9AF0);
        else
          dword_7BD58 = v31 | 0xC0044D00;
      }
      if ( dest )
      {
        v32 = dword_C9AEC;
        v33 = sub_4D24C(&dest, dword_C9AEC);
        if ( v33 < 0 )
          printf("monitor %s not in devmask %#x\n", &dest, v32);
        else
          dword_7BD5C = v33 | 0xC0044D00;
      }
    }
  }
  return v29;
}
