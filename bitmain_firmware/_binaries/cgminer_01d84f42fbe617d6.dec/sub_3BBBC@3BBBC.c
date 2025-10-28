ssize_t __fastcall sub_3BBBC(int a1, const void *a2, size_t a3)
{
  ssize_t v6; // r6
  char v8[2048]; // [sp+0h] [bp-800h] BYREF

  flock(a1, 2);
  v6 = write(a1, a2, a3);
  if ( a3 != v6 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
  {
    strcpy(v8, "write error!!");
    sub_38438(3, v8, 0);
  }
  flock(a1, 8);
  sub_2B244();
  return v6;
}
