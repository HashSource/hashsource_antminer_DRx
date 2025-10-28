char *__fastcall sub_50DC4(int a1, int *a2)
{
  int v2; // r3
  int v3; // t1

  v2 = *a2;
  if ( *a2 == -1 )
  {
LABEL_6:
    snprintf(byte_C9C10, 0x1Eu, "%s_%d", (const char *)a2[1], a1);
    return byte_C9C10;
  }
  else
  {
    while ( v2 != a1 )
    {
      v3 = a2[2];
      a2 += 2;
      v2 = v3;
      if ( v3 == -1 )
        goto LABEL_6;
    }
    return (char *)a2[1];
  }
}
