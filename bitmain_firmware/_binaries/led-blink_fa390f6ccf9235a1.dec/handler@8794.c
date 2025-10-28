void __fastcall __noreturn handler(int a1)
{
  unlink("/var/run/led-blink.run");
  exit(0);
}
