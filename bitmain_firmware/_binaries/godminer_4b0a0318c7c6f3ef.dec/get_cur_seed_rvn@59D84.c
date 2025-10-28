int __fastcall get_cur_seed_rvn(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock((pthread_mutex_t *)&unk_196A80);
  v2 = dword_196A98[1];
  v3 = dword_196A98[2];
  v4 = dword_196A98[3];
  *a1 = dword_196A98[0];
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  v5 = unk_196AAC;
  v6 = unk_196AB0;
  v7 = unk_196AB4;
  a1[4] = unk_196AA8;
  a1[5] = v5;
  a1[6] = v6;
  a1[7] = v7;
  return pthread_mutex_unlock((pthread_mutex_t *)&unk_196A80);
}
