void sub_1DFE8()
{
  int i; // r4
  int v1; // r0
  int v2; // r5
  pthread_t v3; // r0
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v4, "Killing off mining threads");
    sub_343C4(7, v4, 1);
  }
  if ( dword_735B0 > 0 )
  {
    for ( i = 0; dword_735B0 > i; ++i )
    {
      while ( 1 )
      {
        v1 = sub_1DD14(i);
        v2 = v1;
        if ( v1 )
        {
          if ( *(_DWORD *)(v1 + 12) )
            break;
        }
        sub_2A384();
LABEL_8:
        if ( dword_735B0 <= ++i )
          return;
      }
      sub_2A384();
      v3 = *(_DWORD *)(v2 + 12);
      if ( !v3 )
        goto LABEL_8;
      pthread_join(v3, 0);
    }
  }
}
