int __fastcall remove_port_form_gpio_map(int result, int *a2)
{
  int v3; // [sp+4h] [bp+4h] BYREF

  v3 = result;
  if ( a2 )
  {
    result = exists_c_map(a2, (int)&v3);
    if ( result == 1 )
    {
      printf("%s:%d", "remove_port_form_gpio_map", 168);
      printf("remove %d from flicker list\n", v3);
      return remove_c_map(a2, (int)&v3);
    }
  }
  return result;
}
