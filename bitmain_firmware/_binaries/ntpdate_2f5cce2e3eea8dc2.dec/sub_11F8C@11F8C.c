int __fastcall sub_11F8C(int a1, char **a2, _DWORD *a3)
{
  char *v6; // r0
  int v7; // r6
  char *v9; // r3
  _DWORD *v10; // r2
  char *v11; // [sp+0h] [bp-8h] BYREF
  _DWORD *v12; // [sp+4h] [bp-4h] BYREF

  v12 = 0;
  if ( !a1 )
    off_21DCC("./../lib/isc/log.c", 272, 0, "mctx != ((void *)0)");
  if ( !a2 || *a2 )
    off_21DCC("./../lib/isc/log.c", 273, 0, "lctxp != ((void *)0) && *lctxp == ((void *)0)");
  if ( a3 && *a3 )
    off_21DCC("./../lib/isc/log.c", 274, 0, "lcfgp == ((void *)0) || *lcfgp == ((void *)0)");
  v6 = sub_D894(0x202Cu);
  v11 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 1) = a1;
    *((_DWORD *)v6 + 2058) = 0;
    *((_DWORD *)v6 + 2057) = 0;
    *((_DWORD *)v6 + 2) = 0;
    *(_DWORD *)v6 = 1281586296;
    *((_DWORD *)v6 + 3) = 0;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 0;
    sub_1178C(v6, &off_21DE8);
    sub_1194C(v11, &off_21E00);
    v7 = sub_11DA4(v11, (char **)&v12);
    if ( !v7 )
    {
      v7 = sub_10EBC((int)v12);
      if ( !v7 )
      {
        v9 = v11;
        v10 = v12;
        *((_DWORD *)v11 + 8) = v12;
        *a2 = v9;
        if ( a3 )
          *a3 = v10;
        return v7;
      }
    }
    if ( v12 )
      sub_111A8(&v12);
  }
  else
  {
    v7 = 1;
  }
  if ( v11 )
    sub_11490((void **)&v11);
  return v7;
}
