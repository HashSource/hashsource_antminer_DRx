int *__fastcall sub_20DFC(int *result)
{
  _DWORD *i; // r3
  int v2; // r2
  _DWORD *v3; // r1
  _DWORD *v4; // r2

  if ( dword_CAC24 )
  {
    if ( ((unsigned int)result & dword_CAC24) != 0 )
    {
      dword_CAC24 &= ~(unsigned int)result;
      if ( !dword_CAC24 )
      {
        i = (_DWORD *)dword_7D928;
        result = dword_7D728;
        do
        {
          v2 = *result;
          *result++ = 0;
          if ( v2 )
          {
            v3 = i;
            for ( i = (_DWORD *)v2; ; i = v4 )
            {
              v4 = (_DWORD *)*i;
              *i = v3;
              v3 = i;
              if ( !v4 )
                break;
            }
          }
        }
        while ( result != &dword_7D928 );
        dword_7D928 = (int)i;
        dword_CABE0 = (int)&unk_CABDC;
        dword_CABE4 = (int)&unk_CABDC;
      }
    }
  }
  return result;
}
