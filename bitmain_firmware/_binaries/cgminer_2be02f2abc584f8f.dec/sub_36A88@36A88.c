int __fastcall sub_36A88(int a1, int a2, int a3, int a4)
{
  char *v4; // r1
  int result; // r0

  if ( a4 )
    v4 = "{\"STATUS\":\"RESTART\"";
  else
    v4 = "RESTART";
  result = sub_36A68(a1, v4);
  byte_75AAC = 1;
  byte_75AAD = 1;
  return result;
}
