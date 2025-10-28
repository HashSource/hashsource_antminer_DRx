int __fastcall sub_30CE4(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v5; // r6
  int v6; // r2
  int v7; // r1
  int v9; // r7
  int v11; // r4
  unsigned __int8 v12; // [sp+18h] [bp+18h]

  if ( dword_72EF0 )
  {
    v5 = a1;
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      if ( pthread_mutex_lock(&stru_73460) )
        sub_2F624("switchpool", 2919);
      sub_2F5D0(&rwlock, "switchpool", 2919);
      if ( pthread_mutex_unlock(&stru_73460) )
        sub_2F6B4("switchpool", 2919);
      if ( v9 >= 0 && v9 < dword_72EF0 )
      {
        v11 = *(_DWORD *)(dword_732EC + 4 * v9);
        *(_DWORD *)(v11 + 100) = 1;
        if ( pthread_rwlock_unlock(&rwlock) )
          sub_2F66C("switchpool", 2929);
        off_6CB70(0);
        sub_1F158(v11);
        v12 = a4;
        v6 = v9;
        a1 = v5;
        v7 = 27;
      }
      else
      {
        if ( pthread_rwlock_unlock(&rwlock) )
          sub_2F66C("switchpool", 2922);
        off_6CB70(0);
        v12 = a4;
        v6 = v9;
        a1 = v5;
        v7 = 26;
      }
    }
    else
    {
      v12 = a4;
      v6 = 0;
      v7 = 25;
    }
  }
  else
  {
    v12 = a4;
    v6 = 0;
    v7 = 8;
  }
  return sub_30214(a1, v7, v6, 0, v12);
}
