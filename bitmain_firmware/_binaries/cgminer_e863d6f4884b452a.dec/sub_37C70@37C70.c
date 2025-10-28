void __fastcall __noreturn sub_37C70(int *a1)
{
  _BYTE *v2; // r8
  pthread_t v3; // r6
  char *v4; // r5
  unsigned __int8 *v5; // r5
  int i; // r4
  int v7; // t1
  int v8; // r0
  int v9; // r11
  pthread_mutex_t *v10; // r9
  pthread_rwlock_t *v11; // r0
  _DWORD *v12; // r9
  char *v13; // r11
  int v14; // r8
  const char *v15; // r0
  char *v16; // r1
  __int16 v17; // r3
  unsigned int v18; // r2
  int v19; // t1
  unsigned int v20; // r12
  int v21; // r8
  void **v22; // r0
  int *v23; // r0
  int *v24; // r0
  int *v25; // r0
  int *v26; // r0
  int *v27; // r0
  char *s2; // [sp+14h] [bp-28E8h]
  int v29; // [sp+28h] [bp-28D4h]
  struct sched_param param; // [sp+3Ch] [bp-28C0h] BYREF
  char v31; // [sp+40h] [bp-28BCh] BYREF
  char v32; // [sp+41h] [bp-28BBh]
  _BYTE dest[180]; // [sp+42h] [bp-28BAh] BYREF
  __int16 v34; // [sp+F6h] [bp-2806h]
  char v35[2048]; // [sp+F8h] [bp-2804h] BYREF
  _BYTE s[4096]; // [sp+8F8h] [bp-2004h] BYREF
  char v37[4100]; // [sp+18F8h] [bp-1004h] BYREF

  LOWORD(v2) = (unsigned __int16)&byte_73320;
  v3 = pthread_self();
  pthread_detach(v3);
  param.__sched_priority = sched_get_priority_max(1);
  if ( pthread_setschedparam(v3, 1, &param) )
  {
    v4 = &byte_6FA70;
    HIWORD(v2) = (unsigned int)&byte_73320 >> 16;
  }
  else
  {
    HIWORD(v2) = (unsigned int)&byte_73320 >> 16;
    LOWORD(v4) = (unsigned __int16)&byte_6FA70;
    if ( *v2 )
    {
      HIWORD(v4) = (unsigned int)&byte_6FA70 >> 16;
    }
    else
    {
      HIWORD(v4) = (unsigned int)&byte_6FA70 >> 16;
      if ( !*v4 && dword_6D35C <= 4 )
      {
        v29 = *a1;
        if ( byte_6FA71 )
        {
LABEL_6:
          if ( dword_6D35C <= 6 )
          {
LABEL_8:
            memset(s, 0, sizeof(s));
            memset(v37, 0, 0x1000u);
            if ( byte_6FA71 && (*v2 || *v4 || dword_6D35C > 6) )
            {
              snprintf(v35, 0x800u, "Start To Fill Work!ChainIndex:[%d]", 0);
              sub_343C4(7, v35, 0);
            }
            while ( 1 )
            {
LABEL_12:
              v5 = (unsigned __int8 *)&unk_73EF0;
              for ( i = 0; i != 4; ++i )
              {
                v7 = *v5++;
                if ( v7 == 1 )
                {
                  if ( byte_6FC24[i] )
                  {
                    v8 = sub_1E098();
                    v9 = v8;
                    if ( v8 )
                    {
                      v10 = (pthread_mutex_t *)(v8 + 220);
                      if ( pthread_mutex_lock((pthread_mutex_t *)(v8 + 220)) )
                      {
                        v25 = _errno_location();
                        snprintf(
                          v35,
                          0x800u,
                          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
                          *v25,
                          "driver-btm-dcr.c",
                          "dcr_fill_work_all",
                          6437);
                        sub_343C4(3, v35, 1);
                        sub_26B0C(1);
                      }
                      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v9 + 244)) )
                      {
                        v24 = _errno_location();
                        snprintf(
                          v35,
                          0x800u,
                          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
                          *v24,
                          "driver-btm-dcr.c",
                          "dcr_fill_work_all",
                          6437);
                        sub_343C4(3, v35, 1);
                        sub_26B0C(1);
                      }
                      if ( pthread_mutex_unlock(v10) )
                      {
                        v23 = _errno_location();
                        snprintf(
                          v35,
                          0x800u,
                          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                          *v23,
                          "driver-btm-dcr.c",
                          "dcr_fill_work_all",
                          6437);
                        sub_343C4(3, v35, 1);
                        sub_26B0C(1);
                      }
                      v11 = (pthread_rwlock_t *)(v9 + 244);
                      if ( *(_BYTE *)(v9 + 641) && *(_BYTE *)(v9 + 643) )
                      {
                        if ( pthread_rwlock_unlock(v11) )
                        {
                          v27 = _errno_location();
                          snprintf(
                            v35,
                            0x800u,
                            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                            *v27,
                            "driver-btm-dcr.c",
                            "dcr_fill_work_all",
                            6443);
                          sub_343C4(3, v35, 1);
                          sub_26B0C(1);
                        }
                        ((void (__fastcall *)())off_6CB70)();
                        v12 = sub_1B0EC();
                        sub_20EC8(v9, (int)v12);
                        v13 = &s[1024 * i];
                        s2 = &v37[1024 * i];
                        v14 = v12[100] & 0x7F;
                        memcpy(dest, v12, sizeof(dest));
                        v15 = (const char *)v12[86];
                        v31 = 32;
                        if ( !strcmp(v15, v13) && !strcmp((const char *)v12[91], s2) )
                          v32 = v14;
                        else
                          v32 = v14 | 0x80;
                        v16 = &v31;
                        v17 = 14994;
                        LOWORD(v18) = -1;
                        while ( 1 )
                        {
                          v18 = (unsigned __int16)(v17 ^ ((_WORD)v18 << 8));
                          v20 = v18 >> 8;
                          if ( &dest[179] == v16 )
                            break;
                          v19 = (unsigned __int8)*++v16;
                          v17 = *(_WORD *)&aBitmainDcrDete_0[2 * (v19 ^ v20) + 100];
                        }
                        v34 = v20 | ((_WORD)v18 << 8);
                        sub_37A50((unsigned __int8)i, &v31, 0xB8u);
                        v21 = v29 + 4 * (v14 + (i << 7));
                        v22 = *(void ***)(v21 + 182);
                        if ( v22 )
                          sub_1A000(v22);
                        *(_DWORD *)(v21 + 182) = v12;
                        strcpy(v13, (const char *)v12[86]);
                        strcpy(s2, (const char *)v12[91]);
                        if ( !byte_6FC28 )
                          byte_6FC28 = 1;
                        sub_2A69C((struct timeval *)&dword_6FC2C);
                      }
                      else
                      {
                        if ( pthread_rwlock_unlock(v11) )
                        {
                          v26 = _errno_location();
                          snprintf(
                            v35,
                            0x800u,
                            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                            *v26,
                            "driver-btm-dcr.c",
                            "dcr_fill_work_all",
                            6440);
                          sub_343C4(3, v35, 1);
                          sub_26B0C(1);
                        }
                        ((void (__fastcall *)())off_6CB70)();
                      }
                    }
                  }
                }
              }
              sub_2A810();
            }
          }
LABEL_7:
          strcpy(v37, "Start To Fill Work!");
          sub_343C4(7, v37, 0);
          goto LABEL_8;
        }
LABEL_50:
        memset(s, 0, sizeof(s));
        memset(v37, 0, 0x1000u);
        goto LABEL_12;
      }
    }
    snprintf(v37, 0x800u, "IO Thread #%lx using high-priority scheduler! ", v3);
    sub_343C4(5, v37, 0);
  }
  v29 = *a1;
  if ( byte_6FA71 )
  {
    if ( *v2 || *v4 )
      goto LABEL_7;
    goto LABEL_6;
  }
  goto LABEL_50;
}
