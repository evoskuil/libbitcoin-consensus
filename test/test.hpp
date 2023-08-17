/**
 * Copyright (c) 2011-2023 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_CONSENSUS_TEST_TEST_HPP
#define LIBBITCOIN_CONSENSUS_TEST_TEST_HPP

#include <string>
#include <vector>

typedef std::vector<uint8_t> data_chunk;

bool decode_base16(data_chunk& out, const std::string& in);

// Set valid to false to establish a parse failure expectation.
data_chunk mnemonic_to_data(const std::string& mnemonic, bool valid=true);

#endif
