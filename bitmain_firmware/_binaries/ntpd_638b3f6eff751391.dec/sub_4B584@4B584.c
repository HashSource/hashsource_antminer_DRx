size_t __fastcall sub_4B584(size_t result, int a2)
{
  int v3; // r5
  FILE *v4; // r6
  const char *v5; // r7
  int v6; // r5
  char *v7; // r0
  struct stat stat_buf; // [sp+8h] [bp-5Ch] BYREF

  v3 = result;
  if ( (*(_DWORD *)(a2 + 16) & 0x28) == 0 )
  {
    result = _xstat(3, *(const char **)(a2 + 24), &stat_buf);
    if ( result )
    {
      if ( (*(_DWORD *)(v3 + 12) & 4) != 0 )
      {
        v4 = (FILE *)stderr;
        v5 = off_7B8E8[0];
        v6 = *_errno_location();
        v7 = strerror(v6);
        fprintf(v4, v5, v6, v7, *(_DWORD *)(a2 + 24));
        exit(66);
      }
    }
    else if ( (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      return sub_4AC8C(v3, *(const char **)(a2 + 24), 0);
    }
    else if ( (*(_DWORD *)(v3 + 12) & 4) != 0 )
    {
      fprintf((FILE *)stderr, off_7B994[0], *(_DWORD *)(a2 + 24));
      exit(66);
    }
  }
  return result;
}
