void __fastcall sub_5C394(void **a1)
{
  void *v2; // r3
  unsigned int v3; // r5
  int v4; // r0
  int v5; // r3
  int v6; // r3

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      if ( v2 == (void *)1 )
      {
        if ( a1[3] )
        {
          v3 = 0;
          do
          {
            v4 = *((_DWORD *)a1[4] + v3);
            if ( v4 )
            {
              v5 = *(_DWORD *)(v4 + 4);
              if ( v5 != -1 )
              {
                v6 = v5 - 1;
                *(_DWORD *)(v4 + 4) = v6;
                if ( !v6 )
                  sub_5C394(v4);
              }
            }
            ++v3;
          }
          while ( v3 < (unsigned int)a1[3] );
        }
        sub_5B2D0(a1[4]);
        sub_5B2D0(a1);
      }
      else if ( v2 == (void *)2 )
      {
        sub_5B2D0(a1[2]);
        sub_5B2D0(a1);
      }
      else if ( v2 == (void *)3 || v2 == (void *)4 )
      {
        sub_5B2D0(a1);
      }
    }
    else
    {
      sub_596A0((int)(a1 + 2));
      sub_5B2D0(a1);
    }
  }
}
