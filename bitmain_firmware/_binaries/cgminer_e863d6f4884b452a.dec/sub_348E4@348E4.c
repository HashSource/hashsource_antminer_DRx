int __fastcall sub_348E4(int a1, const char *a2, const char *a3, const char *a4)
{
  int v4; // r5
  FILE *v6; // r0
  FILE *v7; // r4
  FILE *v8; // r0
  FILE *v9; // r5
  FILE *v10; // r0
  FILE *v11; // r4
  char s[4096]; // [sp+18h] [bp-1000h] BYREF

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
    if ( (unsigned int)dword_6D360 > 3 )
    {
      sub_34700(off_6D364, 3u);
      v8 = fopen(off_6D364, "a+");
      v9 = v8;
      if ( v8 )
        fprintf(v8, "%s: _log_update_name\n\n", "_log_update_name");
      fclose(v9);
      v4 = sub_34764(s);
      if ( !v4 )
        return v4;
    }
    else
    {
      v4 = sub_34764(s);
      if ( !v4 )
        return v4;
    }
    if ( (unsigned int)dword_6D360 > 3 )
    {
      sub_34700(off_6D364, 3u);
      v6 = fopen(off_6D364, "a+");
      v7 = v6;
      if ( v6 )
        fprintf(v6, "%s: my_system returned failed %d on LOGUPDATENAME\n\n", "_log_update_name", v4);
      fclose(v7);
    }
    return v4;
  }
  if ( (unsigned int)dword_6D360 <= 3 )
    return -1;
  sub_34700(off_6D364, 3u);
  v10 = fopen(off_6D364, "a+");
  v11 = v10;
  if ( v10 )
    fprintf(v10, "%s: too large command LOGUPDATENAME\n\n", "_log_update_name");
  fclose(v11);
  return -1;
}
