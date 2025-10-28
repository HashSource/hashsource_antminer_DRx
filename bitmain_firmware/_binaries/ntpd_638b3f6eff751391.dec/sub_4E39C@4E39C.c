int *sub_4E39C()
{
  int *v0; // r6
  _DWORD *v1; // r3
  _DWORD *v2; // t1
  unsigned int v3; // r2
  _DWORD *v4; // r4
  int *result; // r0

  v0 = &dword_CB750;
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
            if ( v3 < dword_CB548 )
              break;
          }
          v1 = (_DWORD *)*v1;
          if ( !v4 )
            goto LABEL_8;
        }
        result = sub_4DE88(v1[17], 0);
        ++dword_CB72C;
        v1 = v4;
      }
      while ( v4 );
    }
LABEL_8:
    ;
  }
  while ( v0 != &dword_CB754[63] );
  if ( dword_7CF4C )
    return (int *)printf("auth_agekeys: at %lu keys %lu expired %lu\n", dword_CB548, dword_CB744, dword_CB72C);
  return result;
}
