char *__fastcall sub_184FC(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r6
  size_t v4; // r7
  char *v5; // r5

  v2 = strlen(a1);
  v3 = v2 + 3;
  v4 = v2;
  v5 = (char *)sub_4F524(v2 + 3);
  if ( *a1 == 34 || v4 <= strcspn(a1, "{}(),;|=") && !strchr(a1, 32) )
  {
    strncpy(v5, a1, v3);
    return v5;
  }
  else
  {
    snprintf(v5, v3, "\"%s\"", a1);
    return v5;
  }
}
