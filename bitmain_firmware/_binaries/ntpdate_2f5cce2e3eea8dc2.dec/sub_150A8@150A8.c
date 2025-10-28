int __fastcall sub_150A8(const char *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // r2
  int *v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  struct timeval v11; // [sp+0h] [bp-14h] BYREF
  __time_t v12; // [sp+8h] [bp-Ch]
  __suseconds_t v13; // [sp+Ch] [bp-8h]

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = !v2;
  if ( v2 )
    off_21DCC("./../lib/isc/unix/file.c", 123, v3, "file != ((void *)0) && time != ((void *)0)");
  v12 = sub_143B8(a2);
  v11.tv_sec = v12;
  if ( v12 < 0 )
    return 41;
  v13 = sub_144B8((int)a2) / 0x3E8;
  v11.tv_usec = v13;
  if ( utimes(a1, &v11) >= 0 )
    return 0;
  v7 = _errno_location();
  return sub_14CC8((char *)*v7, v8, v9, v10);
}
