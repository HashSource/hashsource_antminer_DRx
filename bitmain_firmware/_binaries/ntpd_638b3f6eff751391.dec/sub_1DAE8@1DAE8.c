void __fastcall sub_1DAE8(int a1, int a2)
{
  FILE *v4; // r0
  unsigned int v5; // r3
  __pid_t v6; // r6
  __int16 v7; // r3
  size_t v8; // r10
  size_t v9; // r10
  char *v10; // r5
  unsigned int v11; // r2
  char *v12; // r7
  FILE *v13; // r10
  char v14; // r3
  int v15; // r0
  size_t v16; // r10
  char *v17; // r9
  __pid_t v18; // r0
  int v19; // r12
  _BYTE v20[2]; // [sp+10h] [bp-74h] BYREF
  __int16 v21; // [sp+12h] [bp-72h]
  unsigned __int8 v22; // [sp+15h] [bp-6Fh]
  char v23; // [sp+16h] [bp-6Eh]
  char v24; // [sp+17h] [bp-6Dh]
  char v25; // [sp+18h] [bp-6Ch]
  _WORD v26[2]; // [sp+1Ch] [bp-68h] BYREF
  unsigned __int8 v27; // [sp+20h] [bp-64h]
  unsigned __int8 v28; // [sp+21h] [bp-63h]
  struct stat stat_buf; // [sp+28h] [bp-5Ch] BYREF

  if ( *(char *)(a1 + 17) >= 0 )
  {
    v4 = *(FILE **)a1;
    if ( v4 )
    {
      fclose(v4);
      *(_DWORD *)a1 = 0;
    }
    return;
  }
  v5 = *(unsigned __int8 *)(a1 + 16);
  if ( v5 == 4 )
  {
    sub_4E8EC(a2, v20);
    v7 = v21 + 1 - v22;
    v22 = 1;
    v21 = v7;
    goto LABEL_19;
  }
  if ( v5 <= 4 )
  {
    if ( v5 == 2 )
    {
      sub_4E8EC(a2, v20);
    }
    else
    {
      if ( v5 <= 2 )
      {
        if ( v5 == 1 )
        {
          v6 = getpid();
          goto LABEL_20;
        }
        goto LABEL_10;
      }
      v15 = sub_4EF18(a2);
      sub_4E8EC(60 - (-v15 - (_DWORD)&unk_93A80 * ((a2 - v15) / 0x93A80u)), v20);
    }
LABEL_19:
    v25 = 0;
    v24 = 0;
    v23 = 0;
    v6 = sub_4ECD0(v20);
    goto LABEL_20;
  }
  if ( v5 == 6 )
  {
    v6 = dword_CB548 - dword_CB548 % 0x15180u;
    goto LABEL_20;
  }
  if ( v5 < 6 )
  {
    v6 = sub_4EF18(a2);
    goto LABEL_20;
  }
  if ( v5 == 255 )
  {
    if ( *(_DWORD *)a1 )
      return;
    v6 = -1;
    goto LABEL_22;
  }
LABEL_10:
  v6 = -1;
LABEL_20:
  if ( *(_DWORD *)a1 && *(_DWORD *)(a1 + 12) == v6 )
    return;
LABEL_22:
  if ( dword_7CF4C > 0 )
    printf("filegen  %0x %lu %lu %lu\n", *(unsigned __int8 *)(a1 + 16), a2, *(_DWORD *)(a1 + 12), v6);
  v8 = strlen(*(const char **)(a1 + 4));
  v9 = strlen(*(const char **)(a1 + 8)) + v8;
  v10 = (char *)sub_4F524(v9 + 1);
  snprintf(v10, v9 + 1, "%s%s", *(const char **)(a1 + 4), *(const char **)(a1 + 8));
  v11 = *(unsigned __int8 *)(a1 + 16);
  if ( v11 == 4 )
  {
    sub_4E8EC(v6, v26);
    v12 = (char *)sub_4F524(v9 + 8);
    snprintf(v12, v9 + 8, "%s%c%04d%02d", v10, 46, v26[0], v27);
    goto LABEL_31;
  }
  if ( v11 <= 4 )
  {
    if ( v11 == 2 )
    {
      sub_4E8EC(v6, v26);
      v12 = (char *)sub_4F524(v9 + 10);
      snprintf(v12, v9 + 10, "%s%c%04d%02d%02d", v10, 46, v26[0], v27, v28);
      goto LABEL_31;
    }
    if ( v11 > 2 )
    {
      sub_4E8EC(v6, v26);
      v12 = (char *)sub_4F524(v9 + 9);
      snprintf(v12, v9 + 9, "%s%c%04dw%02d", v10, 46, v26[0], v26[1] / 7u);
      goto LABEL_31;
    }
    if ( v11 == 1 )
    {
      v12 = (char *)sub_4F524(v9 + 13);
      snprintf(v12, v9 + 13, "%s%c#%ld", v10, 46, v6);
      goto LABEL_31;
    }
LABEL_29:
    sub_4FE78(3, "unsupported file generations type %d for \"%s\" - reverting to FILEGEN_NONE", v11, v10);
    *(_BYTE *)(a1 + 16) = -1;
    goto LABEL_30;
  }
  if ( v11 == 6 )
  {
    v12 = (char *)sub_4F524(v9 + 14);
    snprintf(v12, v9 + 14, "%s%ca%08ld", v10, 46, v6);
    goto LABEL_31;
  }
  if ( v11 < 6 )
  {
    sub_4E8EC(v6, v26);
    v12 = (char *)sub_4F524(v9 + 6);
    snprintf(v12, v9 + 6, "%s%c%04d", v10, 46, v26[0]);
    goto LABEL_31;
  }
  if ( v11 != 255 )
    goto LABEL_29;
LABEL_30:
  v12 = (char *)sub_4F4E8(v10);
LABEL_31:
  if ( *(unsigned __int8 *)(a1 + 16) != 255 )
  {
    if ( _xstat(3, v10, &stat_buf) )
    {
      if ( *_errno_location() != 2 )
        sub_4FE78(3, "stat(%s) failed: %m", v10);
    }
    else if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      if ( stat_buf.st_nlink <= 1 )
      {
        v16 = v9 + 23;
        v17 = (char *)sub_4F524(v16);
        v18 = getpid();
        v19 = dword_7D3B4++;
        snprintf(v17, v16, "%s%c%dC%lu", v10, 46, v18, v19);
        if ( rename(v10, v17) )
          sub_4FE78(3, "couldn't save %s: %m", v10);
        free(v17);
      }
      else if ( unlink(v10) )
      {
        sub_4FE78(3, "couldn't unlink %s: %m", v10);
      }
    }
    else
    {
      sub_4FE78(3, "expected regular file for %s (found mode 0%lo)", v10, stat_buf.st_mode);
    }
  }
  v13 = fopen(v12, "a");
  if ( dword_7CF4C > 3 )
    printf("opening filegen (type=%d/id=%lu) \"%s\"\n", *(unsigned __int8 *)(a1 + 16), v6, v12);
  if ( v13 )
  {
    if ( *(_DWORD *)a1 )
      fclose(*(FILE **)a1);
    v14 = *(_BYTE *)(a1 + 17);
    *(_DWORD *)a1 = v13;
    *(_DWORD *)(a1 + 12) = v6;
    if ( (v14 & 1) != 0 && link(v12, v10) && *_errno_location() != 17 )
      sub_4FE78(3, "can't link(%s, %s): %m", v12, v10);
  }
  else if ( *_errno_location() != 2 )
  {
    sub_4FE78(3, "can't open %s: %m", v12);
  }
  free(v10);
  free(v12);
}
