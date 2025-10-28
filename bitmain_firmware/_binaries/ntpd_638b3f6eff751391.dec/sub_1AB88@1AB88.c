void *__fastcall sub_1AB88(char *a1, int a2)
{
  char v2; // r2
  char *v3; // lr
  char *v4; // r12
  int v5; // t1
  const char *v6; // r4
  size_t v7; // r0
  char v9; // [sp+0h] [bp-C8h] BYREF
  char v10; // [sp+1h] [bp-C7h] BYREF

  v2 = *a1;
  if ( *a1 )
  {
    v3 = &v10;
    do
    {
      v4 = v3++;
      *(v4 - 1) = v2;
      v5 = (unsigned __int8)*++a1;
      v2 = v5;
    }
    while ( v5 );
  }
  else
  {
    v4 = &v9;
  }
  *v4 = 61;
  v6 = v4 + 1;
  if ( (unsigned int)(v4 + 1 - &v9) > 0xC7 )
    off_7C9FC("ntp_control.c", 1167, 2, "(cp - buffer) < sizeof(buffer)");
  snprintf(v4 + 1, &v9 - v6 + 200, "0x%lx", a2);
  v7 = strlen(v6);
  return sub_19D60(&v9, &v6[v7] - &v9, 0);
}
