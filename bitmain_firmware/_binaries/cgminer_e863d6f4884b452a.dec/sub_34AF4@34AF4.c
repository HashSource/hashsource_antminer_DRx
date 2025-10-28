int __fastcall sub_34AF4(int a1)
{
  int v2; // r4
  FILE *v4; // r0
  FILE *v5; // r4
  int v6; // r6
  FILE *v7; // r0
  FILE *v8; // r5
  FILE *v9; // r0
  FILE *v10; // r0
  FILE *v11; // r5
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
                       *(const char **)(a1 + 8)) < 0x1000 )
  {
    v6 = sub_34764(s);
    if ( v6 && (unsigned int)dword_6D360 > 3 )
    {
      sub_34700(off_6D364, 3u);
      v7 = fopen(off_6D364, "a+");
      v8 = v7;
      if ( v7 )
        fprintf(v7, "%s: my_system returned failed %d on LOGCHECKSIZE\n\n", "log_rotate", v6);
      fclose(v8);
    }
    if ( (unsigned int)snprintf(
                         s,
                         0x1000u,
                         "exec 2>&1; log_rotate () {     debug_mode=$1;     need_clear=$2;     log_tgt_dir_name=$3;     l"
                         "og_src_dir=$4;     path=$5;     ts=$6;     prefix=\"$7\"_;     log_bak_dir=/tmp/var.log.bak;   "
                         "  log_tgt_dir=/$log_tgt_dir_name;     selflog=/tmp/log_rotate.log;     if [ $debug_mode -eq 0 ]"
                         ";     then         threshold1_percentage=75; threshold2_percentage=60;     else         thresho"
                         "ld1_percentage=15; threshold2_percentage=10;     fi; echo \"start bakcup logs: \" `date` > $sel"
                         "flog; cglog_archieve_file=$log_tgt_dir/$path/$prefix$ts.tar; rm -rf $log_bak_dir; mkdir -p $log"
                         "_bak_dir; root_state=`df -k| grep root`; if [ \"$root_state\" = \"\" ]; then     echo \"ERROR: "
                         "can't find root\" >> $selflog; exit -1; fi; used_blocks=`echo $root_state | awk '{print $3}'`; "
                         "total_blocks=`echo $root_state | awk '{print $2}'`; threshold1=$((total_blocks*threshold1_perce"
                         "ntage/100)); if [ $used_blocks -gt $threshold1 ] || [ $need_clear -eq 1 ]; then     echo \"used"
                         "_blocks=$used_blocks > threshold1=$threshold1, total_blocks=$total_blocks\" >> $selflog; echo \""
                         "clear $log_src_dir\" >> $selflog; cd $log_bak_dir; mv $log_src_dir/* ./;if [ $need_clear -ne 1 "
                         "]; then cglog_archieve_file=$log_tgt_dir/$path/$prefix$ts\"_clearAT_\"`date '+%%Y-%%m-%%d_%%H-%"
                         "%M-%%S'`.tar;fi;echo \"backup to $cglog_archieve_file\">>$selflog; else     echo \"used_blocks="
                         "$used_blocks <= threshold1=$threshold1, total_blocks=$total_blocks\" >> $selflog; echo \"only a"
                         "rchieve logs to $cglog_archieve_file\" >> $selflog; cd $log_src_dir; fi; if [ ! -d $log_tgt_dir"
                         "/$path ]; then     mkdir -p $log_tgt_dir/$path; fi; cat /dev/null > $cglog_archieve_file;tar cf"
                         " $cglog_archieve_file * && rm $log_bak_dir/ -rf; }; log_rotate %d %d %s %s %s %s %s",
                         0,
                         *(_DWORD *)a1,
                         *(const char **)(a1 + 8),
                         *(const char **)(a1 + 4),
                         (const char *)(a1 + 42),
                         (const char *)(a1 + 72),
                         *(const char **)(a1 + 92)) < 0x1000 )
    {
      v2 = sub_34764(s);
      if ( v2 && (unsigned int)dword_6D360 > 3 )
      {
        sub_34700(off_6D364, 3u);
        v10 = fopen(off_6D364, "a+");
        v11 = v10;
        if ( v10 )
          fprintf(v10, "%s: my_system returned failed %d on LOGROTATE\n\n", "log_rotate", v2);
        fclose(v11);
      }
      return v2;
    }
    if ( (unsigned int)dword_6D360 <= 3 )
      return -1;
    sub_34700(off_6D364, 3u);
    v9 = fopen(off_6D364, "a+");
    v5 = v9;
    if ( v9 )
      fprintf(v9, "%s: too large command LOGROTATE\n\n", "log_rotate");
  }
  else
  {
    if ( (unsigned int)dword_6D360 <= 3 )
      return -1;
    sub_34700(off_6D364, 3u);
    v4 = fopen(off_6D364, "a+");
    v5 = v4;
    if ( v4 )
      fprintf(v4, "%s: too large command LOGCHECKSIZE\n\n", "log_rotate");
  }
  fclose(v5);
  return -1;
}
