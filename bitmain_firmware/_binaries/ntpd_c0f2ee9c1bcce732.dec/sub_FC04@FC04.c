int __fastcall sub_FC04(void **a1)
{
  void *v2; // r0

  if ( !a1 )
    off_7C9FC("ntp_config.c", 1270, 0, "((void *)0) != my_node");
  v2 = *a1;
  if ( !*a1 )
    off_7C9FC("ntp_config.c", 1271, 0, "((void *)0) != my_node->address");
  free(v2);
  return sub_10D7C(a1);
}
