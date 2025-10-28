void *__fastcall sub_1AA84(char *a1, int a2, int a3)
{
  char v3; // r3
  char *p_s; // r4
  char *v7; // r12
  int v8; // t1
  int v9; // r5
  bool v10; // zf
  int v11; // r6
  char s; // [sp+8h] [bp-C8h] BYREF
  char v14; // [sp+9h] [bp-C7h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v7 = &v14;
    do
    {
      p_s = v7++;
      *(p_s - 1) = v3;
      v8 = (unsigned __int8)*++a1;
      v3 = v8;
    }
    while ( v8 );
  }
  else
  {
    p_s = &s;
  }
  v9 = a3;
  do
  {
    v10 = v9-- == 0;
    v11 = 56;
    if ( v10 )
      v9 = 7;
    else
      v11 = 8 * v9;
    if ( (unsigned int)(p_s - &s) > 0xC7 )
      off_7C9FC("ntp_control.c", 1321, 2, "(cp - buffer) < sizeof(buffer)");
    snprintf(p_s, &s - p_s + 200, " %.2f", *(double *)(a2 + v11) * 1000.0);
    p_s += strlen(p_s);
  }
  while ( a3 != v9 );
  return sub_19D60(&s, p_s - &s, 0);
}
