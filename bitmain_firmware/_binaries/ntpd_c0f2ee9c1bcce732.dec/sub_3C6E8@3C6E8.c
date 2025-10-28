int __fastcall sub_3C6E8(int a1, int a2)
{
  int v2; // r3
  int v4; // r0
  char v5; // r2
  int result; // r0
  int v7; // r4
  const char *v8; // r0
  unsigned __int8 buf; // [sp+7h] [bp-9h] BYREF
  _BYTE v10[8]; // [sp+8h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 60);
  v4 = *(_DWORD *)(v2 + 20);
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 28) + 13) )
    v5 = 82;
  else
    v5 = 84;
  buf = v5;
  if ( write(v4, &buf, 1u) != 1 )
    sub_27040(a2, 3);
  result = sub_4CBA8(v10);
  if ( dword_7CF4C )
  {
    v7 = buf;
    v8 = (const char *)sub_503E0(v10);
    return printf("%c poll at %s\n", v7, v8);
  }
  return result;
}
