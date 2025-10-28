int __fastcall sub_3FCD0(int a1, const char *a2, const char *a3, const char *a4)
{
  int v4; // r4
  FILE *v5; // r0
  FILE *v6; // r4
  FILE *v7; // r0
  FILE *v8; // r4
  FILE *v9; // r0
  FILE *v10; // r5
  char s[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( (unsigned int)snprintf(
                       s,
                       0x1000u,
                       "exec 2>&1; update_name () { log_tgt_dir=/$1; path=$2; ts=$3; prefix=\"$4\"_; new_path=$5; new_ts="
                       "$6; old_file=$log_tgt_dir/$path/$prefix$ts.tar; new_file=$log_tgt_dir/$new_path/$prefix$new_ts.ta"
                       "r; echo \"old:$old_file new:$new_file\">/tmp/log_updatename.log;if [ ! -d $log_tgt_dir/$new_path "
                       "]; then mkdir -p $log_tgt_dir/$new_path; fi; if [ -f $old_file ]; then mv $old_file $new_file;fi;"
                       " if [ \"`ls -A $log_tgt_dir/$path/ | wc -w`\" == \"0\" ];then rm -rf $log_tgt_dir/$path;fi; }; up"
                       "date_name %s %s %s %s %s %s",
                       *(const char **)(a1 + 8),
                       (const char *)(a1 + 42),
                       (const char *)(a1 + 72),
                       a2,
                       a3,
                       a4) < 0x1000 )
  {
    if ( (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v7 = fopen(off_7A534, "a+");
      v8 = v7;
      if ( v7 )
        fprintf(v7, "%s: _log_update_name\n\n", "_log_update_name");
      fclose(v8);
    }
    v4 = sub_3F6A4(s);
    if ( v4 && (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v9 = fopen(off_7A534, "a+");
      v10 = v9;
      if ( v9 )
        fprintf(v9, "%s: my_system returned failed %d on LOGUPDATENAME\n\n", "_log_update_name", v4);
      fclose(v10);
    }
  }
  else if ( (unsigned int)dword_7A530 > 3 )
  {
    sub_3F61C(off_7A534, 3u);
    v5 = fopen(off_7A534, "a+");
    v6 = v5;
    if ( v5 )
      fprintf(v5, "%s: too large command LOGUPDATENAME\n\n", "_log_update_name");
    fclose(v6);
    return -1;
  }
  else
  {
    return -1;
  }
  return v4;
}
