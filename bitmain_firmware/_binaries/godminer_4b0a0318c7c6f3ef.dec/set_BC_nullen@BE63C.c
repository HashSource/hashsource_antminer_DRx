int __fastcall set_BC_nullen(int a1, int a2)
{
  unsigned int v4; // r0
  int v6; // [sp+4h] [bp-8h] BYREF

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  fpga_read(192, &v6);
  if ( a2 )
    v4 = v6 & 0xFFF0FFFF | (a1 << 16) | 0xC00000;
  else
    v4 = v6 & 0xFFB0FFFF | (a1 << 16) & 0xFFBFFFFF;
  if ( !a2 )
    v4 |= 0x800000u;
  sub_BD14C(v4);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
