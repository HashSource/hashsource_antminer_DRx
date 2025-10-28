size_t __fastcall sub_4A988(const char *a1, int a2, int a3, size_t *s)
{
  int v8; // r5
  int v10; // r1
  int fd; // r0
  void *v12; // r5
  size_t v13; // r0
  size_t v14; // r3
  int v15; // r2
  size_t v16; // lr
  int *v17; // r0
  size_t v18; // r3
  int v19; // r2
  int *v20; // r6
  int v21; // r0
  size_t v22; // r3
  struct stat stat_buf; // [sp+8h] [bp-58h] BYREF

  memset(s, 0, 0x24u);
  s[4] = -1;
  s[3] = -1;
  if ( _xstat(3, a1, &stat_buf) )
  {
    s[5] = *_errno_location();
    return -1;
  }
  if ( (stat_buf.st_mode & 0xF000) != 0x8000 )
  {
    *_errno_location() = 22;
    s[5] = 22;
    return -1;
  }
  v10 = a2 & 2;
  s[1] = stat_buf.st_size;
  if ( (a2 & 2) != 0 )
  {
    v10 = (a3 & 3) == 1 ? 2 : 0;
    if ( (a3 & 1) == 0 )
      v10 |= 0x80u;
  }
  fd = open(a1, v10);
  v8 = fd;
  s[3] = fd;
  if ( fd == -1 )
  {
    s[5] = *_errno_location();
  }
  else
  {
    v12 = mmap(0, s[1] + 1, a2, a3, fd, 0);
    *s = (size_t)v12;
    if ( v12 == (void *)-1 )
    {
      v20 = _errno_location();
      v21 = s[3];
      v22 = *v20;
      s[5] = *v20;
      if ( v21 >= 0 )
      {
        close(v21);
        v22 = s[5];
        s[3] = -1;
      }
      *v20 = v22;
      v8 = -1;
      *s = -1;
    }
    else
    {
      s[5] = 0;
      s[4] = -1;
      v13 = sysconf(30);
      v14 = s[1];
      v15 = (v13 + v14 - 1) & -v13;
      s[2] = v15;
      if ( v14 == v15 && (v16 = *s, s[2] = v13 + v14, mmap((void *)(v16 + v14), v13, 3, 50, -1, 0) == (void *)-1) )
      {
        v17 = _errno_location();
        v18 = s[1];
        v19 = *v17;
        s[2] = v18;
        s[5] = v19;
        v8 = (int)sub_44484(v18 + 1);
        memcpy((void *)v8, (const void *)*s, s[1]);
        *(_BYTE *)(v8 + s[1]) = 0;
        munmap((void *)*s, s[1]);
        *s = v8;
        s[8] = 1;
      }
      else
      {
        return *s;
      }
    }
  }
  return v8;
}
