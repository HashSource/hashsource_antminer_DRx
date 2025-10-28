bool __fastcall power_send_cmd(unsigned __int8 *a1, unsigned __int8 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  unsigned __int8 v9; // [sp+1Eh] [bp+16h]
  unsigned __int8 i; // [sp+1Fh] [bp+17h]
  unsigned __int8 j; // [sp+1Fh] [bp+17h]

  v9 = 0;
  pthread_mutex_lock(&i2c_mutex_0);
  while ( v9 <= 2u )
  {
    for ( i = 0; i < (unsigned int)a2; znyq_set_iic(16, 1, 0, 1, 0x11u, a1[i++]) )
      ;
    usleep((__useconds_t)&unk_7A120);
    for ( j = 0; j < (unsigned int)a4; ++j )
    {
      a3[j] = znyq_set_iic(16, 1, 1, 0, 0x11u, 0);
      printf("%s, reply_buf[%d]=%02x\n", "power_send_cmd", j, a3[j]);
    }
    if ( power_check_reply(a1, a3, a4) )
      break;
    printf("power send cmd 0x%02x failed, retry for %d times\n", a1[3], ++v9);
  }
  pthread_mutex_unlock(&i2c_mutex_0);
  return v9 <= 2u;
}
