void sub_13F9C()
{
  int v0; // r5
  int v1; // r0
  int v2; // r4
  pthread_t v3; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v4, "Killing off mining threads");
    sub_3F1C0(7, v4, 1);
  }
  if ( dword_79CB8 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = sub_13B98(v0);
      v2 = v1;
      if ( v1 && *(_DWORD *)(v1 + 12) )
      {
        sub_349A4(v1);
        if ( v2 != -12 )
        {
          v3 = *(_DWORD *)(v2 + 12);
          if ( v3 )
            pthread_join(v3, 0);
        }
      }
      else
      {
        sub_349A4(v1);
      }
      ++v0;
    }
    while ( dword_79CB8 > v0 );
  }
}
