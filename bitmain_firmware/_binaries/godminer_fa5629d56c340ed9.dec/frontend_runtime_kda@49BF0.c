void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1976F4 = (int)stratum_connect;
  dword_1976F8 = (int)stratum_disconnect;
  dword_1976FC = (int)stratum_recv_line;
  dword_197700 = (int)stratum_send_line;
  dword_197704 = (int)stratum_login_base;
  dword_197708 = (int)stratum_handle_method_base;
  dword_19770C = (int)pre_stratum_handle_method_base;
  dword_197710 = (int)stratum_handle_response_base;
  dword_197714 = (int)sub_49B58;
  dword_197718 = (int)sub_495BC;
  dword_19771C = (int)stratum_subscribe_base;
  dword_197720 = (int)stratum_authorize_base;
  dword_197724 = (int)sub_49884;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_197728 = (int)sub_495F0;
  dword_19772C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_197734 = v0;
  dword_197730 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1976F4, 0x54u);
}
