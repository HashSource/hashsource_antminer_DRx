_DWORD *__fastcall sub_1B160(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r3

  v2 = sub_1B0EC();
  sub_19F60((int)v2, a1, 0);
  *((_BYTE *)v2 + 329) = 1;
  sub_2A69C(v2 + 120);
  v3 = v2[80];
  *((_BYTE *)v2 + 336) = 0;
  *((_BYTE *)v2 + 338) = 0;
  v2[80] = v3 - 1;
  return v2;
}
