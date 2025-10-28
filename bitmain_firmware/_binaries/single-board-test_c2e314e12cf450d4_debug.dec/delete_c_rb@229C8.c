int __fastcall delete_c_rb(void ****a1)
{
  void ***ptr; // [sp+Ch] [bp+Ch]

  ptr = *a1;
  while ( a1 + 1 != (void ****)ptr )
  {
    if ( *ptr == (void **)(a1 + 1) )
    {
      if ( ptr[1] == (void **)(a1 + 1) )
      {
        _delete_c_rb_node((int)a1, (int)ptr);
        if ( ptr[2] )
        {
          ptr = (void ***)ptr[2];
          if ( *ptr == (void **)(a1 + 1) )
          {
            if ( ptr[1] != (void **)(a1 + 1) )
            {
              free(ptr[1]);
              ptr[1] = (void **)(a1 + 1);
            }
          }
          else
          {
            free(*ptr);
            *ptr = (void **)(a1 + 1);
          }
        }
        else
        {
          free(ptr);
          ptr = (void ***)(a1 + 1);
        }
      }
      else
      {
        ptr = (void ***)ptr[1];
      }
    }
    else
    {
      ptr = (void ***)*ptr;
    }
  }
  free(a1);
  return 0;
}
