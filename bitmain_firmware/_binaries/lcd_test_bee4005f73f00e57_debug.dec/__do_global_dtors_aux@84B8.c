char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_TMC_END__ )
  {
    result = deregister_tm_clones();
    _TMC_END__ = 1;
  }
  return result;
}
