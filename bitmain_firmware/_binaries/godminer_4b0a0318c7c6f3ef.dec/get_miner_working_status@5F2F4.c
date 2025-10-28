int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  char v2; // r3

  if ( !byte_196B6C )
  {
    byte_196B70 = 0;
    byte_196B71 = 0;
    byte_196B72 = 0;
    byte_196B73 = 0;
    byte_196B74 = 0;
    byte_196B75 = 0;
    byte_196B77 = 0;
    byte_196B78 = 0;
    byte_196B6C = 1;
    byte_196B76 = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_196B74;
  v2 = byte_196B78;
  *(_DWORD *)result = *(_DWORD *)&byte_196B70;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 8) = v2;
  return result;
}
