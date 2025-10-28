int *sub_D0F8()
{
  int *v0; // r6
  _DWORD *v1; // r3
  _DWORD *v2; // t1
  unsigned int v3; // r2
  _DWORD *v4; // r4
  int *result; // r0

  v0 = &dword_240B8;
  do
  {
    v2 = (_DWORD *)v0[1];
    ++v0;
    v1 = v2;
    if ( v2 )
    {
      do
      {
        while ( 1 )
        {
          v3 = v1[20];
          v4 = (_DWORD *)*v1;
          if ( v3 )
          {
            if ( v3 < dword_21F94 )
              break;
          }
          v1 = (_DWORD *)*v1;
          if ( !v4 )
            goto LABEL_8;
        }
        result = sub_CBE4(v1[17], 0);
        ++dword_24094;
        v1 = v4;
      }
      while ( v4 );
    }
LABEL_8:
    ;
  }
  while ( v0 != &dword_240BC[63] );
  if ( dword_21F80 )
    return (int *)printf("auth_agekeys: at %lu keys %lu expired %lu\n", dword_21F94, dword_240AC, dword_24094);
  return result;
}
