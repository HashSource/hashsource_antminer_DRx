int __fastcall add_port_to_gpio_map(int result, int a2, int *a3)
{
  _DWORD v5[2]; // [sp+14h] [bp+Ch] BYREF
  _DWORD v6[3]; // [sp+1Ch] [bp+14h] BYREF

  v5[0] = result;
  if ( a3 )
  {
    if ( exists_c_map(a3, (int)v5) )
    {
      printf("%s:%d", "add_port_to_gpio_map", 184);
      return printf("port %d already exist in map\n", v5[0]);
    }
    else
    {
      printf("%s:%d", "add_port_to_gpio_map", 180);
      printf("add %d to flicker map with interval %d\n", v5[0], a2);
      v6[0] = a2;
      v6[1] = 0;
      v6[2] = 1;
      return insert_c_map(a3, v5, 4u, v6, 0xCu);
    }
  }
  return result;
}
