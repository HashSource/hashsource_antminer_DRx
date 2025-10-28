int __fastcall sub_433D8(int *a1, char *s)
{
  int v4; // r3
  void (*v6)(void); // r2
  char *v7; // r0
  int v8; // r2
  char v9; // r0
  int v10; // r3
  char *v11; // r1
  int v12; // t1
  const char *v13; // r0

  if ( !a1 )
  {
    fputs(off_7B858[0], (FILE *)stderr);
    exit(78);
  }
  v4 = a1[3];
  if ( (v4 & 0x2000) != 0 )
  {
    v6 = (void (*)(void))a1[22];
    if ( v6 )
    {
      if ( (v4 & 0x30000) == 0x20000 )
        a1[3] = v4 | 0x10000;
      v6();
      a1[3] &= ~0x2000u;
    }
  }
  if ( (unsigned int)(*a1 - 102400) > 0xA000 )
  {
    fprintf((FILE *)stderr, off_7B860[0], s, *a1 >> 12, ((unsigned int)*a1 >> 7) & 0x1F, *a1 & 0x7F);
    if ( *a1 <= 143360 )
      v13 = off_7B868[0];
    else
      v13 = off_7B85C[0];
    fputs(v13, (FILE *)stderr);
    fwrite("AO_CURRENT:AO_REVISION:AO_AGE\n", 0x1Eu, 1u, (FILE *)stderr);
    return -1;
  }
  else
  {
    if ( !a1[7] )
    {
      v7 = strrchr(s, 47);
      a1[6] = (int)s;
      if ( v7 )
        a1[7] = (int)(v7 + 1);
      else
        a1[7] = (int)s;
      v8 = off_7BA14;
      if ( off_7BA14 )
      {
        v9 = *off_7BA14;
        if ( *off_7BA14 )
        {
          v10 = (unsigned __int8)*off_7BA14;
          do
          {
            v11 = (char *)&unk_7B7B0 + v10;
            v12 = *(unsigned __int8 *)++v8;
            v10 = v12;
            v11[704] = v9;
          }
          while ( v12 );
        }
      }
    }
    return 0;
  }
}
