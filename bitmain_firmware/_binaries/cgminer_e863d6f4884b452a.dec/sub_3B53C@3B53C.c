unsigned int sub_3B53C()
{
  char v1[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v1, "power init ...");
    sub_343C4(5, v1, 0);
    sub_3B45C();
    return sub_3B234();
  }
  else
  {
    sub_3B45C();
    return sub_3B234();
  }
}
