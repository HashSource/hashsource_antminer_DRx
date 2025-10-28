int __fastcall V_FLOAT(int a1, char *s)
{
  __int64 v2; // d0
  size_t v5; // r0

  ++dword_1B6164;
  v5 = strlen(s);
  *(_QWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 4) = v5;
  *(_DWORD *)a1 = s;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return a1;
}
