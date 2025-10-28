int __fastcall sub_14B44(const char *a1)
{
  __pid_t v2; // r4
  const char *v3; // r6
  char *v4; // r3
  const char *v5; // r12
  int v6; // r2
  int v7; // t1
  int v8; // r7
  int *v9; // r9
  int v10; // r4
  const unsigned __int16 **v11; // r0
  _BYTE *v12; // r3
  int v13; // r4
  int v15; // t1

  if ( a1 )
  {
    v2 = getpid();
    v3 = &a1[strlen(a1) - 1];
    if ( *v3 == 88 && a1 <= v3 )
    {
LABEL_4:
      v4 = (char *)v3;
      v5 = v3;
      do
      {
        v6 = v2 % 10;
        v2 /= 10;
        *v4-- = v6 + 48;
        v7 = *(unsigned __int8 *)--v5;
        v3 = v4;
      }
      while ( v7 == 88 && a1 <= v4 );
    }
  }
  else
  {
    off_21DCC("./../lib/isc/unix/dir.c", 192, 0, "templet != ((void *)0)");
    v2 = getpid();
    v3 = (const char *)(strlen(0) - 1);
    if ( *v3 == 88 )
      goto LABEL_4;
  }
LABEL_7:
  while ( 2 )
  {
    v8 = mkdir(a1, 0x1C0u);
    if ( !v8 )
      return 0;
    v9 = _errno_location();
    if ( *v9 == 17 )
    {
      v10 = *((unsigned __int8 *)v3 + 1);
      if ( v3[1] )
      {
        v11 = _ctype_b_loc();
        v12 = v3 + 1;
        while ( 1 )
        {
          if ( ((*v11)[v10] & 0x800) != 0 )
          {
            *v12 = 97;
            goto LABEL_7;
          }
          if ( v10 != 122 )
            break;
          *v12 = 97;
          v15 = (unsigned __int8)*++v12;
          v10 = v15;
          if ( !v15 )
            goto LABEL_14;
        }
        v13 = (unsigned __int8)(v10 + 1);
        *v12 = v13;
        if ( v13 )
          continue;
      }
LABEL_14:
      *v9 = 17;
    }
    break;
  }
  if ( v8 == -1 )
    return sub_14CC8(*v9);
  else
    return 0;
}
