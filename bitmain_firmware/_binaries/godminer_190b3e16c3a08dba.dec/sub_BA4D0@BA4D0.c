int __fastcall sub_BA4D0(_DWORD *a1)
{
  _DWORD *v1; // r5
  _DWORD **v3; // r3
  int v4; // r3
  _DWORD **v5; // r2
  _DWORD **v6; // r2
  int v7; // r2
  _DWORD **v8; // r3
  int v10; // [sp+4h] [bp-8h] BYREF

  v1 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 != a1 + 1 )
  {
    v3 = (_DWORD **)*a1;
    do
    {
      sub_BA404((int)a1, *v3);
      v3 = *(_DWORD ***)(v4 + 4);
    }
    while ( v3 != v5 );
    v6 = (_DWORD **)v1;
    do
    {
      sub_BA438((int)a1, *v6);
      v6 = *(_DWORD ***)(v7 + 4);
    }
    while ( v6 != v8 );
  }
  v10 = -1;
  return sub_BA46C((int)a1, v1, 0, &v10);
}
