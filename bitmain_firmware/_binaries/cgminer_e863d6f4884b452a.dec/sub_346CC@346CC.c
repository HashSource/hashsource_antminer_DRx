int __fastcall sub_346CC(const char *a1)
{
  char s[512]; // [sp+8h] [bp-200h] BYREF

  memset(s, 0, sizeof(s));
  sprintf(s, "if [ -f %s ];then cp %s %s_latest;fi;", a1, a1, a1);
  return system(s);
}
