int sub_1C3E4()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  int v3; // r2
  int v4; // r3
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_630C1 )
  {
    if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      goto LABEL_31;
    strcpy(v6, "Received kill message");
    sub_38438(7, v6, 1);
    if ( byte_630C1 )
    {
      if ( byte_632F0 || byte_630C0 )
      {
LABEL_7:
        strcpy(v6, "Killing off watchpool thread");
        sub_38438(7, v6, 1);
        goto LABEL_8;
      }
LABEL_31:
      if ( dword_60964 <= 6 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
LABEL_8:
  sub_2F38C(sub_2AD04, dword_636A4 + (dword_61420 << 6), 1000);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v6, "Killing off watchdog thread");
    sub_38438(7, v6, 1);
  }
  sub_2F38C(sub_2AD04, dword_636A4 + (dword_61424 << 6), 1000);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v6, "Shutting down mining threads");
    sub_38438(7, v6, 1);
  }
  if ( dword_6410C > 0 )
  {
    v0 = 0;
    do
    {
      v1 = v0++;
      v2 = sub_1C36C(v1);
      v3 = dword_6410C;
      if ( v2 )
      {
        v4 = *(_DWORD *)(v2 + 36);
        if ( v4 )
          *(_BYTE *)(v4 + 364) = 1;
      }
    }
    while ( v0 < v3 );
  }
  sleep(1u);
  sub_2F38C(sub_1C720, 0, 3000);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v6, "Killing off API thread");
    sub_38438(7, v6, 1);
  }
  return sub_2F38C(sub_2AD04, dword_636A4 + (dword_611A8 << 6), 1000);
}
