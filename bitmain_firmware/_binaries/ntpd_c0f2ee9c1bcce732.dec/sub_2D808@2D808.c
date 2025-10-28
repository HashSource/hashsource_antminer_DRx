int sub_2D808()
{
  dword_CB57C = 0;
  dword_7FFF0 = 0;
  dword_7FFF4 = 0;
  sub_1E328((int)aVarNtp, "peerstats", &dword_7FFF8);
  sub_1E328((int)aVarNtp, "loopstats", &dword_8000C);
  sub_1E328((int)aVarNtp, "clockstats", &dword_80020);
  sub_1E328((int)aVarNtp, "rawstats", &dword_80034);
  sub_1E328((int)aVarNtp, "sysstats", &dword_80048);
  sub_1E328((int)aVarNtp, "protostats", &dword_8005C);
  return sub_5B388(186216);
}
