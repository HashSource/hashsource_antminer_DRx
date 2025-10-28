int __fastcall sub_54BA4(int result, int **a2, int *a3)
{
  int *v3; // r3

  v3 = *a2;
  if ( *a2 == (int *)(result + 12) && v3 == a2[1] )
  {
    a3[1] = (int)v3;
    *a3 = *(_DWORD *)(result + 12);
    *(_DWORD *)(*(_DWORD *)(result + 12) + 4) = a3;
    *(_DWORD *)(result + 12) = a3;
    a2[1] = a3;
    *a2 = a3;
  }
  else
  {
    a3[1] = (int)v3;
    *a3 = *v3;
    result = *v3;
    *(_DWORD *)(*v3 + 4) = a3;
    *v3 = (int)a3;
    *a2 = a3;
  }
  return result;
}
