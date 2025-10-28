int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_17B0F4 )
  {
    byte_17B0F8 = 0;
    byte_17B0F9 = 0;
    byte_17B0FA = 0;
    byte_17B0FB = 0;
    byte_17B0FC = 0;
    byte_17B0FD = 0;
    byte_17B0FF = 0;
    byte_17B100 = 0;
    byte_17B0F4 = 1;
    byte_17B0FE = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_17B0FC;
  v2 = byte_17B100;
  *(_DWORD *)result = *(_DWORD *)&byte_17B0F8;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
