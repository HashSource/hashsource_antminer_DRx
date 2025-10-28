int __fastcall get_currentalgo(char *a1, size_t a2)
{
  int v2; // r3

  LOWORD(v2) = -1428;
  HIWORD(v2) = (unsigned int)&off_12FB10 >> 16;
  return snprintf(a1, a2, "%s", *(const char **)(v2 + 4 * opt_algo + 0x74));
}
