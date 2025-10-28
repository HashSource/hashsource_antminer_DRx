int __fastcall sub_F204(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r5
  int v6; // r0
  const char *v7; // r0
  char *v8; // r2
  socklen_t len; // [sp+8h] [bp-A0h] BYREF
  struct sockaddr addr; // [sp+Ch] [bp-9Ch] BYREF
  char v11[128]; // [sp+28h] [bp-80h] BYREF

  v2 = socket(a1, 1, 0);
  v3 = v2;
  if ( v2 != -1 )
  {
    if ( a1 != 10 )
    {
LABEL_3:
      v4 = 0;
LABEL_4:
      close(v3);
      return v4;
    }
    len = 28;
    if ( getsockname(v2, &addr, &len) < 0 )
    {
      v8 = "retrieving the address of an IPv6 socket from the kernel failed.";
    }
    else
    {
      if ( len == 28 )
        goto LABEL_3;
      v8 = "IPv6 structures in kernel and user space do not match.";
    }
    v4 = 23;
    sub_122CC(dword_24034, (int)&off_21DF0, (int)&off_21E00, -4, v8);
    sub_122CC(dword_24034, (int)&off_21DF0, (int)&off_21E00, -4, "IPv6 is not supported.");
    goto LABEL_4;
  }
  v6 = *_errno_location();
  if ( v6 == 93 || v6 == 97 || v6 == 22 )
    return 23;
  v4 = 34;
  sub_F7AC(v6);
  v7 = (const char *)sub_F118((_DWORD *)dword_2400C, 1, 101, (int)"failed");
  sub_FF48("./../lib/isc/unix/net.c", 143, "socket() %s: %s", v7, v11);
  return v4;
}
