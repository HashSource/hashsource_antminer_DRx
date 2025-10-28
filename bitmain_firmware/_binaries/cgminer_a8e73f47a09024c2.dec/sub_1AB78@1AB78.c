int __fastcall sub_1AB78(int a1, int a2)
{
  int v2; // s0
  int v3; // s1
  double v6; // d8
  __int64 v7; // r0
  int *v8; // r0
  int v9; // r4
  int *v10; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v6 = dbl_79C58;
  sub_1A840(a2);
  v7 = sub_5EE18(v2, v3);
  *(_QWORD *)(a2 + 288) = v7;
  if ( byte_80A01 )
    v6 = v6 * 65536.0;
  if ( v6 <= sub_5ED20(v7, HIDWORD(v7)) )
  {
    *(_BYTE *)(a2 + 339) = 1;
    ++*(_DWORD *)(*(_DWORD *)(a2 + 316) + 32);
    ++dword_80A60;
    *(_BYTE *)(a2 + 338) = 1;
    if ( byte_7CC61 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
      {
        snprintf(s, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 316));
        sub_3F178(7, s, 0);
      }
    }
  }
  if ( pthread_mutex_lock(&stru_7FE7C) )
  {
    v8 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v8, "cgminer.c", "update_work_stats", 8957);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  dbl_80230 = dbl_80230 + 1.0;
  ++*(_QWORD *)(*(_DWORD *)(a1 + 36) + 192);
  ++*(_QWORD *)(*(_DWORD *)(a2 + 316) + 40);
  v9 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v9 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_7FE7C) )
  {
    v10 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v10,
      "cgminer.c",
      "update_work_stats",
      8962);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  return off_79D40(0);
}
