char *__fastcall sub_308C0(int a1)
{
  double v1; // d0
  ssize_t v3; // r7
  size_t v4; // r9
  size_t v5; // r7
  unsigned int v6; // r0
  size_t v7; // r9
  void *v8; // r0
  signed int v9; // r5
  char *v10; // r0
  char *v11; // r7
  size_t v12; // r0
  signed int v13; // r8
  struct timeval v15; // [sp+8h] [bp-2810h] BYREF
  struct timeval v16; // [sp+10h] [bp-2808h] BYREF
  char s[2040]; // [sp+18h] [bp-2800h] BYREF
  char v18[8192]; // [sp+818h] [bp-2000h] BYREF

  if ( strchr(*(const char **)(a1 + 592), 10) )
    goto LABEL_31;
  sub_30050(&v15);
  if ( !sub_2C158(a1, 60) )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      strcpy(v18, "Timed out waiting for data on socket_full");
      sub_3F178(7, v18, 0);
    }
    goto LABEL_47;
  }
  while ( 1 )
  {
    memset(v18, 0, sizeof(v18));
    v3 = recv(*(_DWORD *)(a1 + 588), v18, 0x1FFCu, 0);
    if ( !v3 )
    {
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        strcpy(s, "Socket closed waiting in recv_line");
        sub_3F178(7, s, 0);
      }
      goto LABEL_14;
    }
    sub_30050(&v16);
    sub_3022C();
    LODWORD(v1) = (int)v1;
    if ( v3 >= 0 )
    {
      v4 = strlen(v18);
      v5 = strlen(*(const char **)(a1 + 592));
      v6 = v4 + v5 + 1;
      if ( v6 >= *(_DWORD *)(a1 + 596) )
      {
        v7 = (v6 & 0xFFFFE000) + 0x2000;
        v8 = realloc(*(void **)(a1 + 592), v7);
        *(_DWORD *)(a1 + 592) = v8;
        if ( !v8 )
        {
          snprintf(s, 0x800u, "Failed to realloc pool sockbuf in %s %s():%d", "util.c", "recalloc_sock", 2006);
          sub_3F178(3, s, 1);
          sub_134A4(1);
        }
        memset((void *)(*(_DWORD *)(a1 + 592) + v5), 0, v7 - v5);
        *(_DWORD *)(a1 + 596) = v7;
      }
      strcat(*(char **)(a1 + 592), v18);
      goto LABEL_29;
    }
    if ( *_errno_location() != 11 || !sub_2C158(a1, 60 - LODWORD(v1)) )
      break;
LABEL_29:
    if ( SLODWORD(v1) > 59 || strchr(*(const char **)(a1 + 592), 10) )
      goto LABEL_31;
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(s, "Failed to recv sock in recv_line");
    sub_3F178(7, s, 0);
  }
LABEL_14:
  sub_30748((pthread_mutex_t *)a1);
LABEL_31:
  v9 = strlen(*(const char **)(a1 + 592));
  v10 = strtok(*(char **)(a1 + 592), (const char *)&word_6E448);
  if ( v10 )
  {
    v11 = _strdup(v10);
    v12 = strlen(v11);
    v13 = v12;
    if ( v9 <= (int)(v12 + 1) )
      **(_BYTE **)(a1 + 592) = 0;
    else
      memmove(*(void **)(a1 + 592), (const void *)(*(_DWORD *)(a1 + 592) + v12 + 1), v9 - v12 + 1);
    ++*(_QWORD *)(a1 + 520);
    *(_QWORD *)(a1 + 528) += v13;
    *(_QWORD *)(a1 + 536) += v13;
    if ( !v11 )
      goto LABEL_41;
    if ( byte_804B0 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 4) )
    {
      snprintf(v18, 0x800u, "RECVD: %s", v11);
      sub_3F178(5, v18, 0);
    }
  }
  else
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      strcpy(v18, "Failed to parse a \\n terminated string in recv_line");
      sub_3F178(7, v18, 0);
    }
LABEL_47:
    v11 = 0;
LABEL_41:
    sub_2CED4(a1);
  }
  return v11;
}
