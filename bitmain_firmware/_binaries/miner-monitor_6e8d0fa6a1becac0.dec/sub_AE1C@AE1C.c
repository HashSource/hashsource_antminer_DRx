__sighandler_t sub_AE1C()
{
  sub_ACE4(30, 30);
  signal(14, (__sighandler_t)sub_AB74);
  return signal(13, (__sighandler_t)sub_A3E0);
}
