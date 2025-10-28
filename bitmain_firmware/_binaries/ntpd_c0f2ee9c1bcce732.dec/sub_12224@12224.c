int __fastcall sub_12224(int a1, int a2)
{
  int *v4; // r0
  int v5; // r2
  int result; // r0

  v4 = (int *)sub_4F524(12);
  v5 = dword_CA610;
  v4[1] = a1;
  v4[2] = a2;
  *v4 = v5;
  dword_CA610 = (int)v4;
  if ( (unsigned int)a1 >= 0x400 )
  {
    sub_4FE78(3, "Too many sockets in use, FD_SETSIZE %d exceeded", 1024);
    exit(1);
  }
  result = dword_CA584[a1 >> 5];
  if ( a1 >= dword_CA604 )
    dword_CA604 = a1;
  dword_CA584[a1 >> 5] = result | (1 << (a1 & 0x1F));
  return result;
}
