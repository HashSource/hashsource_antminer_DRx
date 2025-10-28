int __fastcall sub_349FC(const char **a1)
{
  int v2; // r5
  FILE *v4; // r0
  FILE *v5; // r4
  FILE *v6; // r0
  FILE *v7; // r4
  FILE *v8; // r0
  FILE *v9; // r6
  char v10[1024]; // [sp+0h] [bp-400h] BYREF

  if ( (unsigned int)dword_6D360 > 3 )
  {
    sub_34700(off_6D364, 3u);
    v8 = fopen(off_6D364, "a+");
    v9 = v8;
    if ( v8 )
      fprintf(v8, "%s: remount /config\n\n", "_log_remount");
    fclose(v9);
  }
  if ( (unsigned int)snprintf(
                       v10,
                       0x400u,
                       "exec 2>&1; remount () { mnt_point=/$1; umount -lf $mnt_point && mount -t jffs2 /dev/mtdblock2 $mn"
                       "t_point; }; remount %s",
                       *a1) < 0x400 )
  {
    v2 = sub_34764(v10);
    if ( v2 && (unsigned int)dword_6D360 > 3 )
    {
      sub_34700(off_6D364, 3u);
      v6 = fopen(off_6D364, "a+");
      v7 = v6;
      if ( v6 )
        fprintf(v6, "%s: my_system returned failed %d on LOG_REMOUNT\n\n", "_log_remount", v2);
      fclose(v7);
    }
    return v2;
  }
  if ( (unsigned int)dword_6D360 <= 3 )
    return -1;
  sub_34700(off_6D364, 3u);
  v4 = fopen(off_6D364, "a+");
  v5 = v4;
  if ( v4 )
    fprintf(v4, "%s: too large command LOG_REMOUNT\n\n", "_log_remount");
  fclose(v5);
  return -1;
}
