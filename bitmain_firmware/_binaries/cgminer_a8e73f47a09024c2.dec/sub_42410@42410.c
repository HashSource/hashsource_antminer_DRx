void sub_42410()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v0, "bitmain_dcr_reinit_device");
    sub_3F178(5, v0, 0);
  }
  if ( !byte_7CCD8 )
    system("/etc/init.d/cgminer.sh restart > /dev/null 2>&1 &");
}
