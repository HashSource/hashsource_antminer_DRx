void sub_1C720()
{
  int v0; // r4
  pthread_t v1; // r0
  int v2; // r0
  int v3; // r5
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v4, "Killing off mining threads");
    sub_38438(7, v4, 1);
  }
  if ( dword_6410C > 0 )
  {
    v0 = 0;
    do
    {
      while ( 1 )
      {
        v2 = sub_1C36C(v0);
        v3 = v2;
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 12) )
            break;
        }
        ++v0;
        sub_2AD04(v2);
        if ( dword_6410C <= v0 )
          return;
      }
      ((void (*)(void))sub_2AD04)();
      v1 = *(_DWORD *)(v3 + 12);
      if ( v1 )
        pthread_join(v1, 0);
      ++v0;
    }
    while ( dword_6410C > v0 );
  }
}
