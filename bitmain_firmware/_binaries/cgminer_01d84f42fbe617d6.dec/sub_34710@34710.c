int __fastcall sub_34710(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r7
  int v11; // r4
  unsigned __int8 v12; // [sp+18h] [bp+18h]

  v6 = a1;
  if ( dword_63740 )
  {
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      if ( pthread_mutex_lock(&stru_63FB0) )
        sub_B844("switchpool", 2887);
      sub_32074(&stru_63FC8, "switchpool", 2887);
      if ( pthread_mutex_unlock(&stru_63FB0) )
        sub_B91C("switchpool", 2887);
      if ( v9 >= 0 && v9 < dword_63740 )
      {
        v11 = *(_DWORD *)(dword_639E0 + 4 * v9);
        *(_DWORD *)(v11 + 100) = 1;
        if ( pthread_rwlock_unlock(&stru_63FC8) )
          sub_B8B0("switchpool", 2897);
        off_60178();
        sub_195D4(v11);
        v12 = a4;
        a1 = v6;
        v7 = v9;
        v8 = 27;
      }
      else
      {
        if ( pthread_rwlock_unlock(&stru_63FC8) )
          sub_B8B0("switchpool", 2890);
        off_60178();
        v12 = a4;
        a1 = v6;
        v7 = v9;
        v8 = 26;
      }
    }
    else
    {
      v7 = 0;
      v12 = a4;
      v8 = 25;
    }
  }
  else
  {
    v7 = 0;
    v12 = a4;
    v8 = 8;
  }
  return sub_32F3C(a1, v8, v7, 0, v12);
}
