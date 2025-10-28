int __fastcall sub_2282C(int a1, int a2)
{
  int v5; // r7
  int v6; // r8
  int v7; // r2
  int v8; // r3
  int v9; // r7
  const char *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // lr
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r9
  int v23; // [sp+0h] [bp-808h] BYREF
  _DWORD v24[10]; // [sp+8h] [bp-800h] BYREF
  __int16 v25; // [sp+30h] [bp-7D8h]

  if ( byte_615C9 || dword_612AC )
    return 0;
  if ( *(_DWORD *)(a1 + 336) != dword_6136C )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy((char *)v24, "Work stale due to block mismatch");
      sub_38438(7, v24, 0);
      return 1;
    }
    return 1;
  }
  v5 = *(_DWORD *)(a1 + 276);
  v6 = *(_DWORD *)(a1 + 260);
  v7 = dword_60090;
  if ( v5 <= dword_60090 )
    v5 = dword_60094;
  if ( !a2 && *(_BYTE *)(v6 + 632) )
  {
    if ( !*(_BYTE *)(v6 + 633) || !*(_BYTE *)(v6 + 635) )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        strcpy((char *)v24, "Work stale due to stratum inactive");
        sub_38438(7, v24, 0);
        return 1;
      }
      return 1;
    }
    if ( pthread_mutex_lock((pthread_mutex_t *)(v6 + 212)) )
      sub_B4E4("stale_work", 4917);
    if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v6 + 236)) )
      sub_B76C("stale_work", 4917);
    if ( pthread_mutex_unlock((pthread_mutex_t *)(v6 + 212)) )
      sub_B694("stale_work", 4917);
    v22 = strcmp(*(const char **)(a1 + 288), *(const char **)(v6 + 640));
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v6 + 236)) )
      sub_B700("stale_work", 4920);
    off_60178();
    if ( v22 )
    {
      if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
        return 1;
      v10 = "Work stale due to stratum job_id mismatch";
LABEL_42:
      v11 = *(_DWORD *)v10;
      v12 = *((_DWORD *)v10 + 1);
      v13 = *((_DWORD *)v10 + 2);
      v14 = *((_DWORD *)v10 + 3);
      v15 = (int *)(v10 + 16);
      v24[0] = v11;
      v24[1] = v12;
      v24[2] = v13;
      v24[3] = v14;
      v16 = *v15;
      v17 = v15[1];
      v18 = v15[2];
      v19 = v15[3];
      v15 += 4;
      v24[4] = v16;
      v24[5] = v17;
      v24[6] = v18;
      v24[7] = v19;
      v20 = v15[1];
      v21 = v15[2];
      v24[8] = *v15;
      v24[9] = v20;
      v25 = v21;
      sub_38438(7, v24, 0);
      return 1;
    }
  }
  v8 = (int)(*(double *)(v6 + 440) * 5.0 + 1.0);
  v9 = v5 - v8;
  sub_2B13C(&v23, a2, v7, v8);
  if ( v9 < 5 )
    v9 = 5;
  if ( v23 - *(_DWORD *)(a1 + 264) >= v9 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      strcpy((char *)v24, "Work stale due to expiry");
      sub_38438(7, v24, 0);
      return 1;
    }
    return 1;
  }
  if ( byte_63BC5 && !a2 && v6 != sub_1D644() && !*(_BYTE *)(a1 + 282) && dword_611AC != 3 && dword_611AC != 4 )
  {
    if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      return 1;
    v10 = "Work stale due to fail only pool mismatch";
    goto LABEL_42;
  }
  return 0;
}
