int __fastcall blake2s_init_param(int *a1, int *a2)
{
  int *v2; // r5
  int *v5; // r1
  int v6; // r0
  int *v7; // r3
  int v8; // t1

  v2 = a1 + 8;
  memset(a1 + 8, 0, 0x95u);
  a1[1] = -1150833019;
  a1[2] = 1013904242;
  a1[3] = -1521486534;
  a1[4] = 1359893119;
  a1[5] = -1694144372;
  v5 = a2;
  a1[6] = 528734635;
  v6 = 1779033703;
  v7 = a1;
  a1[7] = 1541459225;
  *a1 = 1779033703;
  while ( 1 )
  {
    v8 = *v5++;
    *v7++ = v8 ^ v6;
    if ( v7 == v2 )
      break;
    v6 = *v7;
  }
  return 0;
}
