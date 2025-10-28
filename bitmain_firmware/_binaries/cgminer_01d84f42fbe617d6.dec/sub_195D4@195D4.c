int __fastcall sub_195D4(int a1)
{
  _DWORD *v2; // r6
  int v3; // r7
  int v4; // r12
  int *v5; // r3
  int v6; // r0
  int v7; // r1
  int v8; // t1
  int v9; // r2
  bool v10; // cc
  int v11; // r2
  char v12; // r3
  int v13; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r0
  int v17; // r4
  int v19; // r3
  int v20; // r2
  int v21; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_63FB0) )
    sub_B4E4("switch_pools", 5079);
  if ( pthread_rwlock_wrlock(&stru_63FC8) )
    sub_B550("switch_pools", 5079);
  v2 = (_DWORD *)dword_61310;
  v3 = *(_DWORD *)dword_61310;
  if ( a1 && (v4 = *(_DWORD *)(a1 + 4)) != 0 )
  {
    if ( dword_63740 > 0 )
    {
      v5 = (int *)dword_639E0;
      v6 = dword_639E0 + 4 * dword_63740;
      while ( 1 )
      {
        v8 = *v5++;
        v7 = v8;
        v9 = *(_DWORD *)(v8 + 4);
        v10 = v9 < v4;
        v11 = v9 + 1;
        if ( v10 )
          *(_DWORD *)(v7 + 4) = v11;
        if ( v5 == (int *)v6 )
          break;
        v4 = *(_DWORD *)(a1 + 4);
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    v12 = dword_611AC;
    if ( (unsigned int)dword_611AC > 4 )
      goto LABEL_37;
  }
  else
  {
    v12 = dword_611AC;
    if ( (unsigned int)dword_611AC > 4 )
      goto LABEL_37;
  }
  v13 = 1 << v12;
  if ( (v13 & 0x19) != 0 )
  {
    if ( dword_63740 > 0 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = v14++;
        v16 = sub_11B90(v15);
        if ( !*(_BYTE *)(v16 + 97) && *(_DWORD *)(v16 + 100) == 1 )
          break;
        if ( dword_63740 <= v14 )
          goto LABEL_37;
      }
      v17 = *(_DWORD *)(dword_639E0 + 4 * *(_DWORD *)v16);
      goto LABEL_21;
    }
LABEL_37:
    v17 = *(_DWORD *)(dword_639E0 + 4 * v3);
    goto LABEL_21;
  }
  if ( (v13 & 6) == 0 )
    goto LABEL_37;
  if ( a1 && !*(_BYTE *)(a1 + 97) )
  {
    v17 = *(_DWORD *)(dword_639E0 + 4 * *(_DWORD *)a1);
    goto LABEL_21;
  }
  if ( dword_63740 <= 1 )
    goto LABEL_37;
  v19 = v3;
  v20 = 1;
  while ( 1 )
  {
    ++v19;
    ++v20;
    v21 = 4 * v19;
    if ( v19 >= dword_63740 )
    {
      v19 = 0;
      v21 = 0;
    }
    v17 = *(_DWORD *)(dword_639E0 + v21);
    if ( !*(_BYTE *)(v17 + 97) && *(_DWORD *)(v17 + 100) == 1 )
      break;
    if ( v20 == dword_63740 )
    {
      v17 = *(_DWORD *)(dword_639E0 + 4 * v3);
      break;
    }
  }
LABEL_21:
  dword_61310 = v17;
  if ( pthread_rwlock_unlock(&stru_63FC8) )
    sub_B700("switch_pools", 5141);
  if ( pthread_mutex_unlock(&stru_63FB0) )
    sub_B694("switch_pools", 5141);
  off_60178();
  if ( byte_63BC5 )
    sub_17E64(v17, (_BYTE *)(v17 + 98));
  if ( v2 != (_DWORD *)v17 && dword_611AC != 3 && dword_611AC != 4 )
  {
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      snprintf(s, 0x800u, "Switching to pool %d %s", *(_DWORD *)v17, *(const char **)(v17 + 164));
      sub_38438(4, s, 0);
    }
    sub_17FC4(v2);
  }
  if ( pthread_mutex_lock(&stru_61314) )
    sub_B4E4("switch_pools", 5156);
  pthread_cond_broadcast(&stru_61330);
  if ( pthread_mutex_unlock(&stru_61314) )
    sub_B694("switch_pools", 5158);
  return off_60178();
}
