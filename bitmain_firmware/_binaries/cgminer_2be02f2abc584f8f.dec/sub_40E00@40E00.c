void sub_40E00()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(v0, "Updated Work!");
    sub_3F1C0(7, v0, 0);
  }
  byte_75C10 = 1;
  byte_75C11 = 1;
  byte_75C12 = 1;
  byte_75C13 = 1;
}
