char *__fastcall sub_B91C(char *s2)
{
  int v2; // r6
  int v3; // r4

  v2 = dword_1B3A0;
  if ( dword_1B3A0 <= 0 )
  {
LABEL_6:
    memset(byte_24490, 0, sizeof(byte_24490));
    dword_1B3A0 = 0;
    printf("get %s failed\n", s2);
    return 0;
  }
  else
  {
    v3 = 0;
    while ( strcasecmp(&byte_24490[129 * v3], s2) )
    {
      if ( ++v3 == v2 )
        goto LABEL_6;
    }
    dword_1B3A0 = 0;
    memset(byte_24490, 0, sizeof(byte_24490));
    return &byte_1F468[513 * v3];
  }
}
