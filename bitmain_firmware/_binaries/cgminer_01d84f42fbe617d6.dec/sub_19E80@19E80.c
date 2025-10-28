unsigned __int64 __fastcall sub_19E80(int a1)
{
  double v1; // d9
  __int64 v3; // r0
  double v4; // d8
  double v5; // d8
  double v6; // d8
  double v7; // d0
  unsigned __int64 v8; // r4
  int v9; // r7
  int v10; // r1
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v1 = 1.7668201e72;
  v3 = *(_QWORD *)(a1 + 216);
  if ( !byte_63DF9 )
    v1 = 2.69595353e67;
  v4 = sub_493C8(v3) * 6.27710174e57;
  v5 = v4 + sub_493C8(*(_DWORD *)(a1 + 208)) * 3.40282367e38;
  v6 = v5 + sub_493C8(*(_DWORD *)(a1 + 200)) * 1.84467441e19;
  v7 = v6 + sub_493C8(*(_DWORD *)(a1 + 192));
  if ( v7 == 0.0 )
    v7 = 0.0;
  round();
  v8 = sub_494C0(COERCE_UNSIGNED_INT64(v1 / v7), HIDWORD(COERCE_UNSIGNED_INT64(v1 / v7)));
  if ( pthread_mutex_lock(&stru_63FB0) )
    sub_B4E4("share_diff", 4968);
  if ( pthread_rwlock_wrlock(&stru_63FC8) )
    sub_B550("share_diff", 4968);
  if ( qword_611C8 < v8 )
  {
    v9 = 1;
    qword_611C8 = v8;
    sub_11130(v8, (char *)&dword_60064, 8u, 0);
  }
  else
  {
    v9 = 0;
  }
  v10 = *(_DWORD *)(a1 + 260);
  if ( *(_QWORD *)(v10 + 368) < v8 )
    *(_QWORD *)(v10 + 368) = v8;
  if ( pthread_rwlock_unlock(&stru_63FC8) )
    sub_B700("share_diff", 4977);
  if ( pthread_mutex_unlock(&stru_63FB0) )
    sub_B694("share_diff", 4977);
  off_60178();
  if ( v9 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "New best share: %s", (const char *)&dword_60064);
    sub_38438(7, s, 0);
  }
  return v8;
}
