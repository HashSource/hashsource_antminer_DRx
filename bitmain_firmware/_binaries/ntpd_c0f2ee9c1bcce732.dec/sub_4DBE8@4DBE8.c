int sub_4DBE8()
{
  int result; // r0
  int *v1; // r0
  char *v2; // r0
  int v3; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  printf("audio_show: ctl_fd %d\n", dword_C9AE8);
  result = ioctl(dword_C9AE8, 0x80044DFF, &v3);
  if ( result == -1 )
  {
    v1 = _errno_location();
    v2 = strerror(*v1);
    return printf("SOUND_MIXER_READ_RECSRC: %s\n", v2);
  }
  return result;
}
