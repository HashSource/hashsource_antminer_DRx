int __fastcall sub_41040(char a1, char a2)
{
  char v3; // [sp+6h] [bp-6h] BYREF
  _BYTE buf[5]; // [sp+7h] [bp-5h] BYREF

  v3 = a2;
  buf[0] = a1;
  sub_40FF0();
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60DF4, 1u);
  write(dword_C54A6, buf, 1u);
  write(dword_C54A6, &v3, 1u);
  return pthread_mutex_unlock(&stru_63214);
}
