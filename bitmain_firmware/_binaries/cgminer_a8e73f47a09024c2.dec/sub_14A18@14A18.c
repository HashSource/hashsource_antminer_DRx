int sub_14A18()
{
  int v0; // r5
  int v1; // r0

  sub_142A0(&stru_80BB8, "cgminer.c", "current_pool", 1058);
  sub_13B28(&rwlock, "cgminer.c", "current_pool", 1058);
  sub_1430C(&stru_80BB8, "cgminer.c", "current_pool", 1058);
  v0 = dword_7AECC;
  v1 = sub_13B94(&rwlock, "cgminer.c", "current_pool", 1060);
  off_79D40(v1);
  return v0;
}
