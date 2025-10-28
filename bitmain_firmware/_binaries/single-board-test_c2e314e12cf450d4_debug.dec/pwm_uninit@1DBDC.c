int __fastcall pwm_uninit(int result)
{
  if ( result - 1 <= 1 )
  {
    *((_DWORD *)&pwm_param + 2 * result - 2) = 0;
    *((_BYTE *)&pwm_param + 8 * result - 4) = 0;
  }
  else
  {
    printf("%s:%d", "pwm_uninit", 29);
    return puts("bad param");
  }
  return result;
}
