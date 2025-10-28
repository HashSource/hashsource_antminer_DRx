int __fastcall sub_ECD0(const char *a1, __int16 a2)
{
  unsigned __int8 v2; // r4
  size_t v4; // r0
  char v6; // [sp+6h] [bp-2h] BYREF
  unsigned __int8 v7; // [sp+7h] [bp-1h] BYREF

  v2 = a2;
  v6 = HIBYTE(a2);
  printf("body_len1=%d\n", HIBYTE(a2));
  v7 = v2;
  printf("body_len2=%d\n", v2);
  dword_26F90 = off_1D43C(dword_26F98, dword_258BC, "00", 2);
  if ( dword_26F90 == -1 )
  {
    perror("send head");
    exit(1);
  }
  v4 = strlen(a1);
  dword_26F90 = off_1D43C(dword_26F98, dword_258BC, a1, v4);
  if ( dword_26F90 == -1
    || (dword_26F90 = off_1D43C(dword_26F98, dword_258BC, &v6, 1), dword_26F90 == -1)
    || (dword_26F90 = off_1D43C(dword_26F98, dword_258BC, &v7, 1), dword_26F90 == -1) )
  {
    perror("send");
    exit(1);
  }
  return 1;
}
