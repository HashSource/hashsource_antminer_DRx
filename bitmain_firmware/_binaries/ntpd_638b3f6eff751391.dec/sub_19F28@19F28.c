void *__fastcall sub_19F28(_BYTE *a1, int a2, int a3)
{
  char v3; // r3
  char *v4; // r4
  _BYTE *v5; // lr
  char *v6; // r12
  int v7; // t1
  char *v8; // r4
  const char *v9; // r6
  size_t v10; // r0
  char v12; // [sp+0h] [bp-C8h] BYREF
  char v13; // [sp+1h] [bp-C7h] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v4 = &v13;
    v5 = a1;
    do
    {
      v6 = v4++;
      *(v6 - 1) = v3;
      v7 = (unsigned __int8)*++v5;
      v3 = v7;
    }
    while ( v7 );
  }
  else
  {
    v6 = &v12;
  }
  *v6 = 61;
  v8 = v6 + 1;
  if ( a3 )
    v9 = (const char *)sub_50CD0(a3);
  else
    v9 = (const char *)sub_50054(a2);
  if ( (unsigned int)(v8 - &v12) > 0xC7 )
    off_7C9FC("ntp_control.c", 1251, 2, "(cp - buffer) < sizeof(buffer)");
  snprintf(v8, &v12 - v8 + 200, "%s", v9);
  v10 = strlen(v8);
  return sub_19D60(&v12, &v8[v10] - &v12, 0);
}
