int __fastcall hardreset_hal(int a1)
{
  int v1; // r4

  LOWORD(v1) = -8752;
  HIWORD(v1) = (unsigned int)&unk_186FC0 >> 16;
  usleep(0x493E0u);
  chain_reset_low(*(_DWORD *)(v1 + 8 * a1));
  usleep(0x493E0u);
  chain_reset_high(*(_DWORD *)(v1 + 8 * a1));
  sleep(1u);
  chain_reset_low(*(_DWORD *)(v1 + 8 * a1));
  usleep(0x493E0u);
  chain_reset_high(*(_DWORD *)(v1 + 8 * a1));
  return 0;
}
