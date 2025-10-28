void __fastcall machine_runtime_exit(void *ptr)
{
  if ( ptr )
    free(ptr);
}
