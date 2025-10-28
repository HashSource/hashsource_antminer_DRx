int sub_1C028()
{
  int v0; // r1
  int v1; // r2
  int v2; // r3
  int result; // r0
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(v4, 0x800u, "Attempting to restart %s", byte_60EA4);
    sub_38438(4, v4, 0);
  }
  sub_2F38C(sub_1C708, 0, 5000);
  sub_2B13C(&dword_613E4, v0, v1, v2);
  sub_19060();
  if ( dword_61418 > 0 )
  {
    kill(dword_61418, 15);
    dword_61418 = 0;
  }
  result = execv(*(const char **)dword_6141C, (char *const *)dword_6141C);
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    strcpy(v4, "Failed to restart application");
    return sub_38438(4, v4, 0);
  }
  return result;
}
