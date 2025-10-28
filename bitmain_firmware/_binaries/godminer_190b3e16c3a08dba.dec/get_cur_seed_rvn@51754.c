int __fastcall get_cur_seed_rvn(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_17B008);
  v2 = dword_17B020[1];
  v3 = dword_17B020[2];
  v4 = dword_17B020[3];
  *a1 = dword_17B020[0];
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  v5 = unk_17B034;
  v6 = unk_17B038;
  v7 = unk_17B03C;
  a1[4] = unk_17B030;
  a1[5] = v5;
  a1[6] = v6;
  a1[7] = v7;
  return pthread_mutex_unlock(&stru_17B008);
}
