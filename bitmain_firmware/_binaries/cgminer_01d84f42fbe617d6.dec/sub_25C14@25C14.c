char *__fastcall sub_25C14(const char *a1)
{
  char *v2; // r4
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  echo();
  v2 = (char *)malloc(0xFFu);
  if ( !v2 )
  {
    strcpy(v4, "Failed to malloc input");
    sub_38438(3, v4, 1);
    sub_16724(1);
  }
  leaveok((WINDOW *)dword_639D8, 0);
  snprintf(v4, 0x800u, "%s:\n", a1);
  sub_1952C(v4);
  wgetnstr((WINDOW *)dword_639D8, v2, 255);
  if ( !*v2 )
    strcpy(v2, "-1");
  leaveok((WINDOW *)dword_639D8, 1);
  noecho();
  return v2;
}
