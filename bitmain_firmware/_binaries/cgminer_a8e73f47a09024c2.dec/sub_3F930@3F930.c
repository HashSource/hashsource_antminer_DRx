int __fastcall sub_3F930(int a1)
{
  int v2; // r4
  FILE *v3; // r0
  FILE *v4; // r4
  int v5; // r5
  FILE *v6; // r0
  FILE *v7; // r6
  FILE *v8; // r0
  FILE *v9; // r0
  FILE *v10; // r5
  char s[4096]; // [sp+18h] [bp-1000h] BYREF

  if ( (unsigned int)snprintf(
                       s,
                       0x1000u,
                       "exec 2>&1; log_checksize () {     debug_mode=$1;     log_tgt_dir_name=$2;     log_tgt_dir=/$log_t"
                       "gt_dir_name;     tmp_dir=/tmp/.tmp.$$;     selflog=/tmp/log_checkconfig.log;     echo \"start che"
                       "ck /config size: \" `date` > $selflog;     if [ $debug_mode -eq 0 ];     then         threshold1_"
                       "percentage=75; threshold2_percentage=60;     else         threshold1_percentage=3; threshold2_per"
                       "centage=3;     fi; config_state=`df -k| grep $log_tgt_dir_name`; if [ \"$config_state\" = \"\" ];"
                       " then     echo \"ERROR: can't find $log_tgt_dir\" >> $selflog; exit -1; fi; used=`echo $config_st"
                       "ate| awk '{print $5}'|sed \"s/%%//g\"`; used_blocks=`echo $config_state | awk '{print $3}'`; tota"
                       "l_blocks=`echo $config_state | awk '{print $2}'`; threshold1=$((total_blocks*threshold1_percentag"
                       "e/100)); threshold2=$((total_blocks*threshold2_percentage/100)); echo \"used_blocks   =$used_bloc"
                       "ks\" >> $selflog; echo \"threshold1    =$threshold1\" >> $selflog; echo \"threshold2    =$thresho"
                       "ld2\" >> $selflog; echo \"total_blocks  =$total_blocks\" >> $selflog; mkdir $tmp_dir; cd $tmp_dir"
                       "; if [ $used_blocks -gt $threshold1 ]; then     if [ $debug_mode -eq 0 ];     then         fileli"
                       "st=`find $log_tgt_dir -type f -name \"cglog_*\"| xargs ls -tr`;     else         filelist=`find $"
                       "log_tgt_dir -type f -name \"test_log*\" | xargs ls -tr`;     fi;     echo $filelist >> $selflog; "
                       "    if [ ! -z \"$filelist\" ];     then         for file in $filelist;         do             use"
                       "d_blocks=`df -k | grep $log_tgt_dir_name | awk '{print $3}'`;             if [ $used_blocks -lt $"
                       "threshold2 ];             then                 echo \"$used_blocks < $threshold2\" >> $selflog; b"
                       "reak;             else                 echo \"$used_blocks > $threshold2\" >> $selflog; cat /dev/"
                       "null >$file;rm -f $file;           fi;         done;     else         echo \"ERROR: no log file f"
                       "ound\" >> $selflog;     fi; else     echo \"enough free space ($((100-used))%% left). do nothing\""
                       " >> $selflog; fi; cd $log_tgt_dir; rm -rf $tmp_dir ; }; log_checksize %d %s",
                       0,
                       *(const char **)(a1 + 8)) >= 0x1000 )
  {
    if ( (unsigned int)dword_7A530 <= 3 )
      return -1;
    sub_3F61C(off_7A534, 3u);
    v3 = fopen(off_7A534, "a+");
    v4 = v3;
    if ( v3 )
      fprintf(v3, "%s: too large command LOGCHECKSIZE\n\n", "log_rotate");
LABEL_6:
    fclose(v4);
    return -1;
  }
  v5 = sub_3F6A4(s);
  if ( v5 && (unsigned int)dword_7A530 > 3 )
  {
    sub_3F61C(off_7A534, 3u);
    v6 = fopen(off_7A534, "a+");
    v7 = v6;
    if ( v6 )
      fprintf(v6, "%s: my_system returned failed %d on LOGCHECKSIZE\n\n", "log_rotate", v5);
    fclose(v7);
  }
  if ( (unsigned int)snprintf(
                       s,
                       0x1000u,
                       "exec 2>&1; log_rotate () {     debug_mode=$1;     need_clear=$2;     log_tgt_dir_name=$3;     log"
                       "_src_dir=$4;     path=$5;     ts=$6;     prefix=\"$7\"_;     log_bak_dir=/tmp/var.log.bak;     lo"
                       "g_tgt_dir=/$log_tgt_dir_name;     selflog=/tmp/log_rotate.log;     if [ $debug_mode -eq 0 ];     "
                       "then         threshold1_percentage=75; threshold2_percentage=60;     else         threshold1_perc"
                       "entage=15; threshold2_percentage=10;     fi; echo \"start bakcup logs: \" `date` > $selflog; cglo"
                       "g_archieve_file=$log_tgt_dir/$path/$prefix$ts.tar; rm -rf $log_bak_dir; mkdir -p $log_bak_dir; ro"
                       "ot_state=`df -k| grep root`; if [ \"$root_state\" = \"\" ]; then     echo \"ERROR: can't find roo"
                       "t\" >> $selflog; exit -1; fi; used_blocks=`echo $root_state | awk '{print $3}'`; total_blocks=`ec"
                       "ho $root_state | awk '{print $2}'`; threshold1=$((total_blocks*threshold1_percentage/100)); if [ "
                       "$used_blocks -gt $threshold1 ] || [ $need_clear -eq 1 ]; then     echo \"used_blocks=$used_blocks"
                       " > threshold1=$threshold1, total_blocks=$total_blocks\" >> $selflog; echo \"clear $log_src_dir\" "
                       ">> $selflog; cd $log_bak_dir; mv $log_src_dir/* ./;if [ $need_clear -ne 1 ]; then cglog_archieve_"
                       "file=$log_tgt_dir/$path/$prefix$ts\"_clearAT_\"`date '+%%Y-%%m-%%d_%%H-%%M-%%S'`.tar;fi;echo \"ba"
                       "ckup to $cglog_archieve_file\">>$selflog; else     echo \"used_blocks=$used_blocks <= threshold1="
                       "$threshold1, total_blocks=$total_blocks\" >> $selflog; echo \"only archieve logs to $cglog_archie"
                       "ve_file\" >> $selflog; cd $log_src_dir; fi; if [ ! -d $log_tgt_dir/$path ]; then     mkdir -p $lo"
                       "g_tgt_dir/$path; fi; cat /dev/null > $cglog_archieve_file;tar cf $cglog_archieve_file * && rm $lo"
                       "g_bak_dir/ -rf; }; log_rotate %d %d %s %s %s %s %s",
                       0,
                       *(_DWORD *)a1,
                       *(const char **)(a1 + 8),
                       *(const char **)(a1 + 4),
                       (const char *)(a1 + 42),
                       (const char *)(a1 + 72),
                       *(const char **)(a1 + 92)) >= 0x1000 )
  {
    if ( (unsigned int)dword_7A530 <= 3 )
      return -1;
    sub_3F61C(off_7A534, 3u);
    v8 = fopen(off_7A534, "a+");
    v4 = v8;
    if ( v8 )
      fprintf(v8, "%s: too large command LOGROTATE\n\n", "log_rotate");
    goto LABEL_6;
  }
  v2 = sub_3F6A4(s);
  if ( v2 && (unsigned int)dword_7A530 > 3 )
  {
    sub_3F61C(off_7A534, 3u);
    v9 = fopen(off_7A534, "a+");
    v10 = v9;
    if ( v9 )
      fprintf(v9, "%s: my_system returned failed %d on LOGROTATE\n\n", "log_rotate", v2);
    fclose(v10);
  }
  return v2;
}
