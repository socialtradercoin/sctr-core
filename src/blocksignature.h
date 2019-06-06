// Copyright (c) 2017 The PIVX developers

// Copyright (c) 2019 The SocialTrader developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SCTR_BLOCKSIGNATURE_H
#define SCTR_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //SCTR_BLOCKSIGNATURE_H
