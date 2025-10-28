int __fastcall sub_14AE4(int result, unsigned __int16 *a2)
{
  int v3; // r3
  int v4; // r1
  int v5; // r4
  int v6; // r6
  const char *v7; // r4
  const char *v8; // r0
  int optval; // [sp+Ch] [bp-4h] BYREF

  v3 = *(unsigned __int16 *)(result + 20);
  v4 = *a2;
  v5 = result;
  optval = 0;
  if ( v4 != v3 )
    off_7C9FC("ntp_io.c", 2389, 0, "((maddr)->sa.sa_family) == ((&iface->sin)->sa.sa_family)");
  if ( v3 == 2 )
  {
    result = setsockopt(*(_DWORD *)(result + 8), 0, 34, &optval, 4u);
    if ( result )
    {
LABEL_7:
      v6 = *(_DWORD *)(v5 + 8);
      v7 = (const char *)sub_50CD0(v5 + 20);
      v8 = (const char *)sub_50CD0(a2);
      return sub_4FE78(
               3,
               "setsockopt IP_MULTICAST_LOOP failed: %m on socket %d, addr %s for multicast address %s",
               v6,
               v7,
               v8);
    }
  }
  else if ( v3 == 10 )
  {
    result = setsockopt(*(_DWORD *)(result + 8), 41, 19, &optval, 4u);
    if ( result )
      goto LABEL_7;
  }
  return result;
}
