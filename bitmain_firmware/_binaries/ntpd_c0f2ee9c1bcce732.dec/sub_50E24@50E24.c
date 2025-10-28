char *__fastcall sub_50E24(int a1)
{
  char *v1; // r12

  if ( !a1 )
    return "no events";
  v1 = (char *)&unk_665CC;
  if ( a1 != 1 )
    v1 = "s";
  snprintf(&byte_C9C10[32], 0x14u, "%d event%s", a1, v1);
  return &byte_C9C10[32];
}
