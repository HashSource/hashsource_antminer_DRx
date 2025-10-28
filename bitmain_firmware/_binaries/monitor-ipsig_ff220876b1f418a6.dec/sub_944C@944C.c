int __fastcall sub_944C(const void *a1)
{
  int v1; // r3

  if ( sendto(dword_11E0C, a1, 0xAu, 0, (const struct sockaddr *)&word_11E4C, 0x10u) >= 0 )
    printf("send ack OK!\n ");
  else
    printf("send error....");
  return v1;
}
