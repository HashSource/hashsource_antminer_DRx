int __fastcall waiting_ltc_send_done_rvn(int a1, int a2, void *s)
{
  int v7; // [sp+Ch] [bp-8h] BYREF

  v7 = 0;
  memset(s, 0, 268 * a2);
  (*(void (__fastcall **)(int, int, void *, int *, int, _DWORD))(a1 + 312))(a1, a2, s, &v7, 2000, 0);
  return v7;
}
