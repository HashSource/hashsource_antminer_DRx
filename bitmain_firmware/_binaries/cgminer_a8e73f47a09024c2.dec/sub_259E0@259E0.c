int __fastcall sub_259E0(const char *a1)
{
  char *v1; // r5
  int v2; // r4

  v1 = sub_258F4(a1);
  v2 = strtol(v1, 0, 10);
  free(v1);
  return v2;
}
