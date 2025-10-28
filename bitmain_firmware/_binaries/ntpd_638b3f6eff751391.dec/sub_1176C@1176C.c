int __fastcall sub_1176C(int a1, const char *a2, int a3)
{
  unsigned __int8 *v4; // r5
  int v6; // r9
  int v8; // r11
  int v9; // r10
  const char *v10; // r0
  const char *v11; // r1
  int result; // r0
  const char *v13; // r0
  const char *v14; // r0
  const char *v15; // r0
  const char *v16; // r0
  const char *v17; // r0
  int v18; // [sp+18h] [bp-Ch]
  int v19; // [sp+1Ch] [bp-8h]

  v4 = (unsigned __int8 *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 140);
  v9 = *(_DWORD *)(a1 + 172);
  v19 = *(_DWORD *)(a1 + 16);
  v18 = *(_DWORD *)(a1 + 12);
  v10 = (const char *)sub_50CD0(a1 + 20);
  printf(
    "%sinterface #%d: fd=%d, bfd=%d, name=%s, flags=0x%x, ifindex=%u, sin=%s",
    a2,
    v19,
    v6,
    v18,
    (const char *)(a1 + 104),
    v8,
    v9,
    v10);
  if ( *(_WORD *)(a1 + 136) == 2 )
  {
    if ( (*(_DWORD *)(a1 + 140) & 8) != 0 )
    {
      v17 = (const char *)sub_50CD0(a1 + 76);
      printf(", bcast=%s", v17);
    }
    v16 = (const char *)sub_50CD0(a1 + 48);
    printf(", mask=%s", v16);
  }
  v11 = "Enabled";
  if ( *(_DWORD *)(a1 + 176) )
    v11 = "Disabled";
  result = printf(", %s:%s", v11, a3);
  if ( dword_7CF4C > 4 )
  {
    printf("Dumping interface: %p\n", (const void *)a1);
    printf("fd = %d\n", *(_DWORD *)(a1 + 8));
    printf("bfd = %d\n", *(_DWORD *)(a1 + 12));
    v13 = (const char *)sub_50CD0(v4);
    printf("sin = %s,\n", v13);
    sub_11704(v4);
    v14 = (const char *)sub_50CD0(a1 + 76);
    printf("bcast = %s,\n", v14);
    sub_11704((unsigned __int8 *)(a1 + 76));
    v15 = (const char *)sub_50CD0(a1 + 48);
    printf("mask = %s,\n", v15);
    sub_11704((unsigned __int8 *)(a1 + 48));
    printf("name = %s\n", (const char *)(a1 + 104));
    printf("flags = 0x%08x\n", *(_DWORD *)(a1 + 140));
    printf("last_ttl = %d\n", *(_DWORD *)(a1 + 144));
    printf("addr_refid = %08x\n", *(_DWORD *)(a1 + 148));
    printf("num_mcast = %d\n", *(_DWORD *)(a1 + 152));
    printf("received = %ld\n", *(_DWORD *)(a1 + 160));
    printf("sent = %ld\n", *(_DWORD *)(a1 + 164));
    printf("notsent = %ld\n", *(_DWORD *)(a1 + 168));
    printf("ifindex = %u\n", *(_DWORD *)(a1 + 172));
    printf("peercnt = %u\n", *(_DWORD *)(a1 + 184));
    return printf("phase = %u\n", *(unsigned __int16 *)(a1 + 138));
  }
  return result;
}
