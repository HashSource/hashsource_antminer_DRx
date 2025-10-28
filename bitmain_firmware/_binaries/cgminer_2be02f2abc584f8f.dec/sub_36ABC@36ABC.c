int __fastcall sub_36ABC(int a1, int a2, int a3, int a4)
{
  char *v4; // r1
  int result; // r0

  if ( a4 )
    v4 = "{\"STATUS\":\"BYE\"";
  else
    v4 = "BYE";
  result = sub_36A68(a1, v4);
  byte_75AAC = 1;
  byte_75AAE = 1;
  return result;
}
