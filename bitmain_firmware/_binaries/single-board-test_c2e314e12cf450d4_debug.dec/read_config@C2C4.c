int read_config()
{
  int v0; // r3
  int v1; // r0
  int v2; // r0
  char s[1024]; // [sp+4h] [bp+4h] BYREF
  FILE *stream; // [sp+404h] [bp+404h]
  int v6; // [sp+408h] [bp+408h]
  char *v7; // [sp+40Ch] [bp+40Ch]
  int i; // [sp+410h] [bp+410h]
  char *v9; // [sp+414h] [bp+414h]

  v7 = &Conf;
  memset(s, 0, sizeof(s));
  v6 = 0;
  stream = fopen("/media/card/Config.ini", "r");
  while ( fgets(s, 1023, stream) )
  {
    if ( s[0] != 35 && s[1] != 35 )
    {
      v9 = strstr(s, "Name=");
      if ( v9 )
      {
        v9 += 5;
        for ( i = 0; i <= 63; ++i )
        {
          v7[i] = *v9;
          if ( *++v9 == 10 || *v9 == 13 )
            break;
        }
        gName_len = ++i;
        v7[i] = 0;
        gHashBoard_BBD12601 = 0;
        gHashBoard_BBD25601 = 0;
        if ( *v7 == 66
          && v7[1] == 66
          && v7[2] == 68
          && v7[3] == 49
          && v7[4] == 50
          && v7[5] == 54
          && v7[6] == 48
          && v7[7] == 49 )
        {
          gHashBoard_BBD12601 = 1;
          printf("\n---%s: gHashBoard_BBD12601\n\n", "read_config");
        }
        else if ( *v7 == 66
               && v7[1] == 66
               && v7[2] == 68
               && v7[3] == 50
               && v7[4] == 53
               && v7[5] == 54
               && v7[6] == 48
               && v7[7] == 49 )
        {
          gHashBoard_BBD25601 = 1;
          printf("\n---%s: gHashBoard_BBD25601\n\n", "read_config");
        }
      }
      else
      {
        v9 = strstr(s, "pattern_number=");
        if ( v9 )
        {
          v9 += 15;
          _isoc99_sscanf(v9, "%d", v7 + 64);
        }
        else
        {
          v9 = strstr(s, "AsicNum=");
          if ( v9 )
          {
            v9 += 8;
            _isoc99_sscanf(v9, "%d", v7 + 108);
          }
          else
          {
            v9 = strstr(s, "AsicType=");
            if ( v9 )
            {
              v9 += 9;
              _isoc99_sscanf(v9, "%d", v7 + 116);
            }
            else
            {
              v9 = strstr(s, "Timeout=");
              if ( v9 )
              {
                v9 += 8;
                _isoc99_sscanf(v9, "%d", v7 + 200);
              }
              else
              {
                v9 = strstr(s, "Freq1=");
                if ( v9 )
                {
                  v9 += 6;
                  _isoc99_sscanf(v9, "%d", v7 + 72);
                }
                else
                {
                  v9 = strstr(s, "Freq2=");
                  if ( v9 )
                  {
                    v9 += 6;
                    _isoc99_sscanf(v9, "%d", v7 + 76);
                  }
                  else
                  {
                    v9 = strstr(s, "Freq3=");
                    if ( v9 )
                    {
                      v9 += 6;
                      _isoc99_sscanf(v9, "%d", v7 + 80);
                    }
                    else
                    {
                      v9 = strstr(s, "Freq4=");
                      if ( v9 )
                      {
                        v9 += 6;
                        _isoc99_sscanf(v9, "%d", v7 + 84);
                      }
                      else
                      {
                        v9 = strstr(s, "Freq5=");
                        if ( v9 )
                        {
                          v9 += 6;
                          _isoc99_sscanf(v9, "%d", v7 + 88);
                        }
                        else
                        {
                          v9 = strstr(s, "Freq6=");
                          if ( v9 )
                          {
                            v9 += 6;
                            _isoc99_sscanf(v9, "%d", v7 + 92);
                          }
                          else
                          {
                            v9 = strstr(s, "Freq7=");
                            if ( v9 )
                            {
                              v9 += 6;
                              _isoc99_sscanf(v9, "%d", v7 + 96);
                            }
                            else
                            {
                              v9 = strstr(s, "Freq8=");
                              if ( v9 )
                              {
                                v9 += 6;
                                _isoc99_sscanf(v9, "%d", v7 + 100);
                              }
                              else
                              {
                                v9 = strstr(s, "Freq9=");
                                if ( v9 )
                                {
                                  v9 += 6;
                                  _isoc99_sscanf(v9, "%d", v7 + 104);
                                }
                                else
                                {
                                  v9 = strstr(s, "Voltage1=");
                                  if ( v9 )
                                  {
                                    v9 += 9;
                                    _isoc99_sscanf(v9, "%d", v7 + 160);
                                    if ( *((_DWORD *)v7 + 40) )
                                      ++gHowManyVoltageLevel;
                                  }
                                  else
                                  {
                                    v9 = strstr(s, "Voltage2=");
                                    if ( v9 )
                                    {
                                      v9 += 9;
                                      _isoc99_sscanf(v9, "%d", v7 + 164);
                                      if ( *((_DWORD *)v7 + 41) )
                                        ++gHowManyVoltageLevel;
                                    }
                                    else
                                    {
                                      v9 = strstr(s, "Voltage3=");
                                      if ( v9 )
                                      {
                                        v9 += 9;
                                        _isoc99_sscanf(v9, "%d", v7 + 168);
                                        if ( *((_DWORD *)v7 + 42) )
                                          ++gHowManyVoltageLevel;
                                      }
                                      else
                                      {
                                        v9 = strstr(s, "Voltage4=");
                                        if ( v9 )
                                        {
                                          v9 += 9;
                                          _isoc99_sscanf(v9, "%d", v7 + 172);
                                          if ( *((_DWORD *)v7 + 43) )
                                            ++gHowManyVoltageLevel;
                                        }
                                        else
                                        {
                                          v9 = strstr(s, "Voltage5=");
                                          if ( v9 )
                                          {
                                            v9 += 9;
                                            _isoc99_sscanf(v9, "%d", v7 + 176);
                                            if ( *((_DWORD *)v7 + 44) )
                                              ++gHowManyVoltageLevel;
                                          }
                                          else
                                          {
                                            v9 = strstr(s, "Voltage6=");
                                            if ( v9 )
                                            {
                                              v9 += 9;
                                              _isoc99_sscanf(v9, "%d", v7 + 180);
                                              if ( *((_DWORD *)v7 + 45) )
                                                ++gHowManyVoltageLevel;
                                            }
                                            else
                                            {
                                              v9 = strstr(s, "Voltage7=");
                                              if ( v9 )
                                              {
                                                v9 += 9;
                                                _isoc99_sscanf(v9, "%d", v7 + 184);
                                                if ( *((_DWORD *)v7 + 46) )
                                                  ++gHowManyVoltageLevel;
                                              }
                                              else
                                              {
                                                v9 = strstr(s, "Voltage8=");
                                                if ( v9 )
                                                {
                                                  v9 += 9;
                                                  _isoc99_sscanf(v9, "%d", v7 + 188);
                                                  if ( *((_DWORD *)v7 + 47) )
                                                    ++gHowManyVoltageLevel;
                                                }
                                                else
                                                {
                                                  v9 = strstr(s, "Voltage9=");
                                                  if ( v9 )
                                                  {
                                                    v9 += 9;
                                                    _isoc99_sscanf(v9, "%d", v7 + 192);
                                                    if ( *((_DWORD *)v7 + 48) )
                                                      ++gHowManyVoltageLevel;
                                                  }
                                                  else
                                                  {
                                                    v9 = strstr(s, "OpenCoreGap=");
                                                    if ( v9 )
                                                    {
                                                      v9 += 12;
                                                      _isoc99_sscanf(v9, "%d", v7 + 196);
                                                    }
                                                    else
                                                    {
                                                      v9 = strstr(s, "CheckTemp=");
                                                      if ( v9 )
                                                      {
                                                        v9 += 10;
                                                        _isoc99_sscanf(v9, "%d", v7 + 204);
                                                      }
                                                      else
                                                      {
                                                        v9 = strstr(s, "sensor_model=");
                                                        if ( v9 )
                                                        {
                                                          v9 += 13;
                                                          _isoc99_sscanf(v9, "%ud", v7 + 252);
                                                        }
                                                        else
                                                        {
                                                          v9 = strstr(s, "remote_local_gap=");
                                                          if ( v9 )
                                                          {
                                                            v9 += 17;
                                                            _isoc99_sscanf(v9, "%ud", v7 + 256);
                                                          }
                                                          else
                                                          {
                                                            v9 = strstr(s, "TempSensor1=");
                                                            if ( v9 )
                                                            {
                                                              v9 += 12;
                                                              _isoc99_sscanf(v9, "%ud", v7 + 208);
                                                              if ( v7[208] )
                                                                ++gSensor_number;
                                                            }
                                                            else
                                                            {
                                                              v9 = strstr(s, "TempSensor2=");
                                                              if ( v9 )
                                                              {
                                                                v9 += 12;
                                                                _isoc99_sscanf(v9, "%ud", v7 + 209);
                                                                if ( v7[209] )
                                                                  ++gSensor_number;
                                                              }
                                                              else
                                                              {
                                                                v9 = strstr(s, "TempSensor3=");
                                                                if ( v9 )
                                                                {
                                                                  v9 += 12;
                                                                  _isoc99_sscanf(v9, "%ud", v7 + 210);
                                                                  if ( v7[210] )
                                                                    ++gSensor_number;
                                                                }
                                                                else
                                                                {
                                                                  v9 = strstr(s, "StartSensor=");
                                                                  if ( v9 )
                                                                  {
                                                                    v9 += 12;
                                                                    _isoc99_sscanf(v9, "%d", v7 + 211);
                                                                  }
                                                                  else
                                                                  {
                                                                    v9 = strstr(s, "StartTemp=");
                                                                    if ( v9 )
                                                                    {
                                                                      v9 += 10;
                                                                      _isoc99_sscanf(v9, "%d", v7 + 212);
                                                                    }
                                                                    else
                                                                    {
                                                                      v9 = strstr(s, "TargetTemp=");
                                                                      if ( v9 )
                                                                      {
                                                                        v9 += 11;
                                                                        _isoc99_sscanf(v9, "%d", v7 + 213);
                                                                      }
                                                                      else
                                                                      {
                                                                        v9 = strstr(s, "add_voltage_after_test_ok=");
                                                                        if ( v9 )
                                                                        {
                                                                          v9 += 26;
                                                                          _isoc99_sscanf(v9, "%d", v7 + 224);
                                                                        }
                                                                        else
                                                                        {
                                                                          v9 = strstr(s, "add_voltage_value=");
                                                                          if ( v9 )
                                                                          {
                                                                            v9 += 18;
                                                                            _isoc99_sscanf(v9, "%d", v7 + 228);
                                                                          }
                                                                          else
                                                                          {
                                                                            v9 = strstr(s, "AlarmTemp=");
                                                                            if ( v9 )
                                                                            {
                                                                              v9 += 10;
                                                                              _isoc99_sscanf(v9, "%d", v7 + 214);
                                                                            }
                                                                            else
                                                                            {
                                                                              v9 = strstr(s, "HeatingUpTime=");
                                                                              if ( v9 )
                                                                              {
                                                                                v9 += 14;
                                                                                _isoc99_sscanf(v9, "%d", v7 + 216);
                                                                              }
                                                                              else
                                                                              {
                                                                                v9 = strstr(s, "MaxTempGap=");
                                                                                if ( v9 )
                                                                                {
                                                                                  v9 += 11;
                                                                                  _isoc99_sscanf(v9, "%d", v7 + 220);
                                                                                }
                                                                                else
                                                                                {
                                                                                  v9 = strstr(s, "Invalid_Asic_Num=");
                                                                                  if ( v9 )
                                                                                  {
                                                                                    v9 += 17;
                                                                                    _isoc99_sscanf(v9, "%d", v7 + 232);
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    v9 = strstr(s, "Invalid_Core_Num=");
                                                                                    if ( v9 )
                                                                                    {
                                                                                      v9 += 17;
                                                                                      _isoc99_sscanf(v9, "%d", v7 + 236);
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      v9 = strstr(
                                                                                             s,
                                                                                             "Least_nonce_per_core=");
                                                                                      if ( v9 )
                                                                                      {
                                                                                        v9 += 21;
                                                                                        _isoc99_sscanf(
                                                                                          v9,
                                                                                          "%d",
                                                                                          v7 + 240);
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        v9 = strstr(
                                                                                               s,
                                                                                               "Most_lost_nonce_total=");
                                                                                        if ( v9 )
                                                                                        {
                                                                                          v9 += 22;
                                                                                          _isoc99_sscanf(
                                                                                            v9,
                                                                                            "%d",
                                                                                            v7 + 244);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          v9 = strstr(s, "Most_HW_Num=");
                                                                                          if ( v9 )
                                                                                          {
                                                                                            v9 += 12;
                                                                                            _isoc99_sscanf(
                                                                                              v9,
                                                                                              "%d",
                                                                                              v7 + 248);
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            v9 = strstr(
                                                                                                   s,
                                                                                                   "close_power_delay=");
                                                                                            if ( v9 )
                                                                                            {
                                                                                              v9 += 18;
                                                                                              _isoc99_sscanf(
                                                                                                v9,
                                                                                                "%d",
                                                                                                v7 + 264);
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *((_DWORD *)v7 + 27) == 1 )
  {
    gChain_Asic_Interval = 256;
    if ( *((_DWORD *)v7 + 29) == 1722 )
    {
      strcpy(dest, BM1722_WorkDataPathPrefix[0]);
      strcpy(byte_2B636C, DCR_WorkDataFilePrefix);
      v0 = (int)v7;
      *((_DWORD *)v7 + 28) = 120;
    }
    else
    {
      v0 = 1725;
      if ( *((_DWORD *)v7 + 29) == 1725 )
      {
        strcpy(dest, BM1725_WorkDataPathPrefix[0]);
        strcpy(byte_2B636C, DCR_WorkDataFilePrefix);
        v0 = (int)v7;
        *((_DWORD *)v7 + 28) = 276;
      }
    }
  }
  else if ( gHashBoard_BBD12601 || (v0 = (unsigned __int8)gHashBoard_BBD25601, gHashBoard_BBD25601) )
  {
    if ( *((_DWORD *)v7 + 29) == 1722 )
    {
      strcpy(dest, BM1722_WorkDataPathPrefix[0]);
      strcpy(byte_2B636C, DCR_WorkDataFilePrefix);
      *((_DWORD *)v7 + 28) = 120;
      *((_DWORD *)v7 + 29) = 1722;
      v1 = 256 / calculate_asic_number(dword_336848);
      v0 = (int)&gChain_Asic_Interval;
      gChain_Asic_Interval = v1;
    }
    else
    {
      v0 = 1725;
      if ( *((_DWORD *)v7 + 29) == 1725 )
      {
        strcpy(dest, BM1725_WorkDataPathPrefix[0]);
        strcpy(byte_2B636C, DCR_WorkDataFilePrefix);
        *((_DWORD *)v7 + 28) = 276;
        *((_DWORD *)v7 + 29) = 1725;
        v2 = 256 / calculate_asic_number(dword_336848);
        v0 = (int)&gChain_Asic_Interval;
        gChain_Asic_Interval = v2;
      }
    }
  }
  return v0;
}
