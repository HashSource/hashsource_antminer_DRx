int __fastcall sub_41E3C(int a1, char **a2)
{
  int v2; // r0
  int result; // r0

  v2 = *(_DWORD *)(a1 + 12) & 0x12;
  dword_C9A5C = (int)off_7BA50[0];
  dword_C9A60 = (int)off_7BA4C[0];
  dword_C9A64 = (int)off_7BA44[0];
  dword_C9A6C = (int)off_7BA30[0];
  dword_C9A78 = (int)off_7BA3C[0];
  dword_C9A70 = (int)off_7BA34[0];
  dword_C9A94 = (int)off_7BA38[0];
  dword_C9A68 = (int)off_7BA2C[0];
  dword_C9A74 = (int)off_7BA24[0];
  dword_C9A7C = (int)off_7BA48[0];
  dword_C9A80 = (int)off_7BA40[0];
  dword_C9A84 = (int)off_7BA28[0];
  dword_C9A88 = (int)off_7B8D4[0];
  dword_C9A8C = (int)off_7BA64[0];
  switch ( v2 )
  {
    case 0:
      result = 24;
      *a2 = off_7BA0C[0];
      dword_C9A90 = (int)off_7BA04[0];
      break;
    case 2:
      result = 24;
      *a2 = off_7BA10;
      dword_C9A90 = (int)off_7BA04[0];
      break;
    case 16:
      result = 19;
      *a2 = off_7B974[0];
      dword_C9A90 = (int)off_7B9A4[0];
      break;
    case 18:
      result = 19;
      *a2 = off_7B978[0];
      dword_C9A90 = (int)off_7B9A4[0];
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
