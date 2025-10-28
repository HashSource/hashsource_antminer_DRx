ssize_t __fastcall sub_3C604(int a1, void *a2, size_t a3)
{
  ssize_t v4; // r4
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  v4 = read(a1, a2, a3);
  if ( a3 != v4 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
  {
    strcpy(v6, "read error!!");
    sub_38438(3, v6, 0);
  }
  return v4;
}
