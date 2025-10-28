int __fastcall sub_1A660(int a1)
{
  double v1; // d0
  double v3; // d8
  double v4; // r0
  double v5; // d0
  int *v6; // r0
  int *v7; // r0
  int v8; // r5
  int v9; // r4
  int *v10; // r0
  int *v11; // r0
  int result; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v3 = 1.7668201e72;
  if ( !byte_79921 )
    v3 = 2.69595353e67;
  v4 = sub_BF0C((_DWORD *)(a1 + 244));
  if ( v1 == 0.0 )
    v1 = 0.0;
  round(LODWORD(v4), HIDWORD(v4));
  v5 = v3 / v1;
  if ( pthread_mutex_lock(&stru_79AD8) )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "cgminer.c", "share_diff", 5327);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( pthread_rwlock_wrlock(&rwlock) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "cgminer.c", "share_diff", 5327);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( v5 > sub_5A3F0(LODWORD(dbl_73D08), HIDWORD(dbl_73D08)) )
  {
    *(_QWORD *)&dbl_73D08 = sub_5A4E8(LODWORD(v5), HIDWORD(v5));
    sub_DF7C(*(unsigned __int64 *)&dbl_73D08, (char *)&dword_72BE8, 8u, 0);
    v8 = 1;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_DWORD *)(a1 + 316);
  if ( v5 > sub_5A3F0(*(_DWORD *)(v9 + 376), *(_DWORD *)(v9 + 380)) )
    *(_QWORD *)(v9 + 376) = sub_5A4E8(LODWORD(v5), HIDWORD(v5));
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v10 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v10, "cgminer.c", "share_diff", 5336);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( pthread_mutex_unlock(&stru_79AD8) )
  {
    v11 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v11, "cgminer.c", "share_diff", 5336);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  result = off_72D00(0);
  if ( v8 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "New best share: %s", (const char *)&dword_72BE8);
    return sub_3F1C0(7, s, 0);
  }
  return result;
}
