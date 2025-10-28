int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_197B80 )
  {
    byte_197B84 = 0;
    byte_197B85 = 0;
    byte_197B86 = 0;
    byte_197B87 = 0;
    byte_197B88 = 0;
    byte_197B89 = 0;
    byte_197B8B = 0;
    byte_197B8C = 0;
    byte_197B80 = 1;
    byte_197B8A = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_197B88;
  v2 = byte_197B8C;
  *(_DWORD *)result = *(_DWORD *)&byte_197B84;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
