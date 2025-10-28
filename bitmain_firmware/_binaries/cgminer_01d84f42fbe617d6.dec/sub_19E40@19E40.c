_DWORD *__fastcall sub_19E40(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v2; // r1
  int v3; // r2
  int v5; // r2

  v1 = sub_19E18(a1, 0);
  *((_BYTE *)v1 + 273) = 1;
  sub_2B13C(v1 + 104, v2, v3, 1);
  v5 = v1[66] - 1;
  *((_BYTE *)v1 + 280) = 0;
  v1[66] = v5;
  *((_BYTE *)v1 + 282) = 0;
  return v1;
}
