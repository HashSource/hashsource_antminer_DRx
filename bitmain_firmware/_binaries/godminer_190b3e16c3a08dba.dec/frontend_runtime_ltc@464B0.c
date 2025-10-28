void *frontend_runtime_ltc()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_17AD14 = (int)stratum_connect;
  dword_17AD18 = (int)stratum_disconnect;
  dword_17AD1C = (int)stratum_recv_line;
  dword_17AD20 = (int)stratum_send_line;
  dword_17AD24 = (int)stratum_login_base;
  dword_17AD28 = (int)stratum_handle_method_base;
  dword_17AD2C = (int)pre_stratum_handle_method_base;
  dword_17AD30 = (int)stratum_handle_response_base;
  dword_17AD34 = (int)sub_463E8;
  dword_17AD38 = (int)sub_45C68;
  dword_17AD3C = (int)stratum_subscribe_base;
  dword_17AD40 = (int)stratum_authorize_base;
  dword_17AD44 = (int)sub_45CA0;
  LODWORD(v0) = diff_to_target_ltc;
  HIDWORD(v0) = target_to_double_diff_ltc;
  dword_17AD48 = (int)sub_459B0;
  dword_17AD4C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_17AD54 = v0;
  dword_17AD50 = (int)target_to_diff_ltc;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_17AD14, 0x54u);
}
