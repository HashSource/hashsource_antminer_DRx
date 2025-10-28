int sub_17F5C()
{
  int result; // r0
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    snprintf(v1, 0x800u, "Attempting to restart %s", byte_7AA44);
    sub_3F178(4, v1, 0);
  }
  sub_34A54(sub_13E08, 0, 5000);
  sub_17E80(1);
  if ( dword_7AF38 > 0 )
  {
    kill(dword_7AF38, 15);
    dword_7AF38 = 0;
  }
  result = execv(*(const char **)dword_7AF3C, (char *const *)dword_7AF3C);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
  {
    strcpy(v1, "Failed to restart application");
    return sub_3F178(4, v1, 0);
  }
  return result;
}
