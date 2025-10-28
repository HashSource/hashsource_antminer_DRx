void __fastcall __noreturn sub_4C6C0(int a1, int a2)
{
  const char *v4; // r7
  int *v5; // r3
  int v6; // r8
  int v7; // r3
  int v8; // r0
  int v9; // r3
  const char *v10; // r0
  const char *v11; // r0
  int v12; // r0
  int v13; // r0
  const char *v14; // r0
  int v15; // r10
  int v16; // r6
  int v17; // r3
  char *s; // [sp+0h] [bp-8h] BYREF
  int v19; // [sp+4h] [bp-4h] BYREF

  if ( a2 == 64 )
  {
    dword_C9AB8 = 0;
  }
  else
  {
    v4 = 0;
    dword_C9AB8 = 0;
    if ( a2 )
    {
      v5 = (int *)dword_C9A98;
      if ( *(int *)a1 >= 122880 )
        v4 = *(const char **)(a1 + 112);
      if ( !dword_C9A98 )
        v5 = &stderr;
      v6 = a2;
      if ( !dword_C9A98 )
      {
        v5 = (int *)*v5;
        dword_C9A98 = (int)v5;
      }
LABEL_9:
      if ( v4 )
      {
        fputs(v4, (FILE *)dword_C9A98);
        exit(v6);
      }
      fprintf((FILE *)dword_C9A98, *(const char **)(a1 + 56), *(_DWORD *)(a1 + 28), v5);
      sub_423AC((char *)a1, 0);
      v7 = *(_DWORD *)(a1 + 12);
      if ( !v6 || (v7 & 0x4000) == 0 )
      {
        s = 0;
        if ( (v7 & 0x1000) != 0 )
        {
          v12 = sub_41D44(a1, &s);
          sprintf(byte_C9AA8, off_7B8DC[0], v12);
          fputc(10, (FILE *)dword_C9A98);
        }
        else
        {
          v8 = sub_41E3C(a1, &s);
          sprintf(byte_C9AA8, off_7B8DC[0], v8);
          if ( a2 || (*(_DWORD *)(*(_DWORD *)(a1 + 68) + 16) & 0x200000) == 0 )
            fputs(s, (FILE *)dword_C9A98);
        }
        sub_454C8(a1, a2, (int)s);
        v9 = *(_DWORD *)(a1 + 12);
        if ( (v9 & 3) == 1 )
        {
          fputs(off_7B960[0], (FILE *)dword_C9A98);
          v9 = *(_DWORD *)(a1 + 12);
        }
        else if ( (v9 & 3) != 0 )
        {
          if ( (v9 & 3) == 3 )
          {
            fputs(off_7B8D8[0], (FILE *)dword_C9A98);
            v9 = *(_DWORD *)(a1 + 12);
          }
        }
        else
        {
          fputs(off_7B9B4[0], (FILE *)dword_C9A98);
          v9 = *(_DWORD *)(a1 + 12);
        }
        if ( (v9 & 0x20) != 0 )
        {
          fputs(off_7B9A8[0], (FILE *)dword_C9A98);
          v9 = *(_DWORD *)(a1 + 12);
        }
        if ( (v9 & 0x800) != 0 )
          fputs(off_7B9D4[0], (FILE *)dword_C9A98);
        v10 = *(const char **)(a1 + 60);
        if ( v10 )
          fputs(v10, (FILE *)dword_C9A98);
        if ( !a2 )
        {
          v13 = *(_DWORD *)(a1 + 52);
          v19 = 1;
          sub_48E0C(v13, &v19, *(const char **)(a1 + 36), *(const char **)(a1 + 24));
          if ( (*(_DWORD *)(a1 + 12) & 0x100) != 0 )
          {
            if ( v19 )
              fputs(off_7B9CC[0], (FILE *)dword_C9A98);
            fprintf((FILE *)dword_C9A98, off_7B8D0[0], *(_DWORD *)(a1 + 32));
          }
          if ( dword_C9AB8 )
          {
            v15 = *(_DWORD *)(a1 + 100);
            v16 = *(_DWORD *)(a1 + 68);
            fputc(10, (FILE *)dword_C9A98);
            fflush((FILE *)dword_C9A98);
            do
            {
              v17 = (unsigned __int16)*(_DWORD *)(v16 + 16) >> 12;
              if ( v17 == 2 || v17 == 4 )
                (*(void (__fastcall **)(int, int))(v16 + 40))(1, v16);
              --v15;
              v16 += 64;
            }
            while ( v15 > 0 );
          }
          v14 = *(const char **)(a1 + 64);
          if ( v14 )
            fputs(v14, (FILE *)dword_C9A98);
        }
        if ( *(int *)a1 >= 139264 && (v11 = *(const char **)(a1 + 128)) != 0 )
        {
          fputs(v11, (FILE *)dword_C9A98);
        }
        else if ( *(_DWORD *)(a1 + 72) )
        {
          fprintf((FILE *)dword_C9A98, off_7B9C0[0]);
        }
        fflush((FILE *)dword_C9A98);
        if ( ferror((FILE *)dword_C9A98) )
        {
          fputs(off_7B9B8[0], (FILE *)stderr);
          exit(1);
        }
      }
      exit(v6);
    }
  }
  v6 = dword_C9A98;
  v5 = &dword_C9A5C;
  if ( *(int *)a1 < 122880 )
    v4 = 0;
  else
    v4 = *(const char **)(a1 + 108);
  if ( dword_C9A98 )
    v6 = 0;
  else
    dword_C9A98 = stdout;
  goto LABEL_9;
}
