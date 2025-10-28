void *frontend_runtime_kda()
{
  __int64 v0; // r2
  void *v1; // r0

  dword_1966E4 = (int)stratum_connect;
  dword_1966E8 = (int)stratum_disconnect;
  dword_1966EC = (int)stratum_recv_line;
  dword_1966F0 = (int)stratum_send_line;
  dword_1966F4 = (int)stratum_login_base;
  dword_1966F8 = (int)stratum_handle_method_base;
  dword_1966FC = (int)pre_stratum_handle_method_base;
  dword_196700 = (int)stratum_handle_response_base;
  dword_196704 = (int)sub_496CC;
  dword_196708 = (int)sub_49130;
  dword_19670C = (int)stratum_subscribe_base;
  dword_196710 = (int)stratum_authorize_base;
  dword_196714 = (int)sub_493F8;
  LODWORD(v0) = diff_to_target_kda;
  HIDWORD(v0) = target_to_double_diff_kda;
  dword_196718 = (int)sub_49164;
  dword_19671C = (int)stratum_set_diff_or_target_base;
  *(_QWORD *)&dword_196724 = v0;
  dword_196720 = (int)target_to_diff_kda;
  v1 = calloc(1u, 0x54u);
  return memcpy(v1, &dword_1966E4, 0x54u);
}
