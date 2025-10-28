int __fastcall sub_1E9B0(int a1)
{
  double v2; // d9
  __int64 v3; // r0
  double v4; // d8
  double v5; // d8
  double v6; // d8
  double v7; // d0
  double v8; // d0
  int v9; // r7
  int v10; // r4
  int result; // r0
  int *v12; // r0
  int *v13; // r0
  int *v14; // r0
  int *v15; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v2 = 2.69595353e67;
  v3 = *(_QWORD *)(a1 + 268);
  if ( byte_73D04 )
    v2 = 1.7668201e72;
  v4 = sub_4A0AC(v3, HIDWORD(v3)) * 6.27710174e57;
  v5 = v4 + sub_4A0AC(*(_DWORD *)(a1 + 260), *(_DWORD *)(a1 + 264)) * 3.40282367e38;
  v6 = v5 + sub_4A0AC(*(_DWORD *)(a1 + 252), *(_DWORD *)(a1 + 256)) * 1.84467441e19;
  v7 = sub_4A0AC(*(_DWORD *)(a1 + 244), *(_DWORD *)(a1 + 248)) + v6;
  if ( v7 == 0.0 )
    v7 = 0.0;
  round();
  v8 = v2 / v7;
  if ( pthread_mutex_lock(&stru_73460) )
  {
    v12 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v12, "cgminer.c", "share_diff", 5329);
    goto LABEL_17;
  }
  if ( pthread_rwlock_wrlock(&rwlock) )
  {
    v13 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v13, "cgminer.c", "share_diff", 5329);
    goto LABEL_17;
  }
  if ( sub_4A0AC(dword_6DBA8, dword_6DBAC) < v8 )
  {
    v9 = 1;
    *(_QWORD *)&dword_6DBA8 = sub_4A178(LODWORD(v8), HIDWORD(v8));
    sub_16DA4(*(unsigned __int64 *)&dword_6DBA8, dword_6CA70, 8u, 0);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_DWORD *)(a1 + 316);
  if ( sub_4A0AC(*(_DWORD *)(v10 + 376), *(_DWORD *)(v10 + 380)) < v8 )
    *(_QWORD *)(v10 + 376) = sub_4A178(LODWORD(v8), HIDWORD(v8));
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v14 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v14, "cgminer.c", "share_diff", 5338);
    goto LABEL_17;
  }
  if ( pthread_mutex_unlock(&stru_73460) )
  {
    v15 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v15, "cgminer.c", "share_diff", 5338);
LABEL_17:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  result = off_6CB70();
  if ( v9 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "New best share: %s", dword_6CA70);
    return sub_343C4(7, s, 0);
  }
  return result;
}
