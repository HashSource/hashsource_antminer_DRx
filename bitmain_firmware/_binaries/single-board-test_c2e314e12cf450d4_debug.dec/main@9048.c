int __fastcall main(int argc, const char **argv, const char **envp)
{
  _BYTE s[64]; // [sp+4h] [bp+4h] BYREF
  int key; // [sp+44h] [bp+44h]

  memset(s, 0, sizeof(s));
  key = cgpu_init();
  if ( key < 0 )
    return key;
  key = configMiner();
  if ( key >= 0 )
  {
    display_arguments();
    puts("press key to test!");
    while ( 1 )
    {
      while ( 1 )
      {
        key = read_key(s);
        if ( dword_336848 != 1 )
          break;
        if ( key > 0 && s[0] == 1 )
        {
          if ( dword_336850 == 1722 )
          {
            singleAsicTest_BM1722();
          }
          else if ( dword_336850 == 1725 )
          {
            singleAsicTest_BM1725();
          }
          else
          {
            printf("Single ASIC test: Can't find ASIC type!!! AsicType = %d\n", dword_336850);
          }
        }
      }
      if ( key > 0 && s[0] == 1
        || (unsigned __int8)pattern_test_time < (unsigned int)(unsigned __int8)gHowManyVoltageLevel && pattern_test_time )
      {
        if ( gHashBoard_BBD12601 )
        {
          singleBoardTest_BBD12601();
        }
        else if ( gHashBoard_BBD25601 )
        {
          singleBoardTest_BBD25601();
        }
        else
        {
          printf("%s: Please config HashBoard name in Config.ini\n", "main");
        }
      }
      if ( (unsigned __int8)pattern_test_time >= (unsigned int)(unsigned __int8)gHowManyVoltageLevel )
        pattern_test_time = 0;
    }
  }
  return key;
}
