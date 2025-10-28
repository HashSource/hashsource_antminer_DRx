int __fastcall get_cur_seed(double *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3

  pthread_mutex_lock(&stru_17ADE0);
  v2 = dword_17ADF8[1];
  v3 = dword_17ADF8[2];
  v4 = dword_17ADF8[3];
  *(_DWORD *)a1 = dword_17ADF8[0];
  *((_DWORD *)a1 + 1) = v2;
  *((_DWORD *)a1 + 2) = v3;
  *((_DWORD *)a1 + 3) = v4;
  v5 = unk_17AE0C;
  v6 = unk_17AE10;
  v7 = unk_17AE14;
  *((_DWORD *)a1 + 4) = unk_17AE08;
  *((_DWORD *)a1 + 5) = v5;
  *((_DWORD *)a1 + 6) = v6;
  *((_DWORD *)a1 + 7) = v7;
  return pthread_mutex_unlock(&stru_17ADE0);
}
