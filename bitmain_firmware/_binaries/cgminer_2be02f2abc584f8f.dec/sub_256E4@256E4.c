char *__fastcall sub_256E4(const char *a1)
{
  char *v2; // r5
  char v4[2048]; // [sp+0h] [bp-800h] BYREF

  echo();
  v2 = (char *)malloc(0xFFu);
  if ( !v2 )
  {
    strcpy(v4, "Failed to malloc input");
    sub_3F1C0(3, v4, 1);
    sub_132C4(1);
  }
  leaveok((WINDOW *)dword_79480, 0);
  snprintf(v4, 0x800u, "%s:\n", a1);
  sub_15618(v4);
  wgetnstr((WINDOW *)dword_79480, v2, 255);
  if ( !*v2 )
    strcpy(v2, "-1");
  leaveok((WINDOW *)dword_79480, 1);
  noecho();
  return v2;
}
