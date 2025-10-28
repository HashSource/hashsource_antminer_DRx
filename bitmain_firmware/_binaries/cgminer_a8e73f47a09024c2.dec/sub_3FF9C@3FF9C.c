int __fastcall sub_3FF9C(int a1)
{
  FILE *v2; // r0
  FILE *v3; // r5
  int v4; // r4
  FILE *v5; // r0
  FILE *v6; // r4
  FILE *v7; // r0
  FILE *v8; // r5
  char v10[1028]; // [sp+0h] [bp-404h] BYREF

  if ( (unsigned int)dword_7A530 > 3 )
  {
    sub_3F61C(off_7A534, 3u);
    v2 = fopen(off_7A534, "a+");
    v3 = v2;
    if ( v2 )
      fprintf(v2, "%s: remount /config\n\n", "_log_remount");
    fclose(v3);
  }
  if ( (unsigned int)snprintf(
                       v10,
                       0x400u,
                       "exec 2>&1; remount () { mnt_point=/$1; umount -lf $mnt_point && mount -t jffs2 /dev/mtdblock2 $mn"
                       "t_point; }; remount %s",
                       *(const char **)(a1 + 8)) < 0x400 )
  {
    v4 = sub_3F6A4(v10);
    if ( v4 && (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v7 = fopen(off_7A534, "a+");
      v8 = v7;
      if ( v7 )
        fprintf(v7, "%s: my_system returned failed %d on LOG_REMOUNT\n\n", "_log_remount", v4);
      fclose(v8);
    }
  }
  else if ( (unsigned int)dword_7A530 > 3 )
  {
    sub_3F61C(off_7A534, 3u);
    v5 = fopen(off_7A534, "a+");
    v6 = v5;
    if ( v5 )
      fprintf(v5, "%s: too large command LOG_REMOUNT\n\n", "_log_remount");
    fclose(v6);
    return -1;
  }
  else
  {
    return -1;
  }
  return v4;
}
