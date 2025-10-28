void __fastcall json_delete(_DWORD *a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  unsigned int i; // r5
  _DWORD *v5; // r3
  unsigned int *v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1

  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        hashtable_close((int)(a1 + 2));
        jsonp_free(a1);
        return;
      case 1:
        v3 = a1[3];
        v2 = (_DWORD *)a1[4];
        if ( v3 )
        {
          for ( i = 0; i < v3; ++i )
          {
            v5 = (_DWORD *)v2[i];
            if ( v5 )
            {
              v6 = v5 + 1;
              if ( v5[1] != -1 )
              {
                __dmb(0xBu);
                do
                {
                  v7 = __ldrex(v6);
                  v8 = v7 - 1;
                }
                while ( __strex(v8, v6) );
                if ( !v8 )
                  json_delete(v5);
                v2 = (_DWORD *)a1[4];
                v3 = a1[3];
              }
            }
          }
        }
        goto LABEL_4;
      case 2:
        v2 = (_DWORD *)a1[2];
LABEL_4:
        jsonp_free(v2);
        goto LABEL_5;
      case 3:
      case 4:
LABEL_5:
        jsonp_free(a1);
        break;
      default:
        return;
    }
  }
}
