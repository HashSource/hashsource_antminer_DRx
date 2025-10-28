_BYTE *__fastcall sub_E1F8(_BYTE *a1)
{
  char v2; // r0
  char v4[8]; // [sp+0h] [bp-10h] BYREF
  struct timeval tv; // [sp+8h] [bp-8h] BYREF

  gettimeofday(&tv, 0);
  sprintf(v4, "%ld", tv.tv_usec);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v2 = strlen(v4);
  if ( 6 != v2 )
    memset(a1, 48, (unsigned __int8)(6 - v2));
  strcat(a1, v4);
  return a1;
}
