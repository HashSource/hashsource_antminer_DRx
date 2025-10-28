int __fastcall sub_5439C(_DWORD *a1, char **a2)
{
  char *v4; // r0
  int v5; // r4
  int v6; // r0
  char *v7; // r3
  char *v9; // [sp+8h] [bp-1Ch] BYREF
  int v10; // [sp+Ch] [bp-18h] BYREF
  int v11; // [sp+10h] [bp-14h]
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+18h] [bp-Ch]

  if ( !a2 || *a2 )
    off_7C9FC("./../lib/isc/log.c", 336, 0, "lcfgp != ((void *)0) && *lcfgp == ((void *)0)");
  if ( !a1 || *a1 != 1281586296 )
    off_7C9FC(
      "./../lib/isc/log.c",
      337,
      0,
      "(((lctx) != ((void *)0)) && (((const isc__magic_t *)(lctx))->magic == ((('L') << 24 | ('c') << 16 | ('t') << 8 | ('x')))))");
  v4 = sub_4F524(0x28u);
  v9 = v4;
  if ( !v4 )
    return 1;
  *((_DWORD *)v4 + 1) = a1;
  *((_DWORD *)v4 + 7) = -1;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 6) = 0;
  *(_DWORD *)v4 = 1281582695;
  v10 = 24;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  v5 = sub_54104(v4, "default_syslog", 2, -1, &v10, 0);
  if ( v5 )
    goto LABEL_15;
  v11 = 0;
  v13 = 0;
  v10 = stderr;
  v12 = -2;
  v5 = sub_54104(v9, "default_stderr", 4, -1, &v10, 1);
  if ( v5
    || (dword_C9C50 = *((_DWORD *)v9 + 2),
        v11 = 0,
        v13 = 0,
        v10 = stderr,
        v12 = -2,
        (v5 = sub_54104(v9, "default_debug", 4, 0, &v10, 1)) != 0) )
  {
LABEL_15:
    v7 = v9;
  }
  else
  {
    v6 = sub_54104(v9, "null", 1, 0, 0, 0);
    v7 = v9;
    v5 = v6;
    if ( !v6 )
    {
      *a2 = v9;
      return v5;
    }
  }
  if ( v7 )
    sub_537A0((_DWORD **)&v9);
  return v5;
}
