int *_do_global_dtors_aux()
{
  int *result; // r0

  if ( !completed_8605 )
  {
    result = deregister_tm_clones();
    completed_8605 = 1;
  }
  return result;
}
