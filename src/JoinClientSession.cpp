//#include "JoinClientSession.h"

//#include <iostream>

//namespace bulk {

//JoinClientSession::JoinClientSession(ba::ip::tcp::socket sock) :
//  bulk_size_{bulk_size}, sock_{std::move(sock)} {
//}

//void JoinClientSession::start() {
//  handle_ = bulk::CmdProcessor::get_instance().create_context(bulk_size_);
//  self_   = shared_from_this();
//  handle_read();
//}

//void JoinClientSession::handle_read() {
//  sock_.async_read_some(ba::buffer(buf_), [this](const boost::system::error_code& ec, std::size_t len) {
//    if (!ec) {
//      bulk::CmdProcessor::get_instance().process(handle_, buf_.data(), len);
//      handle_read();
//    } else {
//      bulk::CmdProcessor::get_instance().destroy_context(handle_);
//      sock_.close();
//      self_.reset();
//    }
//  });
//}

//} // namespace bulk.
