int __fastcall sub_272D0(int a1)
{
  int v2; // r2
  int result; // r0
  int (__fastcall *v4)(int, int); // r3

  v2 = *(unsigned __int8 *)(a1 + 64);
  result = *(unsigned __int8 *)(a1 + 65);
  v4 = (int (__fastcall *)(int, int))*((_DWORD *)*(&off_65B1C + v2) + 6);
  if ( v4 )
    return v4(result, a1);
  return result;
}
