int __fastcall sub_1A998(int a1, int a2)
{
  int v2; // s0
  int v3; // s1
  double v6; // d8
  __int64 v7; // r0
  int *v8; // r0
  int v9; // r4
  int *v10; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v6 = dbl_72C18;
  sub_1A660(a2);
  v7 = sub_5A4E8(v2, v3);
  *(_QWORD *)(a2 + 288) = v7;
  if ( byte_79921 )
    v6 = v6 * 65536.0;
  if ( v6 <= sub_5A3F0(v7, HIDWORD(v7)) )
  {
    *(_BYTE *)(a2 + 339) = 1;
    ++*(_DWORD *)(*(_DWORD *)(a2 + 316) + 32);
    ++dword_79980;
    *(_BYTE *)(a2 + 338) = 1;
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        snprintf(s, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 316));
        sub_3F1C0(7, s, 0);
      }
    }
  }
  if ( pthread_mutex_lock(&stru_78D9C) )
  {
    v8 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v8, "cgminer.c", "update_work_stats", 8982);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  dbl_79150 = dbl_79150 + 1.0;
  ++*(_QWORD *)(*(_DWORD *)(a1 + 36) + 192);
  ++*(_QWORD *)(*(_DWORD *)(a2 + 316) + 40);
  v9 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v9 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_78D9C) )
  {
    v10 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v10,
      "cgminer.c",
      "update_work_stats",
      8987);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  return off_72D00(0);
}
