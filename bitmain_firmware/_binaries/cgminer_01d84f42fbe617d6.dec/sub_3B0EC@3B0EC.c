void __noreturn sub_3B0EC()
{
  int v0; // r10
  char buf; // [sp+8h] [bp-804h] BYREF
  char v2[2051]; // [sp+9h] [bp-803h] BYREF

  v0 = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)&unk_C4BCC + v0 + 24) && byte_60DE9 )
    {
      pthread_mutex_lock(&stru_63120);
      if ( ioctl(dword_C54A6, 0x703u, *(int *)&aBitmainL3Detec_0[4 * v0 + 892] >> 1) < 0
        && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
      {
        snprintf(&buf, 0x800u, " %d ioctl error in %s", v0, "pic_heart_beat_func");
        sub_38438(3, &buf, 0);
      }
      buf = 85;
      v2[0] = -86;
      write(dword_C54A6, &buf, 1u);
      sub_2B244();
      write(dword_C54A6, v2, 1u);
      sub_2B244();
      buf = 22;
      write(dword_C54A6, &buf, 1u);
      pthread_mutex_unlock(&stru_63120);
      sub_2B21C();
    }
    if ( ++v0 > 3 )
    {
      v0 = 0;
      sleep(0xAu);
    }
  }
}
