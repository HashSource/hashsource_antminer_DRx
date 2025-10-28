int __fastcall sub_48E0C(int result, _DWORD *a2, const char *a3, const char *a4)
{
  char **v4; // r5
  char *v8; // r11
  char *v9; // t1
  const char *v10; // r6
  int v11; // r3
  bool v12; // zf
  struct stat v13; // [sp+0h] [bp-1064h] BYREF
  _BYTE v14[4104]; // [sp+5Ch] [bp-1008h] BYREF

  v4 = (char **)result;
  if ( result )
  {
    result = fputs(off_7B9CC[0], (FILE *)dword_C9A98);
    v8 = *v4;
    *a2 = 0;
    if ( v8 )
    {
      do
      {
        v10 = v8;
        if ( sub_48B94(v14, 0x1001u, v8, a4) )
        {
          v10 = v14;
          if ( *v8 == 36 )
          {
            v11 = (unsigned __int8)v8[1];
            v12 = v11 == 36;
            if ( v11 != 36 )
              v12 = v11 == 64;
            if ( v12 )
              v8 = v14;
          }
        }
        fprintf((FILE *)dword_C9A98, off_7B9BC[0], v8);
        if ( *a3 && !_xstat(3, v10, &v13) && (v13.st_mode & 0xF000) == 0x4000 )
        {
          fputc(47, (FILE *)dword_C9A98);
          fputs(a3, (FILE *)dword_C9A98);
        }
        result = fputc(10, (FILE *)dword_C9A98);
        v9 = v4[1];
        ++v4;
        v8 = v9;
      }
      while ( v9 );
    }
  }
  return result;
}
