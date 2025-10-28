int __fastcall open_pic(int a1)
{
  int v1; // r6
  int v4; // [sp+0h] [bp-Ch] BYREF
  __int16 v5; // [sp+4h] [bp-8h]
  char v6; // [sp+6h] [bp-6h]
  char v7; // [sp+7h] [bp-5h]

  v1 = g_bitmain_pic_state[2 * a1];
  if ( !v1 || !g_bitmain_pic_state[2 * a1 + 1] )
  {
    v4 = a1;
    v5 = 0;
    v6 = byte_1B4020;
    v7 = a1;
    pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex_all);
    v1 = iic_init((int)&v4);
    pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex_all);
    if ( v1 >= 0 )
    {
      g_bitmain_pic_state[2 * a1] = v1;
      g_bitmain_pic_state[2 * a1 + 1] = 1;
    }
  }
  return v1;
}
