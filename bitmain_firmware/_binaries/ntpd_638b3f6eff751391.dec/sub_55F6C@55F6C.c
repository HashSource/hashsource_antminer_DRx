int sub_55F6C()
{
  int v0; // r4
  int v2; // r0
  int v3; // r7
  int v4; // r0
  int *v5; // r0
  const char *v6; // r0
  int *v7; // r0
  const char *v8; // r0
  int v9; // [sp+Ch] [bp-84h] BYREF
  char v10[128]; // [sp+10h] [bp-80h] BYREF

  if ( !dword_C9C64 )
  {
    sub_55EE8();
    v0 = dword_7CA54;
    if ( dword_7CA54 )
    {
      dword_7CA58 = dword_7CA54;
LABEL_7:
      dword_C9C64 = 1;
      return v0;
    }
    v2 = socket(10, 1, 0);
    v3 = v2;
    if ( v2 == -1 )
    {
      v5 = _errno_location();
      sub_57070(*v5);
      v6 = sub_55CA4((_DWORD *)dword_C9C48, 1, 101, "failed");
      sub_5166C("./../lib/isc/unix/net.c", 265, "socket() %s: %s", v6, v10);
    }
    else
    {
      v9 = 1;
      if ( setsockopt(v2, 41, 26, &v9, 4u) < 0 )
        goto LABEL_13;
      close(v3);
      v4 = socket(10, 2, 0);
      v3 = v4;
      if ( v4 != -1 )
      {
        v9 = 1;
        if ( setsockopt(v4, 41, 26, &v9, 4u) >= 0 )
        {
          close(v3);
          dword_7CA58 = 0;
LABEL_14:
          close(v3);
          v0 = dword_7CA58;
          goto LABEL_7;
        }
LABEL_13:
        dword_7CA58 = 23;
        goto LABEL_14;
      }
      v7 = _errno_location();
      sub_57070(*v7);
      v8 = sub_55CA4((_DWORD *)dword_C9C48, 1, 101, "failed");
      sub_5166C("./../lib/isc/unix/net.c", 288, "socket() %s: %s", v8, v10);
    }
    v0 = 34;
    dword_7CA58 = 34;
    goto LABEL_7;
  }
  return dword_7CA58;
}
