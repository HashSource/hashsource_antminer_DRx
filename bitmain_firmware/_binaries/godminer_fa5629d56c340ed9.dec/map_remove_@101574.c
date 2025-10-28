void __fastcall map_remove_(_DWORD *a1, char *s2)
{
  void **v3; // r0
  void **v4; // r3
  void *v5; // r0

  v3 = (void **)sub_10124C(a1, a1 + 1, s2);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    *v4 = (void *)*((_DWORD *)*v4 + 2);
    free(v5);
    --a1[2];
  }
}
