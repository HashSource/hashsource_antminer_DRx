int __fastcall sub_148CC(int a1, int a2)
{
  int v5; // r6
  int v6; // r7
  int v7; // r9
  int v8; // r0
  int v9; // r6
  char v10[2048]; // [sp+0h] [bp-80Ch] BYREF
  _DWORD v11[3]; // [sp+800h] [bp-Ch] BYREF

  if ( byte_73E70 )
    return 0;
  if ( dword_73E74 )
    return 0;
  if ( *(_DWORD *)(a1 + 396) != dword_73E78 )
  {
    if ( !byte_75C09 )
      return 1;
    if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
      return 1;
    strcpy(v10, "Work stale due to block mismatch");
    sub_3F1C0(7, v10, 0);
    return 1;
  }
  v5 = *(_DWORD *)(a1 + 332);
  if ( v5 <= dword_72BF8 )
    v5 = dword_72BFC;
  v6 = *(_DWORD *)(a1 + 316);
  if ( a2 || !*(_BYTE *)(v6 + 640) )
    goto LABEL_34;
  if ( !*(_BYTE *)(v6 + 641) || !*(_BYTE *)(v6 + 643) )
  {
    if ( !byte_75C09 )
      return 1;
    if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
      return 1;
    strcpy(v10, "Work stale due to stratum inactive");
    sub_3F1C0(7, v10, 0);
    return 1;
  }
  sub_140C0((pthread_mutex_t *)(v6 + 220), "cgminer.c", "stale_work", 5276);
  sub_13948((pthread_rwlock_t *)(v6 + 244), "cgminer.c", "stale_work", 5276);
  sub_1412C((pthread_mutex_t *)(v6 + 220), "cgminer.c", "stale_work", 5276);
  v7 = strcmp(*(const char **)(a1 + 344), *(const char **)(v6 + 664));
  v8 = sub_139B4((pthread_rwlock_t *)(v6 + 244), "cgminer.c", "stale_work", 5279);
  off_72D00(v8);
  if ( v7 )
  {
    if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        strcpy(v10, "Work stale due to stratum job_id mismatch");
        sub_3F1C0(7, v10, 0);
        return 1;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
LABEL_34:
    v9 = v5 - (int)(*(double *)(v6 + 448) * 5.0 + 1.0);
    if ( v9 < 5 )
      v9 = 5;
    sub_2FE30(v11);
    if ( v9 > v11[0] - *(_DWORD *)(a1 + 320) )
    {
      if ( byte_796ED )
      {
        if ( a2 )
        {
          return 0;
        }
        else if ( v6 == sub_14838() )
        {
          return 0;
        }
        else if ( *(_BYTE *)(a1 + 338) )
        {
          return 0;
        }
        else if ( dword_739C4 == 3 )
        {
          return 0;
        }
        else if ( dword_739C4 == 4 )
        {
          return 0;
        }
        else if ( byte_75C09 )
        {
          if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
          {
            strcpy(v10, "Work stale due to fail only pool mismatch");
            sub_3F1C0(7, v10, 0);
            return 1;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          return 1;
        }
      }
      else
      {
        return 0;
      }
    }
    else if ( byte_75C09 )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
      {
        strcpy(v10, "Work stale due to expiry");
        sub_3F1C0(7, v10, 0);
        return 1;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
}
