const char *__fastcall sub_122B0(int a1)
{
  if ( a1 == 1 )
    return "ignore";
  if ( !a1 )
    return "listen";
  if ( a1 != 2 )
  {
    if ( dword_7CF4C > 0 )
      printf("fatal: unknown nic_rule_action %d\n", a1);
    off_7C9FC("ntp_io.c", 1326, 1, "0");
  }
  return "drop";
}
