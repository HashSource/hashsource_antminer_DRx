void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, &dword_197FE0[54 * *(_DWORD *)(a2 + 252) + 384], 0xD8u);
  return a1;
}
