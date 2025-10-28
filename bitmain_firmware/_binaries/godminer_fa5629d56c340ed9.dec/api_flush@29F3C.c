int *api_flush()
{
  local_work = 0;
  last_getwork = 0;
  new_blocks = 0;
  total_go = 0;
  total_ro = 0;
  dword_196888 = 0;
  total_stale = 0;
  *(_QWORD *)&dword_196898 = 0;
  dbl_196890 = 0.0;
  total_accepted = 0;
  *(_QWORD *)&total_discarded = 0;
  total_rejected = 0;
  *(_QWORD *)&total_getworks = 0;
  total_diff1 = 0;
  total_diff_accepted = 0.0;
  total_diff_rejected = 0.0;
  total_diff_stale = 0.0;
  return (int *)&total_diff1;
}
