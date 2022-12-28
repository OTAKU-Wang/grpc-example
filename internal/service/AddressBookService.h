//
// Created by wangm on 2022/12/27.
//

#ifndef GRPC_EXAMPLE_ADDRESSBOOKSERVICE_H
#define GRPC_EXAMPLE_ADDRESSBOOKSERVICE_H


#include "address.pb.h"
#include "addressbook.grpc.pb.h"

class AddressBookService final : public address::AddressBook::Service{

};


#endif //GRPC_EXAMPLE_ADDRESSBOOKSERVICE_H
