int __fastcall sub_32418(unsigned int *a1, int a2, int a3, int a4)
{
  int v8; // r5
  int v9; // r0
  int v10; // r8
  int v11; // r5
  int v12; // r0
  int v13; // r3
  int v14; // r2
  void *v15; // r0
  char *v16; // r1
  int v17; // r4
  int v18; // r4
  const char *v20; // r3
  char *v21; // r11
  char *v22; // r3
  int *v23; // r0
  int *v24; // r0
  char *ptr; // [sp+10h] [bp-84Ch]
  char s[64]; // [sp+18h] [bp-844h] BYREF
  char v27[2052]; // [sp+58h] [bp-804h] BYREF

  v8 = *(_DWORD *)(dword_62F8C + 8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v8) )
    sub_B844("print_data", 1191);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v8 + 24)) )
  {
    v24 = _errno_location();
    snprintf(v27, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v24, "api.c", "print_data", 1191);
    sub_38438(3, v27, 1);
    sub_16724(1);
  }
  v9 = sub_38EEC(dword_62F8C, "api.c", "print_data", 1192);
  v10 = *(_DWORD *)(dword_62F8C + 8);
  v11 = v9;
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v10 + 24)) )
    sub_B8B0("print_data", 1193);
  if ( pthread_mutex_unlock((pthread_mutex_t *)v10) )
    sub_B91C("print_data", 1193);
  off_60178();
  *(_DWORD *)(*(_DWORD *)(v11 + 12) + 4) = 0;
  if ( a4 )
    sub_305F4(v11, (char *)",");
  if ( a3 )
    sub_305F4(v11, "{");
  if ( a2 )
  {
    v12 = v11;
    if ( a3 )
      goto LABEL_18;
LABEL_11:
    sub_305F4(v12, *(char **)(a2 + 4));
    sub_305F4(v11, "=");
    while ( 1 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 0:
          v21 = *(char **)(a2 + 8);
          v22 = sub_30440(v21, a3);
          ptr = v22;
          if ( a3 )
          {
            sub_305F4(v11, (char *)"\"");
            sub_305F4(v11, ptr);
            sub_305F4(v11, (char *)"\"");
          }
          else
          {
            sub_305F4(v11, v22);
          }
          if ( ptr != v21 )
            free(ptr);
          break;
        case 1:
        case 2:
          if ( a3 )
          {
            sub_305F4(v11, (char *)"\"");
            sub_305F4(v11, *(char **)(a2 + 8));
            sub_305F4(v11, (char *)"\"");
          }
          else
          {
            sub_305F4(v11, *(char **)(a2 + 8));
          }
          break;
        case 3:
          snprintf(s, 0x40u, "%u", **(unsigned __int8 **)(a2 + 8));
          goto LABEL_14;
        case 4:
          snprintf(s, 0x40u, "%d", **(__int16 **)(a2 + 8));
          goto LABEL_14;
        case 5:
          snprintf(s, 0x40u, "%u", **(unsigned __int16 **)(a2 + 8));
          goto LABEL_14;
        case 6:
          snprintf(s, 0x40u, "%d", **(_DWORD **)(a2 + 8));
          goto LABEL_14;
        case 7:
        case 8:
          snprintf(s, 0x40u, "%u", **(_DWORD **)(a2 + 8));
          goto LABEL_14;
        case 9:
          if ( a3 )
          {
            sub_305F4(v11, (char *)"\"");
            snprintf(s, 0x40u, "0x%08x", **(_DWORD **)(a2 + 8));
            sub_305F4(v11, s);
            sub_305F4(v11, (char *)"\"");
          }
          else
          {
            snprintf(s, 0x40u, "0x%08x", **(_DWORD **)(a2 + 8));
            sub_305F4(v11, s);
          }
          break;
        case 0xA:
          snprintf(s, 0x40u, "%llu", *(_QWORD *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0xB:
          snprintf(s, 0x40u, "%lld", *(_QWORD *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0xC:
          snprintf(s, 0x40u, "%f", *(double *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0xD:
          snprintf(s, 0x40u, "%.0f", *(double *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0xE:
          v20 = "false";
          if ( **(_BYTE **)(a2 + 8) )
            v20 = "true";
          snprintf(s, 0x40u, "%s", v20);
          goto LABEL_14;
        case 0xF:
          snprintf(s, 0x40u, "%ld.%06ld", **(_DWORD **)(a2 + 8), *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4));
          goto LABEL_14;
        case 0x10:
          snprintf(s, 0x40u, "%lu", **(_DWORD **)(a2 + 8));
          goto LABEL_14;
        case 0x11:
        case 0x14:
        case 0x15:
          snprintf(s, 0x40u, "%.2f", *(double *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0x12:
          snprintf(s, 0x40u, "%.4f", *(double *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0x13:
          snprintf(s, 0x40u, "%.2f", **(float **)(a2 + 8));
          goto LABEL_14;
        case 0x16:
        case 0x1A:
          snprintf(s, 0x40u, "%.3f", **(float **)(a2 + 8));
          goto LABEL_14;
        case 0x17:
          snprintf(s, 0x40u, "%.15f", *(double *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0x18:
          snprintf(s, 0x40u, "%.8f", *(double *)*(_DWORD *)(a2 + 8));
          goto LABEL_14;
        case 0x19:
          snprintf(s, 0x40u, "%.4f", *(double *)*(_DWORD *)(a2 + 8) * 100.0);
LABEL_14:
          sub_305F4(v11, s);
          break;
        default:
          if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
          {
            snprintf(v27, 0x800u, "API: unknown2 data type %d ignored", *(_DWORD *)a2);
            sub_38438(3, v27, 0);
          }
          if ( a3 )
          {
            sub_305F4(v11, (char *)"\"");
            sub_305F4(v11, "Unknown");
            sub_305F4(v11, (char *)"\"");
          }
          else
          {
            sub_305F4(v11, "Unknown");
          }
          break;
      }
      free(*(void **)(a2 + 4));
      if ( *(_BYTE *)(a2 + 12) )
      {
        free(*(void **)(a2 + 8));
        v13 = *(_DWORD *)(a2 + 20);
        if ( v13 == a2 )
        {
LABEL_20:
          free((void *)a2);
          break;
        }
      }
      else
      {
        v13 = *(_DWORD *)(a2 + 20);
        if ( v13 == a2 )
          goto LABEL_20;
      }
      v14 = *(_DWORD *)(a2 + 16);
      v15 = (void *)a2;
      a2 = v13;
      *(_DWORD *)(v13 + 16) = v14;
      *(_DWORD *)(v14 + 20) = v13;
      free(v15);
      sub_305F4(v11, (char *)",");
      v12 = v11;
      if ( !a3 )
        goto LABEL_11;
LABEL_18:
      sub_305F4(v12, (char *)"\"");
      sub_305F4(v11, *(char **)(a2 + 4));
      sub_305F4(v11, (char *)"\"");
      sub_305F4(v11, (char *)":");
    }
  }
  if ( a3 )
    v16 = (char *)"}";
  else
    v16 = (char *)delim;
  sub_305F4(v11, v16);
  sub_30708(a1, **(char ***)(v11 + 12));
  v17 = *(_DWORD *)(dword_62F8C + 8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v17) )
    sub_B844("print_data", 1363);
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v17 + 24)) )
  {
    v23 = _errno_location();
    snprintf(v27, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v23, "api.c", "print_data", 1363);
    sub_38438(3, v27, 1);
    sub_16724(1);
  }
  sub_39058(dword_62F8C, v11, "api.c", "print_data", 1364);
  v18 = *(_DWORD *)(dword_62F8C + 8);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v18 + 24)) )
    sub_B8B0("print_data", 1365);
  if ( pthread_mutex_unlock((pthread_mutex_t *)v18) )
    sub_B91C("print_data", 1365);
  off_60178();
  return 0;
}
