int __fastcall sub_3FE68(int a1, const char *a2, const char *a3)
{
  int v3; // r4
  FILE *v4; // r0
  FILE *v5; // r4
  FILE *v6; // r0
  FILE *v7; // r5
  char s[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( (unsigned int)snprintf(
                       s,
                       0x1000u,
                       "exec 2>&1; gen_symbol_link () { selflog=/tmp/log_symbol_link.log; log_tgt_dir=/$1; path=$2; ts=$3"
                       "; prefix=\"$4\"_; new_path=$5; old_file=$log_tgt_dir/$path/$prefix$ts.tar; new_file=$log_tgt_dir/"
                       "$new_path/LINK_$prefix$ts.tar; echo \"old:$old_file symbol link:$new_file\">$selflog;if [ ! -d $l"
                       "og_tgt_dir/$new_path ]; then mkdir -p $log_tgt_dir/$new_path; fi; if [ -f $old_file ]; then ln -s"
                       "f $old_file $new_file;else echo \"old tarball not found\">>$selflog;fi; }; gen_symbol_link %s %s %s %s %s",
                       *(const char **)(a1 + 8),
                       (const char *)(a1 + 42),
                       (const char *)(a1 + 72),
                       a2,
                       a3) < 0x1000 )
  {
    v3 = sub_3F6A4(s);
    if ( v3 && (unsigned int)dword_7A530 > 3 )
    {
      sub_3F61C(off_7A534, 3u);
      v6 = fopen(off_7A534, "a+");
      v7 = v6;
      if ( v6 )
        fprintf(v6, "%s: my_system returned failed %d on LOG_SYMBOL_LINK\n\n", "_log_generate_symbol_link", v3);
      fclose(v7);
    }
  }
  else if ( (unsigned int)dword_7A530 > 3 )
  {
    sub_3F61C(off_7A534, 3u);
    v4 = fopen(off_7A534, "a+");
    v5 = v4;
    if ( v4 )
      fprintf(v4, "%s: too large command LOG_SYMBOL_LINK\n\n", "_log_generate_symbol_link");
    fclose(v5);
    return -1;
  }
  else
  {
    return -1;
  }
  return v3;
}
