#ifndef _RETURN_ACK_CODE_H_
#define _RETURN_ACK_CODE_H_

// #include "include/net_interface.h"
// #include <map>
// #include <string>
// #include "ca/ca_global.h"

// template<typename Ack>
// void ReturnAckCode(const MsgData& msgdata, std::map<int32_t, std::string> errInfo, Ack & ack, int32_t code, const std::string & extraInfo = "")
// {
// 	ack.set_version(global::kVersion);
// 	ack.set_code(code);
// 	if (extraInfo.size())
// 	{
// 		ack.set_message(extraInfo);
// 	}
// 	else
// 	{
// 		ack.set_message(errInfo[code]);
// 	}

// 	net_send_message<Ack>(msgdata, ack, net_com::Priority::kPriority_High_1); // ReturnAckCode大部分处理交易，默认优先级为high1 ReturnAckCode processes most of the transactions, and the default priority is high1

// 	std::cout<<"net_send_message--->ack"<<std::endl;
// }

#endif // _RETURN_ACK_CODE_H_
