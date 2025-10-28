int __fastcall sub_31D94(int a1, int a2, int a3, int a4)
{
  char *v6; // r1
  int v7; // r8
  _DWORD *v8; // r7
  _DWORD *v9; // r0
  _DWORD *v10; // r9
  _DWORD *v11; // r0
  char **v12; // r0
  int result; // r0

  sub_30214((unsigned int *)a1, 78, 0, 0, a4);
  v6 = ",\"COIN\":[";
  if ( !a4 )
    v6 = "COIN,";
  v7 = sub_2E530((unsigned int *)a1, v6);
  v8 = sub_2E418(0, "Hash Method", 2, "sha256", 0);
  if ( pthread_mutex_lock(&stru_733A8) )
    sub_2F624("minecoin", 3660);
  sub_2F5D0(&stru_733C0, "minecoin", 3660);
  if ( pthread_mutex_unlock(&stru_733A8) )
    sub_2F6B4("minecoin", 3660);
  v9 = sub_2E418(v8, "Current Block Time", 15, (const char *)&dword_737A8, 1);
  v10 = sub_2E418(v9, "Current Block Hash", 1, byte_72C40, 1);
  if ( pthread_rwlock_unlock(&stru_733C0) )
    sub_2F66C("minecoin", 3663);
  off_6CB70(0);
  v11 = sub_2E418(v10, "LP", 14, &byte_73322, 0);
  v12 = (char **)sub_2E418(v11, "Network Difficulty", 24, (const char *)&dbl_6CA90, 1);
  result = sub_2F9C4((unsigned int *)a1, v12, a4, 0);
  if ( (a4 & v7) != 0 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
