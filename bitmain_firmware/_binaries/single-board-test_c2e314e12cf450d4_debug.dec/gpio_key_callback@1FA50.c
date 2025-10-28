int __fastcall gpio_key_callback(int a1, char a2)
{
  int result; // r0
  int v5; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  result = convert_port_to_ui_type(a1);
  v5 = result;
  if ( result == 258 )
  {
    printf("%s:%d", "gpio_key_callback", 110);
    return printf("gpio port %d is not a supported key\n", a1);
  }
  else
  {
    for ( i = 0; i <= 4; ++i )
    {
      if ( ui_callback[i] )
        result = ((int (__fastcall *)(int, bool))ui_callback[i])(v5, a2 != 0);
    }
  }
  return result;
}
