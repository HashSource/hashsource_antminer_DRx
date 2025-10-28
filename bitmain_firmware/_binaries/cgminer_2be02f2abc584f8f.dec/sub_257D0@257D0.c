int __fastcall sub_257D0(const char *a1)
{
  char *v1; // r5
  int v2; // r4

  v1 = sub_256E4(a1);
  v2 = strtol(v1, 0, 10);
  free(v1);
  return v2;
}
