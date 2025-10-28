int __fastcall get_cur_seed(double *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_197868);
  v2 = dword_197880[1];
  v3 = dword_197880[2];
  v4 = dword_197880[3];
  *(_DWORD *)a1 = dword_197880[0];
  *((_DWORD *)a1 + 1) = v2;
  *((_DWORD *)a1 + 2) = v3;
  *((_DWORD *)a1 + 3) = v4;
  v5 = unk_197894;
  v6 = unk_197898;
  v7 = unk_19789C;
  *((_DWORD *)a1 + 4) = unk_197890;
  *((_DWORD *)a1 + 5) = v5;
  *((_DWORD *)a1 + 6) = v6;
  *((_DWORD *)a1 + 7) = v7;
  return pthread_mutex_unlock(&stru_197868);
}
