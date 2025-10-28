void sub_36678()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v0, "bitmain_dcr_reinit_device");
    sub_343C4(5, v0, 0);
  }
  if ( !byte_6FAE8 )
    system("/etc/init.d/cgminer.sh restart > /dev/null 2>&1 &");
}
