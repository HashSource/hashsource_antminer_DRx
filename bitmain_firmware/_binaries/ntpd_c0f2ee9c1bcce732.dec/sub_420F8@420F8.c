void __fastcall __noreturn sub_420F8(int a1, int a2, FILE *stream)
{
  const char *v5; // r0
  _BYTE *v6; // r3
  unsigned int v7; // r2
  const char *v8; // r6
  char *v9; // r2
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  const char *v13; // r0
  const char *v14; // r6
  char *v15; // r2
  const char *v16; // r5
  char *v17; // r2

  if ( (*(_DWORD *)(a2 + 16) & 0x10000) != 0 )
  {
    v6 = *(_BYTE **)(a2 + 24);
    if ( v6 )
    {
      v7 = (unsigned __int8)*v6;
      if ( v7 != 86 )
      {
        if ( v7 > 0x56 )
        {
          if ( v7 != 110 )
          {
            if ( v7 != 118 )
            {
              if ( v7 != 99 )
                goto LABEL_13;
LABEL_30:
              v13 = *(const char **)(a1 + 40);
              if ( v13 || (v13 = *(const char **)(a1 + 48)) != 0 )
              {
                fputs(v13, stream);
              }
              else
              {
                v14 = *(const char **)(a1 + 56);
                v15 = strchr(v14, 10);
                if ( !v15 )
                  v15 = (char *)&v14[strlen(v14)];
                fwrite(v14, 1u, (size_t)v15, stream);
              }
              fputc(10, stream);
              if ( *(int *)a1 < 139264 || (v12 = *(const char **)(a1 + 128)) == 0 )
              {
                if ( !*(_DWORD *)(a1 + 72) )
                  goto LABEL_5;
                goto LABEL_35;
              }
LABEL_29:
              fputs(v12, stream);
              goto LABEL_5;
            }
            goto LABEL_2;
          }
LABEL_23:
          v10 = *(const char **)(a1 + 40);
          if ( v10 )
          {
            fputs(v10, stream);
            fputc(10, stream);
          }
          v11 = *(const char **)(a1 + 44);
          if ( v11 )
          {
            fputs(v11, stream);
            fputc(10, stream);
          }
          fprintf(stream, off_7B870[0], "AO_CURRENT.AO_REVISION");
          if ( *(int *)a1 >= 139264 )
          {
            v12 = *(const char **)(a1 + 128);
            if ( v12 )
              goto LABEL_29;
          }
          if ( *(_DWORD *)(a1 + 72) )
LABEL_35:
            fprintf(stream, off_7B9C0[0]);
LABEL_5:
          fflush(stream);
          if ( ferror(stream) )
          {
            fputs(off_7B9B8[0], (FILE *)stderr);
            exit(1);
          }
          exit(0);
        }
        if ( v7 == 67 )
          goto LABEL_30;
        if ( v7 == 78 )
          goto LABEL_23;
        if ( *v6 )
        {
LABEL_13:
          fprintf((FILE *)stderr, off_7B89C[0]);
          exit(1);
        }
      }
    }
  }
LABEL_2:
  v5 = *(const char **)(a1 + 48);
  if ( v5 )
  {
    fputs(v5, stream);
  }
  else
  {
    v8 = *(const char **)(a1 + 40);
    if ( v8 )
    {
      v9 = strchr(*(const char **)(a1 + 40), 10);
      if ( !v9 )
        v9 = (char *)&v8[strlen(v8)];
      fwrite(v8, 1u, v9 - v8, stream);
    }
    else
    {
      v16 = *(const char **)(a1 + 56);
      v17 = strchr(v16, 10);
      if ( !v17 )
        v17 = (char *)&v16[strlen(v16)];
      fwrite(v16, 1u, (size_t)v17, stream);
    }
  }
  fputc(10, stream);
  goto LABEL_5;
}
