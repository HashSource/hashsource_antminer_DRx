int __fastcall sub_4F60C(_DWORD *a1, int a2, int a3)
{
  int v3; // r3

  if ( a1[283] )
  {
    v3 = *(_DWORD *)(a3 + 30);
    a1[268] = *(_DWORD *)(a3 + 26);
    a1[269] = v3;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
  }
  return 0;
}
