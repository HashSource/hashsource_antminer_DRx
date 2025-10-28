void __fastcall sub_48804(unsigned int a1, int a2, char a3, const char *a4)
{
  void *v8; // r0
  int *v9; // r8
  char *v10; // r10
  int v11; // r11
  __int16 v12; // r3
  char *v13; // r0
  int v14; // r6
  FILE *v15; // r6
  int v16; // r3
  int v17; // r10
  __int16 st_mode; // r3
  const char *v19; // r11
  char *v20; // r0
  int v21; // r7
  FILE *v22; // r10
  const char *v23; // r9
  char *v24; // r0
  char *v25; // r8
  char *v26; // r3
  int v27; // r0
  int v28; // r10
  FILE *v29; // r11
  char *v30; // r0
  char *v31; // r0
  char *v32; // r0
  char *format; // [sp+10h] [bp-64h]
  char *formata; // [sp+10h] [bp-64h]
  char *formatb; // [sp+10h] [bp-64h]
  FILE *stream; // [sp+14h] [bp-60h]
  struct stat stat_buf; // [sp+18h] [bp-5Ch] BYREF

  if ( a1 <= 0xF )
  {
    if ( a1 == 1 )
    {
      if ( (a3 & 3) == 1 )
      {
        fputs(off_7B90C[0], (FILE *)dword_C9A98);
      }
      else if ( (a3 & 3) == 2 )
      {
        fputs(off_7B908[0], (FILE *)dword_C9A98);
      }
    }
    return;
  }
  if ( (*(_DWORD *)(a2 + 16) & 8) == 0 )
  {
    v9 = _errno_location();
    *v9 = 0;
    if ( (a3 & 3) == 1 )
    {
      if ( _xstat(3, *(const char **)(a2 + 24), &stat_buf) )
      {
        v17 = *v9;
      }
      else
      {
        st_mode = stat_buf.st_mode;
        v17 = 22;
        *v9 = 22;
        if ( (st_mode & 0xF000) == 0x8000 )
          goto LABEL_15;
      }
      v19 = off_7B8F0[0];
      formata = (char *)stderr;
      v20 = strerror(v17);
      fprintf((FILE *)formata, v19, v17, v20, off_7B8F8[0], *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 52));
      (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
    }
    else
    {
      if ( (a3 & 3) == 2 )
      {
        v27 = _xstat(3, *(const char **)(a2 + 24), &stat_buf);
        v28 = *v9;
        if ( !v27 || v28 != 2 )
        {
          if ( !v28 )
            v28 = 22;
          *v9 = v28;
          v29 = (FILE *)stderr;
          formatb = off_7B8F0[0];
          v30 = strerror(v28);
          fprintf(v29, formatb, v28, v30, off_7B8FC[0], *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 52));
          (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
        }
      }
      v10 = strrchr(*(const char **)(a2 + 24), 47);
      if ( v10 )
      {
        *v10 = 0;
        if ( _xstat(3, *(const char **)(a2 + 24), &stat_buf) )
        {
          v11 = *v9;
        }
        else
        {
          v12 = stat_buf.st_mode;
          v11 = 22;
          *v9 = 22;
          if ( (v12 & 0xF000) == 0x4000 )
          {
LABEL_14:
            *v10 = 47;
            goto LABEL_15;
          }
        }
        stream = (FILE *)stderr;
        format = off_7B8F0[0];
        v13 = strerror(v11);
        fprintf(stream, format, v11, v13, off_7B8F4[0], *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 52));
        (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
        goto LABEL_14;
      }
    }
LABEL_15:
    v14 = a3 & 0x30;
    if ( v14 == 16 )
    {
      v15 = (FILE *)open(*(const char **)(a2 + 24), (int)a4);
      if ( (int)v15 >= 0 )
      {
LABEL_18:
        v16 = *(_DWORD *)(a2 + 16);
        if ( (v16 & 0x40) != 0 )
        {
          *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 24);
        }
        else
        {
          v31 = sub_44D28(*(const char **)(a2 + 24));
          v16 = *(_DWORD *)(a2 + 16);
          *(_DWORD *)(a2 + 28) = v31;
        }
        *(_DWORD *)(a2 + 24) = v15;
        *(_DWORD *)(a2 + 16) = v16 & 0xFFFFFFBF;
        return;
      }
      v21 = *v9;
      v22 = (FILE *)stderr;
      v23 = off_7B8F0[0];
      v24 = strerror(*v9);
      v25 = off_7B900[0];
      v26 = v24;
    }
    else
    {
      if ( v14 != 32 )
        return;
      v15 = fopen(*(const char **)(a2 + 24), a4);
      if ( v15 )
        goto LABEL_18;
      v21 = *v9;
      v22 = (FILE *)stderr;
      v23 = off_7B8F0[0];
      v32 = strerror(*v9);
      v25 = off_7B904[0];
      v26 = v32;
    }
    fprintf(v22, v23, v21, v26, v25, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 52));
    (*(void (__fastcall **)(unsigned int, int))(a1 + 84))(a1, 1);
    goto LABEL_18;
  }
  v8 = *(void **)(a2 + 28);
  if ( v8 )
    free(v8);
}
