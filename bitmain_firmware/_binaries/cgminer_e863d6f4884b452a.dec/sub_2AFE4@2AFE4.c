char *__fastcall sub_2AFE4(int a1)
{
  char *v2; // r6
  signed int v3; // r7
  char *v4; // r0
  char *v5; // r5
  size_t v6; // r0
  size_t v7; // r8
  unsigned int v8; // r2
  int v9; // r7
  __int64 v10; // kr08_8
  unsigned int v11; // r6
  unsigned int v12; // r3
  unsigned int v13; // kr00_4
  unsigned int v14; // r3
  ssize_t v16; // r6
  int v17; // r5
  char *v18; // r9
  size_t v19; // r6
  size_t v20; // r8
  unsigned int v21; // r0
  size_t v22; // r6
  char *v23; // r0
  struct timeval tv; // [sp+8h] [bp-2814h] BYREF
  struct timeval v25; // [sp+10h] [bp-280Ch] BYREF
  char v26[2048]; // [sp+18h] [bp-2804h] BYREF
  char s[8196]; // [sp+818h] [bp-2004h] BYREF

  v2 = *(char **)(a1 + 592);
  if ( !strchr(v2, 10) )
  {
    gettimeofday(&tv, 0);
    if ( !sub_27DB8(*(_DWORD *)(a1 + 588), 60) )
    {
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        strcpy(s, "Timed out waiting for data on socket_full");
        sub_343C4(7, s, 0);
      }
      goto LABEL_30;
    }
    while ( 1 )
    {
      memset(s, 0, 0x2000u);
      v16 = recv(*(_DWORD *)(a1 + 588), s, 0x1FFCu, 0);
      if ( !v16 )
        break;
      gettimeofday(&v25, 0);
      v17 = (int)((double)(v25.tv_usec - tv.tv_usec) / 1000000.0 + (double)(v25.tv_sec - tv.tv_sec));
      if ( v16 < 0 )
      {
        if ( *_errno_location() != 11 || !sub_27DB8(*(_DWORD *)(a1 + 588), 60 - v17) )
        {
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            strcpy(v26, "Failed to recv sock in recv_line");
            sub_343C4(7, v26, 0);
          }
          goto LABEL_36;
        }
      }
      else
      {
        v18 = *(char **)(a1 + 592);
        v19 = strlen(s);
        v20 = strlen(v18);
        v21 = v19 + v20 + 1;
        if ( v21 >= *(_DWORD *)(a1 + 596) )
        {
          v22 = (v21 & 0xFFFFE000) + 0x2000;
          v23 = (char *)realloc(v18, v22);
          *(_DWORD *)(a1 + 592) = v23;
          if ( !v23 )
          {
            snprintf(v26, 0x800u, "Failed to realloc pool sockbuf in %s %s():%d", "util.c", "recalloc_sock", 2006);
            sub_343C4(3, v26, 1);
            sub_26B0C(1);
          }
          memset(&v23[v20], 0, v22 - v20);
          v18 = *(char **)(a1 + 592);
          *(_DWORD *)(a1 + 596) = v22;
        }
        strcat(v18, s);
      }
      v2 = *(char **)(a1 + 592);
      if ( v17 > 59 || strchr(*(const char **)(a1 + 592), 10) )
        goto LABEL_2;
    }
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy(v26, "Socket closed waiting in recv_line");
      sub_343C4(7, v26, 0);
    }
LABEL_36:
    sub_2AC10((pthread_mutex_t *)a1);
    v2 = *(char **)(a1 + 592);
  }
LABEL_2:
  v3 = strlen(v2);
  v4 = strtok(v2, (const char *)&word_585EC);
  if ( !v4 )
  {
    if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
    {
      strcpy(s, "Failed to parse a \\n terminated string in recv_line");
      sub_343C4(7, s, 0);
    }
LABEL_30:
    v5 = 0;
    sub_2813C(a1);
    return v5;
  }
  v5 = _strdup(v4);
  v6 = strlen(v5);
  v7 = v6;
  if ( (int)(v6 + 1) < v3 )
    memmove(*(void **)(a1 + 592), (const void *)(v6 + 1 + *(_DWORD *)(a1 + 592)), v3 - v6 + 1);
  else
    **(_BYTE **)(a1 + 592) = 0;
  v8 = *(_DWORD *)(a1 + 528);
  v9 = (unsigned __int8)byte_72E38;
  v10 = *(_QWORD *)(a1 + 520) + 1LL;
  v11 = *(_DWORD *)(a1 + 532);
  *(_DWORD *)(a1 + 524) = HIDWORD(v10);
  v12 = *(_DWORD *)(a1 + 536);
  *(_DWORD *)(a1 + 520) = v10;
  v13 = v12;
  v14 = *(_DWORD *)(a1 + 540);
  *(_QWORD *)(a1 + 528) = __PAIR64__(v11, v8) + v7;
  *(_QWORD *)(a1 + 536) = __PAIR64__(v14, v13) + v7;
  if ( v9 && (byte_73320 || byte_6FA70 || dword_6D35C > 4) )
  {
    snprintf(s, 0x800u, "RECVD: %s", v5);
    sub_343C4(5, s, 0);
  }
  return v5;
}
