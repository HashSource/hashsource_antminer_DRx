char *__fastcall sub_1A918(char *a1)
{
  size_t v2; // r0
  char *v3; // r5
  size_t v4; // r6
  char *v6; // r0

  if ( dword_6D868 && *(_BYTE *)dword_6D868 )
    return j_strcpy(a1, (const char *)dword_6D868);
  if ( getenv("HOME") && *getenv("HOME") )
  {
    v6 = getenv("HOME");
    *(_WORD *)stpcpy(a1, v6) = 47;
  }
  else
  {
    *a1 = 0;
  }
  strcat(a1, ".cgminer/");
  mkdir(a1, 0x1FFu);
  v2 = strlen(a1);
  v3 = &a1[v2];
  v4 = v2;
  *(_DWORD *)&a1[v4] = *(_DWORD *)"cgminer.conf";
  strcpy(v3 + 4, "ner.conf");
  return *(char **)"cgminer.conf";
}
