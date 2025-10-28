int __fastcall sub_41D44(int a1, char **a2)
{
  int v2; // r0
  int v3; // r0
  char *v4; // r12
  char *v5; // r4
  char *v6; // r5

  v2 = *(_DWORD *)(a1 + 12);
  *a2 = off_7B978[0];
  v3 = v2 & 3;
  v4 = off_7B850[0];
  v5 = off_7B84C[0];
  dword_C9A70 = (int)off_7B844[0];
  dword_C9A94 = (int)off_7B848[0];
  v6 = off_7B83C[0];
  dword_C9A88 = (int)off_7BA20[0];
  dword_C9A5C = (int)off_7B850[0];
  dword_C9A68 = (int)off_7B840[0];
  dword_C9A78 = (int)off_7B918[0];
  dword_C9A7C = (int)off_7B91C[0];
  dword_C9A84 = (int)off_7B914[0];
  dword_C9A8C = (int)off_7BA60[0];
  dword_C9A60 = (int)off_7B9AC[0];
  dword_C9A80 = (int)off_7B9AC[0];
  dword_C9A64 = (int)off_7B84C[0];
  dword_C9A6C = (int)off_7B83C[0];
  dword_C9A74 = (int)off_7B838[0];
  if ( v3 == 2 )
  {
    dword_C9A90 = (int)off_7BA1C[0];
    *off_7B838[0] = 32;
    *v6 = 32;
    *v5 = 32;
    *v4 = 32;
    dword_C9A7C = (int)" [arg]";
    return 8;
  }
  else if ( v3 == 3 || v3 == 1 )
  {
    dword_C9A90 = (int)off_7B920[0];
    return 22;
  }
  else
  {
    dword_C9A90 = (int)(off_7B920[0] + 2);
    return 22;
  }
}
