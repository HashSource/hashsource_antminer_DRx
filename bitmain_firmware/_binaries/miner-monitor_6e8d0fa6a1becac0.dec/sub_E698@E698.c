int __fastcall sub_E698(int a1, int a2, int a3, void (__fastcall *a4)(int, int, int, int))
{
  int v6; // r4
  int *v7; // r12
  int v8; // r10
  int v9; // r11
  int v10; // r9
  int v11; // r5
  _BYTE v13[4095]; // [sp+0h] [bp-1014h] BYREF
  int v14; // [sp+1000h] [bp-14h]
  int v15; // [sp+1004h] [bp-10h]
  int v16; // [sp+1008h] [bp-Ch]
  int v17; // [sp+100Ch] [bp-8h]

  v15 = a1;
  v16 = a2;
  v17 = a3;
  v6 = a2;
  if ( a2 != a3 )
  {
    v14 = v15;
    do
    {
      v7 = (int *)(v14 + 4111 * v6);
      v8 = *v7;
      v9 = v7[1];
      v10 = v7[2];
      v11 = v7[3];
      memcpy(v13, v7 + 4, sizeof(v13));
      a4(v8, v9, v10, v11);
      v6 = (v6 + 1) % 9;
    }
    while ( v6 != a3 );
  }
  putchar(10);
  return 1;
}
