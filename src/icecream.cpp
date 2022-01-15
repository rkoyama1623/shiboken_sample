/*
 * This file is part of shiboken_sample
 *
 * Copyright (C) Ryo Koyama.
 *
 * Contact: Ryo Koyama <ryo(dot)koyama[at]outlook(dot)jp>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */
#include "icecream.h"

Icecream::Icecream(const std::string &flavor) : m_flavor(flavor) {};
Icecream* Icecream::clone(){
    return new Icecream(m_flavor);
};
Icecream::~Icecream(){};
const std::string Icecream::getFlavor() {
    return m_flavor;
};
