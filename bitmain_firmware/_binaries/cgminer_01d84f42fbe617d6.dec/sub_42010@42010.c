int sub_42010()
{
  if ( access("/usr/bin/need_reboot", 0) != -1 )
    return system("echo 2 >> /usr/bin/already_reboot");
  system("touch /usr/bin/need_reboot");
  system("echo 1 >> /usr/bin/already_reboot");
  return system("/etc/init.d/cgminer.sh restart");
}
