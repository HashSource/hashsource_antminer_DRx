int __fastcall sub_1EC3C(int a1, int a2)
{
  int v2; // s0
  int v3; // s1
  double v6; // d8
  __int64 v7; // r0
  double v8; // d7
  int v9; // r2
  int v10; // r4
  int v12; // r6
  int v13; // r7
  int v14; // r2
  int *v15; // r0
  int *v16; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v6 = dbl_6CA90;
  sub_1E9B0(a2);
  v7 = sub_4A178(v2, v3);
  *(_QWORD *)(a2 + 288) = v7;
  if ( byte_73D04 )
    v6 = v6 * 65536.0;
  if ( sub_4A0AC(v7, HIDWORD(v7)) >= v6 )
  {
    v12 = *(_DWORD *)(a2 + 316);
    *(_BYTE *)(a2 + 339) = 1;
    v13 = (unsigned __int8)byte_6FA71;
    v14 = dword_72F78 + 1;
    ++*(_DWORD *)(v12 + 32);
    dword_72F78 = v14;
    *(_BYTE *)(a2 + 338) = 1;
    if ( v13 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
      {
        snprintf(s, 0x800u, "Found block for pool %d!", **(_DWORD **)(a2 + 316));
        sub_343C4(7, s, 0);
      }
    }
  }
  if ( pthread_mutex_lock(&stru_73A00) )
  {
    v15 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v15, "cgminer.c", "update_work_stats", 8957);
    goto LABEL_13;
  }
  v8 = dbl_73D88 + 1.0;
  ++*(_QWORD *)(*(_DWORD *)(a1 + 36) + 192);
  v9 = *(_DWORD *)(a2 + 316);
  dbl_73D88 = v8;
  ++*(_QWORD *)(v9 + 40);
  v10 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v10 + 232) = time(0);
  if ( pthread_mutex_unlock(&stru_73A00) )
  {
    v16 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v16,
      "cgminer.c",
      "update_work_stats",
      8962);
LABEL_13:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  return off_6CB70();
}
