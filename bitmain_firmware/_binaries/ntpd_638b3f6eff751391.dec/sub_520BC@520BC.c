int __fastcall sub_520BC(int a1, char **a2)
{
  char *v4; // r4
  int v5; // r5
  int v6; // r0
  size_t v7; // r0
  unsigned int v8; // r3
  char *v9; // r0
  int v10; // r3
  int v11; // r0
  const char *v12; // r0
  int *v13; // r0
  const char *v14; // r0
  FILE *v16; // r0
  const char *v17; // r0
  const char *v18[32]; // [sp+0h] [bp-80h] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/unix/ifiter_ioctl.c", 296, 0, "mctx != ((void *)0)");
  if ( !a2 )
    off_7C9FC("./../lib/isc/unix/ifiter_ioctl.c", 297, 0, "iterp != ((void *)0)");
  if ( *a2 )
    off_7C9FC("./../lib/isc/unix/ifiter_ioctl.c", 298, 0, "*iterp == ((void *)0)");
  v4 = sub_4F524(0xFCu);
  if ( !v4 )
    return 1;
  *((_DWORD *)v4 + 1) = a1;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 2) = 4;
  *((_DWORD *)v4 + 8) = -1;
  v6 = socket(2, 2, 0);
  *((_DWORD *)v4 + 3) = v6;
  if ( v6 >= 0 )
  {
    v7 = 4096;
    for ( *((_DWORD *)v4 + 7) = 4096; ; *((_DWORD *)v4 + 7) = v7 )
    {
      v9 = sub_4F524(v7);
      *((_DWORD *)v4 + 6) = v9;
      if ( !v9 )
      {
        v5 = 1;
        goto LABEL_22;
      }
      v10 = *((_DWORD *)v4 + 7);
      v4[16] = 0;
      *((_DWORD *)v4 + 5) = v9;
      *((_DWORD *)v4 + 4) = v10;
      if ( ioctl(*((_DWORD *)v4 + 3), 0x8912u, v4 + 16) == -1 )
      {
        v11 = *_errno_location();
        if ( v11 != 22 )
        {
          sub_57070(v11);
          v17 = (const char *)sub_55CA4(dword_C9C48, 7, 502, "get interface configuration: %s", v18[0]);
          sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 135, v17, v18);
LABEL_17:
          v5 = 34;
          free(*((void **)v4 + 6));
          *((_DWORD *)v4 + 6) = 0;
LABEL_22:
          close(*((_DWORD *)v4 + 3));
          goto LABEL_19;
        }
        if ( *((_DWORD *)v4 + 7) > 0xFFFFFu )
        {
LABEL_16:
          v12 = (const char *)sub_55CA4(
                                dword_C9C48,
                                7,
                                503,
                                "get interface configuration: maximum buffer size exceeded");
          sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 162, v12);
          goto LABEL_17;
        }
      }
      else
      {
        v8 = *((_DWORD *)v4 + 7);
        if ( *((_DWORD *)v4 + 4) + 64 < v8 )
        {
          v5 = 0;
          v16 = fopen("/proc/net/if_inet6", "r");
          *((_DWORD *)v4 + 26) = 25;
          *((_DWORD *)v4 + 62) = 25;
          *(_DWORD *)v4 = 1229343060;
          *((_DWORD *)v4 + 9) = v16;
          *a2 = v4;
          return v5;
        }
        if ( v8 > 0xFFFFF )
          goto LABEL_16;
      }
      free(*((void **)v4 + 6));
      v7 = 2 * *((_DWORD *)v4 + 7);
    }
  }
  v13 = _errno_location();
  v5 = 34;
  sub_57070(*v13);
  v14 = (const char *)sub_55CA4(dword_C9C48, 7, 501, "making interface scan socket: %s", v18[0]);
  sub_5166C("./../lib/isc/unix/ifiter_ioctl.c", 348, v14, v18);
LABEL_19:
  free(v4);
  return v5;
}
