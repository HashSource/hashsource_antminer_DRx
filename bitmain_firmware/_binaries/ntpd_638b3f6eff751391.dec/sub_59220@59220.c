int __fastcall sub_59220(int a1, char **a2, int a3)
{
  char *v6; // r0

  if ( !a2 )
    off_7C9FC("./../lib/isc/buffer.c", 454, 0, "dynbuffer != ((void *)0)");
  if ( *a2 )
    off_7C9FC("./../lib/isc/buffer.c", 455, 0, "*dynbuffer == ((void *)0)");
  v6 = sub_4F524(a3 + 36);
  if ( !v6 )
    return 1;
  *((_DWORD *)v6 + 2) = a3;
  *((_DWORD *)v6 + 8) = a1;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_DWORD *)v6 + 5) = 0;
  *(_DWORD *)v6 = 1114990113;
  *((_DWORD *)v6 + 1) = v6 + 36;
  *((_DWORD *)v6 + 6) = -1;
  *((_DWORD *)v6 + 7) = -1;
  *a2 = v6;
  return 0;
}
