void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  int v2; // r3

  LOWORD(v2) = 28616;
  HIWORD(v2) = (unsigned int)&unk_196FD0 >> 16;
  memcpy(a1, (const void *)(v2 + 216 * *(_DWORD *)(a2 + 248) + 1280), 0xD8u);
  return a1;
}
