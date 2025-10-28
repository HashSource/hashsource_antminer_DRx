int __fastcall sub_2EE78(char *a1, size_t a2, int a3)
{
  if ( freq_scan_status == 1 )
  {
    snprintf(a1, a2, "%d", a3);
    return 0;
  }
  else
  {
    if ( freq_scan_status == 2 )
      snprintf(a1, a2, "%s:%s", "searchfailed", (const char *)search_failed_info);
    else
      snprintf(a1, a2, "searching", a3);
    return 0;
  }
}
