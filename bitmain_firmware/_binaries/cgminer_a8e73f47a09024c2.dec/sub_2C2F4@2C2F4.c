int __fastcall sub_2C2F4(int a1)
{
  _BYTE buf[5]; // [sp+7h] [bp-5h] BYREF

  if ( recv(a1, buf, 1u, 0) == -1 )
    return -1;
  else
    return buf[0];
}
