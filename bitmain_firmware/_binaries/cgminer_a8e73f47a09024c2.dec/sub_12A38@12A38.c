char *__fastcall sub_12A38(char *a1)
{
  char *v3; // r0
  char *v4; // r12

  if ( dword_7AA2C && *(_BYTE *)dword_7AA2C )
    return strcpy(a1, (const char *)dword_7AA2C);
  if ( getenv("HOME") && *getenv("HOME") )
  {
    v3 = getenv("HOME");
    strcpy(a1, v3);
    *(_WORD *)&a1[strlen(a1)] = 47;
  }
  else
  {
    *a1 = 0;
  }
  strcat(a1, ".cgminer/");
  mkdir(a1, 0x1FFu);
  v4 = &a1[strlen(a1)];
  strcpy(v4, "cgminer.conf");
  return *(char **)"cgminer.conf";
}
