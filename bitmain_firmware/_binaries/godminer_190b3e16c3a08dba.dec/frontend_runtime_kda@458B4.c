void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_17ACC0 = (int)stratum_connect;
  dword_17ACC4 = (int)stratum_disconnect;
  dword_17ACC8 = (int)stratum_recv_line;
  dword_17ACCC = (int)stratum_send_line;
  dword_17ACD0 = (int)stratum_login_base;
  dword_17ACD4 = (int)stratum_handle_method_base;
  dword_17ACD8 = (int)pre_stratum_handle_method_base;
  dword_17ACDC = (int)stratum_handle_response_base;
  dword_17ACE0 = (int)sub_4581C;
  dword_17ACE4 = (int)sub_45280;
  dword_17ACE8 = (int)stratum_subscribe_base;
  dword_17ACEC = (int)stratum_authorize_base;
  dword_17ACF0 = (int)sub_45548;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_17ACF4 = (int)sub_452B4;
  dword_17ACF8 = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_17AD00 = v0;
  dword_17ACFC = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_17ACC0, 0x54u);
}
