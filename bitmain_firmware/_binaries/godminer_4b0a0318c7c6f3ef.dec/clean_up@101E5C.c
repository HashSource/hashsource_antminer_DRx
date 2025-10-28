// attributes: thunk
int clean_up(pthread_mutex_t *mutex)
{
  return pthread_mutex_unlock(mutex);
}
