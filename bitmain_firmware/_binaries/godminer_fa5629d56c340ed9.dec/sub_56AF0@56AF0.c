int __fastcall sub_56AF0(int a1, int a2)
{
  int current_voltage; // r0
  int v4; // r4
  int v5; // r7
  int v6; // r5
  int v7; // r6

  current_voltage = get_current_voltage();
  v4 = a2 - current_voltage;
  if ( a2 == current_voltage )
    return a2 - current_voltage;
  v6 = current_voltage;
  if ( a2 - current_voltage < 0 )
  {
    v7 = -10;
    if ( (int)abs32(v4) > 10 )
    {
      do
      {
LABEL_7:
        v6 += v7;
        v4 -= v7;
        v5 = set_voltage_MP2973(v6);
      }
      while ( (int)abs32(v4) > 10 );
      goto LABEL_8;
    }
  }
  else
  {
    v7 = 10;
    if ( (int)abs32(v4) > 10 )
      goto LABEL_7;
  }
  v5 = 0;
LABEL_8:
  if ( a2 != v6 )
    v5 = set_voltage_MP2973(a2);
  set_current_voltage(a2);
  return v5;
}
