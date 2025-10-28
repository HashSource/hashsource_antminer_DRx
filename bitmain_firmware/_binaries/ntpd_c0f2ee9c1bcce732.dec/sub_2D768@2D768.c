void sub_2D768()
{
  if ( dword_CB57C )
  {
    free((void *)dword_CB57C);
    free((void *)dword_7FFF0);
    dword_7FFF0 = 0;
    dword_CB57C = 0;
  }
  if ( dword_7FFF4 )
  {
    free((void *)dword_7FFF4);
    dword_7FFF4 = 0;
  }
  sub_1E458("peerstats");
  sub_1E458("loopstats");
  sub_1E458("clockstats");
  sub_1E458("rawstats");
  sub_1E458("sysstats");
  sub_1E458("protostats");
}
