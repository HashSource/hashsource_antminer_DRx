void sub_13C28()
{
  int v0; // r4
  int v1; // r0
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( !byte_75AA8 )
    return;
  if ( byte_75C09 )
  {
    if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
      goto LABEL_9;
    strcpy(v3, "Received kill message");
    sub_3F1C0(7, v3, 1);
    if ( !byte_75C09 )
      goto LABEL_11;
    if ( !byte_78D98 )
    {
LABEL_9:
      if ( !byte_75C08 && dword_734EC <= 6 )
        goto LABEL_11;
    }
    strcpy(v3, "Killing off watchpool thread");
    sub_3F1C0(7, v3, 1);
  }
LABEL_11:
  sub_EA30(dword_7914C + (dword_73DE8 << 6));
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v3, "Killing off watchdog thread");
    sub_3F1C0(7, v3, 1);
  }
  sub_EA30(dword_7914C + (dword_73DEC << 6));
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v3, "Shutting down mining threads");
    sub_3F1C0(7, v3, 1);
  }
  if ( dword_79CB8 > 0 )
  {
    v0 = 0;
    do
    {
      v1 = sub_13B98(v0);
      if ( v1 )
      {
        v2 = *(_DWORD *)(v1 + 36);
        if ( v2 )
          *(_BYTE *)(v2 + 364) = 1;
      }
      ++v0;
    }
    while ( dword_79CB8 > v0 );
  }
  sleep(1u);
  sub_349D4(sub_13F9C, 0, 3000);
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v3, "Killing off API thread");
    sub_3F1C0(7, v3, 1);
  }
  sub_EA30(dword_7914C + (dword_73AE8 << 6));
}
