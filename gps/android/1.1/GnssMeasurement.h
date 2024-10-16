/*
 * Copyright (c) 2017-2018, The Linux Foundation. All rights reserved.
 * Not a Contribution
 */
/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
*/

#ifndef ANDROID_HARDWARE_GNSS_V1_1_GNSSMEASUREMENT_H
#define ANDROID_HARDWARE_GNSS_V1_1_GNSSMEASUREMENT_H

#include <android/hardware/gnss/1.1/IGnssMeasurement.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include "MeasurementAPIClient.h"

namespace android {
namespace hardware {
namespace gnss {
namespace V1_1 {
namespace implementation {

using ::android::hardware::gnss::V1_1::IGnssMeasurement;
using ::android::hardware::gnss::V1_1::IGnssMeasurementCallback;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::hardware::hidl_vec;
using ::android::hardware::hidl_string;
using ::android::sp;

class MeasurementAPIClient;
struct GnssMeasurement : public IGnssMeasurement {
    GnssMeasurement(const sp<GnssMeasurement>& self);
    ~GnssMeasurement();

    /*
     * Methods from ::android::hardware::gnss::V1_0::IGnssMeasurement follow.
     * These declarations were generated from IGnssMeasurement.hal.
     */
    Return<GnssMeasurement::GnssMeasurementStatus> setCallback(
        const sp<V1_0::IGnssMeasurementCallback>& callback) override;
    Return<void> close() override;

    // Methods from ::android::hardware::gnss::V1_1::IGnssMeasurement follow.
    Return<GnssMeasurement::GnssMeasurementStatus> setCallback_1_1(
            const sp<IGnssMeasurementCallback>& callback,
            bool enableFullTracking) override;

 private:
    struct GnssMeasurementDeathRecipient : hidl_death_recipient {
        GnssMeasurementDeathRecipient(const sp<GnssMeasurement>& gnssMeasurement) :
            mGnssMeasurement(gnssMeasurement) {
        }
        ~GnssMeasurementDeathRecipient() = default;
        virtual void serviceDied(uint64_t cookie, const wp<IBase>& who) override;
        const wp<GnssMeasurement> mGnssMeasurement;
    };

    void handleClientDeath();

    template <typename T>
    Return<IGnssMeasurement::GnssMeasurementStatus> setCallback(
            const sp<T>& callback, sp<T>& myCallback, GnssPowerMode powerMode);
    // this has to be a reference, not a copy
    // because the pointer is not set when mSelf is assigned
    const sp<GnssMeasurement>& mSelf;
    sp<GnssMeasurementDeathRecipient> mGnssMeasurementDeathRecipient = nullptr;
    sp<V1_0::IGnssMeasurementCallback> mGnssMeasurementCbIface = nullptr;
    sp<IGnssMeasurementCallback> mGnssMeasurementCbIface_1_1 = nullptr;
    MeasurementAPIClient* mApi;
};

}  // namespace implementation
}  // namespace V1_1
}  // namespace gnss
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_GNSS_V1_1_GNSSMEASUREMENT_H