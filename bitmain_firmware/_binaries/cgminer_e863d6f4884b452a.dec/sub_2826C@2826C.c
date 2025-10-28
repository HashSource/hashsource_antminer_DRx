_BYTE *__fastcall sub_2826C(int a1, int a2)
{
  int v2; // r5
  int v5; // r3
  _BYTE *v6; // r0
  _BYTE *v7; // r6
  _BYTE *v8; // r5
  int v9; // r0
  _BYTE *v10; // r2
  unsigned int v11; // t1
  char v12; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = 2 * a2;
  v5 = (2 * a2 + 1) & 3;
  if ( 2 * a2 + 1 <= 0 )
    v5 = -(-(2 * a2 + 1) & 3);
  v6 = calloc(v2 + 1 + 4 - v5, 1u);
  v7 = v6;
  if ( !v6 )
  {
    snprintf(s, 0x800u, "Failed to calloc in %s %s():%d", "util.c", "bin2hex", 920);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( a2 > 0 )
  {
    v9 = a1 - 1;
    v10 = v7 + 2;
    do
    {
      v11 = *(unsigned __int8 *)++v9;
      v10 += 2;
      v12 = *((_BYTE *)&dword_5142C[277] + (v11 >> 4));
      *(v10 - 3) = *((_BYTE *)&dword_5142C[277] + (v11 & 0xF));
      *(v10 - 4) = v12;
    }
    while ( v9 != a1 - 1 + a2 );
    v8 = &v7[v2];
  }
  else
  {
    v8 = v6;
  }
  *v8 = 0;
  return v7;
}
