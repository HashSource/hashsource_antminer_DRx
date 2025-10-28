int sub_1DD78()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r3
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_6FA71 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
    {
      strcpy(v5, "Received kill message");
      sub_343C4(7, v5, 1);
      if ( !byte_6FA71 )
        goto LABEL_8;
      if ( byte_73320 )
      {
LABEL_7:
        strcpy(v5, "Killing off watchpool thread");
        sub_343C4(7, v5, 1);
        goto LABEL_8;
      }
    }
    if ( byte_6FA70 || dword_6D35C > 6 )
      goto LABEL_7;
  }
LABEL_8:
  sub_2D9C8(sub_2A384, dword_735C0 + (dword_6DD40 << 6), 1000);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v5, "Killing off watchdog thread");
    sub_343C4(7, v5, 1);
  }
  sub_2D9C8(sub_2A384, dword_735C0 + (dword_6DD44 << 6), 1000);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v5, "Shutting down mining threads");
    sub_343C4(7, v5, 1);
  }
  if ( dword_735B0 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = v0++;
      v2 = sub_1DD14(v1);
      if ( v2 )
      {
        v3 = *(_DWORD *)(v2 + 36);
        if ( v3 )
          *(_BYTE *)(v3 + 364) = 1;
      }
    }
    while ( v0 < dword_735B0 );
  }
  sleep(1u);
  sub_2D9C8(sub_1DFE8, 0, 3000);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v5, "Killing off API thread");
    sub_343C4(7, v5, 1);
  }
  return sub_2D9C8(sub_2A384, dword_735C0 + (dword_6DB70 << 6), 1000);
}
