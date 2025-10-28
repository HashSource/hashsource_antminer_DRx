unsigned __int8 **__fastcall sub_387F0(int a1, unsigned __int8 **a2, int a3, int a4)
{
  int v8; // r5
  int *v9; // r0
  int *v10; // r0
  int v11; // r5
  int v12; // r7
  int *v13; // r0
  int *v14; // r0
  int v15; // r3
  char *v16; // r10
  const char *v17; // r3
  unsigned __int8 *v18; // r10
  unsigned __int8 *v19; // r3
  char *v20; // r1
  int v21; // r6
  int *v22; // r0
  int *v23; // r0
  int v24; // r5
  int *v25; // r0
  int *v26; // r0
  char *v28; // [sp+14h] [bp-848h]
  char s[2040]; // [sp+18h] [bp-844h] BYREF
  char v30[68]; // [sp+818h] [bp-44h] BYREF

  v8 = *(_DWORD *)(dword_7CB2C + 8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v8) )
  {
    v9 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v9, "api.c", "print_data", 1191);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v8 + 24)) )
  {
    v10 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v10, "api.c", "print_data", 1191);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  v11 = sub_40CCC(dword_7CB2C, "api.c", "print_data", 1192);
  v12 = *(_DWORD *)(dword_7CB2C + 8);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v12 + 24)) )
  {
    v13 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v13, "api.c", "print_data", 1193);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v12) )
  {
    v14 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v14, "api.c", "print_data", 1193);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  *(_DWORD *)(*(_DWORD *)(v11 + 12) + 4) = 0;
  if ( a4 )
    sub_36710(v11, ",");
  if ( a3 )
    sub_36710(v11, "{");
  if ( a2 )
  {
    v15 = 1;
    while ( 1 )
    {
      if ( !v15 )
        sub_36710(v11, ",");
      if ( a3 )
      {
        sub_36710(v11, "\"");
        sub_36710(v11, (char *)a2[1]);
        sub_36710(v11, "\"");
        sub_36710(v11, ":");
      }
      else
      {
        sub_36710(v11, (char *)a2[1]);
        sub_36710(v11, "=");
      }
      switch ( (unsigned int)*a2 )
      {
        case 0u:
          v28 = (char *)a2[2];
          v16 = (char *)sub_36574(v28, a3);
          if ( a3 )
          {
            sub_36710(v11, "\"");
            sub_36710(v11, v16);
            sub_36710(v11, "\"");
          }
          else
          {
            sub_36710(v11, v16);
          }
          if ( v16 != v28 )
            free(v16);
          break;
        case 1u:
        case 2u:
          if ( a3 )
          {
            sub_36710(v11, "\"");
            sub_36710(v11, (char *)a2[2]);
            sub_36710(v11, "\"");
          }
          else
          {
            sub_36710(v11, (char *)a2[2]);
          }
          break;
        case 3u:
          snprintf(v30, 0x40u, "%u", *a2[2]);
          goto LABEL_79;
        case 4u:
          snprintf(v30, 0x40u, "%d", *(__int16 *)a2[2]);
          goto LABEL_79;
        case 5u:
          snprintf(v30, 0x40u, "%u", *(unsigned __int16 *)a2[2]);
          goto LABEL_79;
        case 6u:
          snprintf(v30, 0x40u, "%d", *(_DWORD *)a2[2]);
          goto LABEL_79;
        case 7u:
        case 8u:
          snprintf(v30, 0x40u, "%u", *(_DWORD *)a2[2]);
          goto LABEL_79;
        case 9u:
          if ( a3 )
          {
            sub_36710(v11, "\"");
            snprintf(v30, 0x40u, "0x%08x", *(_DWORD *)a2[2]);
            sub_36710(v11, v30);
            sub_36710(v11, "\"");
          }
          else
          {
            snprintf(v30, 0x40u, "0x%08x", *(_DWORD *)a2[2]);
            sub_36710(v11, v30);
          }
          break;
        case 0xAu:
          snprintf(v30, 0x40u, "%llu", *(_QWORD *)a2[2]);
          goto LABEL_79;
        case 0xBu:
          snprintf(v30, 0x40u, "%lld", *(_QWORD *)a2[2]);
          goto LABEL_79;
        case 0xCu:
          snprintf(v30, 0x40u, "%f", *(double *)a2[2]);
          goto LABEL_79;
        case 0xDu:
          snprintf(v30, 0x40u, "%.0f", *(double *)a2[2]);
          goto LABEL_79;
        case 0xEu:
          if ( *a2[2] )
            v17 = "true";
          else
            v17 = "false";
          snprintf(v30, 0x40u, "%s", v17);
          goto LABEL_79;
        case 0xFu:
          snprintf(v30, 0x40u, "%ld.%06ld", *(_DWORD *)a2[2], *((_DWORD *)a2[2] + 1));
          goto LABEL_79;
        case 0x10u:
          snprintf(v30, 0x40u, "%lu", *(_DWORD *)a2[2]);
          goto LABEL_79;
        case 0x11u:
        case 0x14u:
        case 0x15u:
          snprintf(v30, 0x40u, "%.2f", *(double *)a2[2]);
          goto LABEL_79;
        case 0x12u:
          snprintf(v30, 0x40u, "%.4f", *(double *)a2[2]);
          goto LABEL_79;
        case 0x13u:
          snprintf(v30, 0x40u, "%.2f", *(float *)a2[2]);
          goto LABEL_79;
        case 0x16u:
        case 0x1Au:
          snprintf(v30, 0x40u, "%.3f", *(float *)a2[2]);
          goto LABEL_79;
        case 0x17u:
          snprintf(v30, 0x40u, "%.15f", *(double *)a2[2]);
          goto LABEL_79;
        case 0x18u:
          snprintf(v30, 0x40u, "%.8f", *(double *)a2[2]);
          goto LABEL_79;
        case 0x19u:
          snprintf(v30, 0x40u, "%.4f", *(double *)a2[2] * 100.0);
LABEL_79:
          sub_36710(v11, v30);
          break;
        default:
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
          {
            snprintf(s, 0x800u, "API: unknown2 data type %d ignored", *a2);
            sub_3F178(3, s, 0);
          }
          if ( a3 )
          {
            sub_36710(v11, "\"");
            sub_36710(v11, "Unknown");
            sub_36710(v11, "\"");
          }
          else
          {
            sub_36710(v11, "Unknown");
          }
          break;
      }
      free(a2[1]);
      if ( *((_BYTE *)a2 + 12) )
        free(a2[2]);
      v18 = a2[5];
      if ( v18 == (unsigned __int8 *)a2 )
      {
        free(a2[5]);
        a2 = 0;
        goto LABEL_63;
      }
      v19 = a2[4];
      *((_DWORD *)v18 + 4) = v19;
      *((_DWORD *)v19 + 5) = v18;
      free(a2);
      v15 = 0;
      if ( !v18 )
        break;
      a2 = (unsigned __int8 **)v18;
    }
    a2 = 0;
  }
LABEL_63:
  if ( a3 )
    v20 = "}";
  else
    v20 = (char *)&word_62AA0;
  sub_36710(v11, v20);
  sub_3681C(a1, **(char ***)(v11 + 12));
  v21 = *(_DWORD *)(dword_7CB2C + 8);
  if ( pthread_mutex_lock((pthread_mutex_t *)v21) )
  {
    v22 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v22, "api.c", "print_data", 1363);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v21 + 24)) )
  {
    v23 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v23, "api.c", "print_data", 1363);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  sub_40E34(dword_7CB2C, v11, "api.c", "print_data", 1364);
  v24 = *(_DWORD *)(dword_7CB2C + 8);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v24 + 24)) )
  {
    v25 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v25, "api.c", "print_data", 1365);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)v24) )
  {
    v26 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v26, "api.c", "print_data", 1365);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  return a2;
}
