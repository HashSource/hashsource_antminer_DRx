int *sub_9F7C()
{
  int *v0; // r4
  unsigned int v1; // r3
  int *result; // r0

  v0 = (int *)dword_24074;
  ++dword_21F94;
  if ( dword_24074 )
  {
    do
    {
      while ( 1 )
      {
        v1 = v0[15];
        if ( v1 )
        {
          if ( v1 <= dword_21F94 )
            break;
        }
        v0 = (int *)*v0;
        if ( !v0 )
          return result;
      }
      result = sub_9D08(v0);
      v0 = (int *)*v0;
    }
    while ( v0 );
  }
  return result;
}
