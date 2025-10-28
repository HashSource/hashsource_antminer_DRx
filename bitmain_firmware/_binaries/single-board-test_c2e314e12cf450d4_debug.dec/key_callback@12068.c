const char *__fastcall key_callback(int a1, int a2)
{
  const char *result; // r0
  _DWORD v4[2]; // [sp+8h] [bp+8h]

  result = "reset";
  v4[0] = "reset";
  v4[1] = "ipreport";
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      result = (const char *)printf("%s key up\n", (const char *)v4[a1 - 256]);
      key_pressed = 0;
    }
  }
  else
  {
    result = (const char *)printf("%s key pressed\n", (const char *)v4[a1 - 256]);
    key_pressed = 1;
  }
  if ( a1 == 256 )
  {
    red_led_off();
    return (const char *)green_led_off();
  }
  return result;
}
