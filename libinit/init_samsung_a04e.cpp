/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t a042f_info = {
    .hwc_value = "",
    .sku_value = "a04e",

    .brand = "Samsung",
    .device = "a04e",
    .marketname = "Samsung Galaxy A04e",
    .model = "SM-A042F",
    .build_fingerprint = "samsung/a04exx/a04e:12/SP1A.210812.016/A042FXXSAEXJ3:user/release-keys"
};

static const variant_info_t a042m_info = {
    .hwc_value = "",
    .sku_value = "a04e",

    .brand = "Samsung",
    .device = "a04e",
    .marketname = "Samsung Galaxy A04e",
    .model = "SM-A042M",
    .build_fingerprint = "samsung/a04exx/a04e:12/SP1A.210812.016/A042MUBSBEXK2:user/release-keys"
};

static const std::vector<variant_info_t> variants = {
    a042m_info,
    a042f_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
