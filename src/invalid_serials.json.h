// Copyright (c) 2018 The PIVX developers

// Copyright (c) 2019 The SocialTrader developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.



#ifndef SCTR_INVALID_SERIALS_JSON_H
#define SCTR_INVALID_SERIALS_JSON_H

#include <string>

std::string LoadInvalidSerials()
{
    std::string str = "[\n"
            "  {\n"
            "    \"s\": \"c9c868bb56eacfc4f3d829528a0ae812dff26619cd38e6c9a0eea1eacddc84\"\n"
            "  },\n"
            "]";
    return str;
}

#endif //SCTR_INVALID_SERIALS_JSON_H
