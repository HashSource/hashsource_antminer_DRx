unsigned int __fastcall sub_9EF0(
        unsigned int result,
        const char *a2,
        int a3,
        const char *a4,
        const char *a5,
        const char *a6,
        const char *a7)
{
  struct msghdr message; // [sp+10h] [bp-844h] BYREF
  char *v8; // [sp+2Ch] [bp-828h] BYREF
  size_t v9; // [sp+30h] [bp-824h]
  const char *v10; // [sp+34h] [bp-820h]
  int v11; // [sp+38h] [bp-81Ch]
  const char *v12; // [sp+3Ch] [bp-818h]
  size_t v13; // [sp+40h] [bp-814h]
  char *v14; // [sp+44h] [bp-810h]
  int v15; // [sp+48h] [bp-80Ch]
  char v16[2048]; // [sp+4Ch] [bp-808h] BYREF

  message.msg_namelen = 0;
  v11 = 0;
  message.msg_iov = 0;
  if ( dword_16010 < 0 )
    result = 0;
  v12 = 0;
  memset(&message.msg_iovlen, 0, 16);
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  message.msg_name = 0;
  if ( dword_16010 >= 0 )
  {
    sub_9D04((int)v16, result, a2, a3, a4, a5, a6);
    v8 = v16;
    v12 = a7;
    v11 = 8;
    v10 = "MESSAGE=";
    v9 = strlen(v16);
    v15 = 1;
    message.msg_iov = (struct iovec *)&v8;
    v14 = "\n";
    message.msg_iovlen = 4;
    v13 = strlen(a7);
    if ( sendmsg(dword_16010, &message, 0x4000) < 0 )
      return -*_errno_location();
    else
      return 1;
  }
  return result;
}
