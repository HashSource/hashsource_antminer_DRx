int sub_17D7C()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    snprintf(v1, 0x800u, "Attempting to restart %s", byte_739E4);
    sub_3F1C0(4, v1, 0);
  }
  sub_349D4(sub_13C28, 0, 5000);
  sub_17CA0(1);
  if ( dword_73ED8 > 0 )
  {
    kill(dword_73ED8, 15);
    dword_73ED8 = 0;
  }
  result = execv(*(const char **)dword_73EDC, (char *const *)dword_73EDC);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
  {
    strcpy(v1, "Failed to restart application");
    return sub_3F1C0(4, v1, 0);
  }
  return result;
}
