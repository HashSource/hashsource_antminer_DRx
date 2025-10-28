void __fastcall __noreturn check_working_temp(int a1)
{
  while ( 1 )
  {
    get_current_voltage();
    (*(void (__fastcall **)(int))(a1 + 64))(a1);
    sleep(0x12Cu);
  }
}
