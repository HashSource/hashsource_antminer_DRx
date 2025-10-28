void sub_13E08()
{
  int v0; // r4
  int v1; // r0
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !byte_7CB00 )
    return;
  if ( byte_7CC61 )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 6 )
      goto LABEL_9;
    strcpy(v3, "Received kill message");
    sub_3F178(7, v3, 1);
    if ( !byte_7CC61 )
      goto LABEL_11;
    if ( !byte_7FE78 )
    {
LABEL_9:
      if ( !byte_7CC60 && dword_7A52C <= 6 )
        goto LABEL_11;
    }
    strcpy(v3, "Killing off watchpool thread");
    sub_3F178(7, v3, 1);
  }
LABEL_11:
  sub_EBF8(dword_8022C + (dword_7AE48 << 6));
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(v3, "Killing off watchdog thread");
    sub_3F178(7, v3, 1);
  }
  sub_EBF8(dword_8022C + (dword_7AE4C << 6));
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(v3, "Shutting down mining threads");
    sub_3F178(7, v3, 1);
  }
  if ( dword_80D98 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = sub_13D78(v0);
      if ( v1 )
      {
        v2 = *(_DWORD *)(v1 + 36);
        if ( v2 )
          *(_BYTE *)(v2 + 364) = 1;
      }
      ++v0;
    }
    while ( dword_80D98 > v0 );
  }
  sleep(1u);
  sub_34A54(sub_1417C, 0, 3000);
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(v3, "Killing off API thread");
    sub_3F178(7, v3, 1);
  }
  sub_EBF8(dword_8022C + (dword_7AB48 << 6));
}
