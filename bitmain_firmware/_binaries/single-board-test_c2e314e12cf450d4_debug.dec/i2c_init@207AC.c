int i2c_init()
{
  _DWORD v2[2]; // [sp+14h] [bp+Ch] BYREF
  int v3; // [sp+1Ch] [bp+14h] BYREF

  v3 = -1;
  if ( platform_inited )
  {
    if ( !i2c_index )
    {
      i2c_ctx_map = (int)new_c_map((int)i2c_compare_e, 0, 0);
      pthread_mutex_init(&i2c_mutex, 0);
    }
    v3 = ++i2c_index;
    v2[0] = 0;
    v2[1] = 0;
    insert_c_map((int *)i2c_ctx_map, &v3, 4u, v2, 8u);
    return v3;
  }
  else
  {
    printf("%s:%d", "i2c_init", 41);
    puts("please init platform first!!");
    return -2;
  }
}
