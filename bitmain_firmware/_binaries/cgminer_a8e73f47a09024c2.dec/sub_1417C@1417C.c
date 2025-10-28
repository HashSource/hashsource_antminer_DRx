void sub_1417C()
{
  int v0; // r5
  int v1; // r0
  int v2; // r4
  pthread_t v3; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(v4, "Killing off mining threads");
    sub_3F178(7, v4, 1);
  }
  if ( dword_80D98 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = sub_13D78(v0);
      v2 = v1;
      if ( v1 && *(_DWORD *)(v1 + 12) )
      {
        sub_34A24(v1);
        if ( v2 != -12 )
        {
          v3 = *(_DWORD *)(v2 + 12);
          if ( v3 )
            pthread_join(v3, 0);
        }
      }
      else
      {
        sub_34A24(v1);
      }
      ++v0;
    }
    while ( dword_80D98 > v0 );
  }
}
