int __fastcall gpio_reg_callback(int a1, int a2)
{
  int v5; // [sp+Ch] [bp+4h] BYREF
  _DWORD v6[2]; // [sp+10h] [bp+8h] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( pthread_mutex_lock(&gpio_ctrl_map) )
    {
      printf("%s:%d", "gpio_reg_callback", 124);
      puts("fail to lock gpio ctrl mutex");
      return -1;
    }
    else
    {
      if ( exists_c_map((int *)dword_235DC8, (int)&v5) )
      {
        printf("%s:%d", "gpio_reg_callback", 133);
        printf("port %d already exist in callback map \n", v5);
      }
      else
      {
        printf("%s:%d", "gpio_reg_callback", 129);
        printf("add %d to callback map\n", v5);
        v6[0] = a2;
        v6[1] = -1;
        insert_c_map((int *)dword_235DC8, &v5, 4u, v6, 8u);
      }
      pthread_mutex_unlock(&gpio_ctrl_map);
      return 0;
    }
  }
  else
  {
    printf("%s:%d", "gpio_reg_callback", 120);
    puts("bad param");
    return -1;
  }
}
