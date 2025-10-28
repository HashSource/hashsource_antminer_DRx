int sub_1A09C()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(v1, 0x800u, "Attempting to restart %s", s);
    sub_343C4(4, v1, 0);
  }
  sub_2D9C8(sub_1DFD8, 0, 5000);
  sub_2A69C(&dword_6DB8C);
  if ( dword_6DB94 > 0 )
  {
    kill(dword_6DB94, 15);
    dword_6DB94 = 0;
  }
  result = execv(*(const char **)dword_6DB98, (char *const *)dword_6DB98);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    strcpy(v1, "Failed to restart application");
    return sub_343C4(4, v1, 0);
  }
  return result;
}
