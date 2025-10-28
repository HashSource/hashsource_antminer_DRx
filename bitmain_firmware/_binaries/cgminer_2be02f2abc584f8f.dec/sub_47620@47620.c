int __fastcall sub_47620(int a1)
{
  double v1; // d7
  int v2; // r5
  int v3; // t1
  int i; // r4
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v1 = 1438.749 - (double)a1 * 129.4922 / 100.0;
  if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
  {
    snprintf(s, 0x800u, "set voltage = %.6f  real:%u mv", 1438.749 - (double)a1 * 129.4922 / 100.0, a1);
    sub_3F1C0(5, s, 0);
  }
  v2 = 603403;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v3 = *(unsigned __int8 *)++v2;
    if ( v3 == 1 )
    {
      pthread_mutex_lock(&stru_75D80);
      sub_44838(i, (unsigned __int8)(unsigned int)v1);
      pthread_mutex_unlock(&stru_75D80);
    }
    sub_2FF20();
  }
  return sub_2FF20();
}
