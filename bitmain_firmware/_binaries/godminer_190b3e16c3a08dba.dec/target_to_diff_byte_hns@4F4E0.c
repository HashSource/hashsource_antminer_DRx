int __fastcall target_to_diff_byte_hns(int a1)
{
  int v1; // r1
  int v2; // r4
  int v3; // r0
  int v4; // r3
  int v5; // lr
  int v6; // t1
  int v7; // r2

  v1 = 0;
  v2 = a1 - 1;
  v3 = a1 + 31;
LABEL_2:
  v4 = 7;
  v6 = *(unsigned __int8 *)++v2;
  v5 = v6;
  while ( 1 )
  {
    v7 = v5 >> v4--;
    if ( (v7 & 1) != 0 )
      return v1;
    v1 = (unsigned __int8)(v1 + 1);
    if ( v4 == -1 )
    {
      if ( v2 != v3 )
        goto LABEL_2;
      return v1;
    }
  }
}
