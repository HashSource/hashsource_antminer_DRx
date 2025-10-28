int get_current_pool()
{
  int v0; // r4

  pthread_mutex_lock(&mutex);
  v0 = dword_17A05C;
  pthread_mutex_unlock(&mutex);
  return v0;
}
