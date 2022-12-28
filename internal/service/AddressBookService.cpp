//
// Created by wangm on 2022/12/27.
//

#include "AddressBookService.h"

::grpc::Status GetAddress(::grpc::ServerContext *context, const ::address::NameQuerry *request, ::address::Address *response) {
    std::cout << "Server: GetAddress for \"" << request->name() << "\"." << std::endl;
    response->set_name("Peter Peterson");
    response->set_zip("12345");
    response->set_country("Superland");
    return grpc::Status::OK;
}