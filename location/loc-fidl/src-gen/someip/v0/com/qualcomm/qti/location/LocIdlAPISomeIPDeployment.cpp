/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v0/com/qualcomm/qti/location/LocIdlAPISomeIPDeployment.hpp>

namespace v0 {
namespace com {
namespace qualcomm {
namespace qti {
namespace location {
namespace LocIdlAPI_ {

// Type-specific deployments
IDLGnssReportCbInfoMaskDeployment_t IDLGnssReportCbInfoMaskDeployment(32, false);
IDLEngineReportCbMaskDeployment_t IDLEngineReportCbMaskDeployment(32, false);
IDLLocationCapabilitiesMaskDeployment_t IDLLocationCapabilitiesMaskDeployment(64, false);
IDLGnssSvOptionsMaskDeployment_t IDLGnssSvOptionsMaskDeployment(32, false);
IDLLocationFlagsMaskDeployment_t IDLLocationFlagsMaskDeployment(32, false);
IDLLocationTechnologyMaskDeployment_t IDLLocationTechnologyMaskDeployment(32, false);
IDLLocationReportNavSolutionMaskDeployment_t IDLLocationReportNavSolutionMaskDeployment(32, false);
IDLLocationReportPosDataMaskDeployment_t IDLLocationReportPosDataMaskDeployment(32, false);
IDLGnssSignalTypeMaskDeployment_t IDLGnssSignalTypeMaskDeployment(64, false);
IDLLocationResponseDeployment_t IDLLocationResponseDeployment(32, false);
IDLGnssSvTypeDeployment_t IDLGnssSvTypeDeployment(32, false);
IDLLCALocationInfoFlagMaskDeployment_t IDLLCALocationInfoFlagMaskDeployment(64, false);
IDLLocationReliabilityDeployment_t IDLLocationReliabilityDeployment(32, false);
IDLGnssSvSystemEnumTypeDeployment_t IDLGnssSvSystemEnumTypeDeployment(32, false);
IDLGnssSystemTimeStructTypeFlagsDeployment_t IDLGnssSystemTimeStructTypeFlagsDeployment(32, false);
IDLGnssGloTimeStructTypeFlagsDeployment_t IDLGnssGloTimeStructTypeFlagsDeployment(32, false);
IDLDrCalibrationStatusMaskDeployment_t IDLDrCalibrationStatusMaskDeployment(64, false);
::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSystemTimeDeployment_t IDLGnssSystemTimeDeployment(0, &::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSvSystemEnumTypeDeployment, static_cast< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLSystemTimeStructUnionDeployment_t* >(nullptr));
IDLLocReqEngineTypeMaskDeployment_t IDLLocReqEngineTypeMaskDeployment(32, false);
IDLLocOutputEngineTypeDeployment_t IDLLocOutputEngineTypeDeployment(32, false);
IDLPositioningEngineMaskDeployment_t IDLPositioningEngineMaskDeployment(32, false);
IDLDrSolutionStatusMaskDeployment_t IDLDrSolutionStatusMaskDeployment(64, false);
IDLLocSessionStatusDeployment_t IDLLocSessionStatusDeployment(32, false);
::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocationReportDeployment_t IDLLocationReportDeployment(0, static_cast< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocationDeployment_t* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr), static_cast< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocationReportSvUsedInPositionDeployment_t* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocationReportPositionDynamicsDeployment_t* >(nullptr), &::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSystemTimeDeployment, static_cast< CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasUsageInfoDeployment_t >* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr), &::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocOutputEngineTypeDeployment, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLLAInfoDeployment_t* >(nullptr), static_cast< CommonAPI::SomeIP::ArrayDeployment< CommonAPI::EmptyDeployment >* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::ArrayDeployment< CommonAPI::SomeIP::IntegerDeployment<uint16_t> >* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint64_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<int16_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr));
::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSvDeployment_t IDLGnssSvDeployment(0, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr), &::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSvTypeDeployment, static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr));
IDLGnssDataMaskDeployment_t IDLGnssDataMaskDeployment(32, false);
IDLGnssMeasurementsDataFlagsMaskDeployment_t IDLGnssMeasurementsDataFlagsMaskDeployment(32, false);
IDLGnssMeasurementsStateMaskDeployment_t IDLGnssMeasurementsStateMaskDeployment(32, false);
IDLGnssMeasurementsAdrStateMaskDeployment_t IDLGnssMeasurementsAdrStateMaskDeployment(32, false);
IDLGnssMeasurementsMultipathIndicatorDeployment_t IDLGnssMeasurementsMultipathIndicatorDeployment(32, false);
IDLGnssMeasurementsClockFlagsMaskDeployment_t IDLGnssMeasurementsClockFlagsMaskDeployment(32, false);
::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasurementsDataDeployment_t IDLGnssMeasurementsDataDeployment(0, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint8_t>* >(nullptr), &::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSvTypeDeployment, static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<int64_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<int64_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<int64_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::EmptyDeployment* >(nullptr));
CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasurementsDataDeployment_t > IDLGnssMeasurements_measurementsDeployment(&::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasurementsDataDeployment, 0, 0, 4);
::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasurementsDeployment_t IDLGnssMeasurementsDeployment(0, static_cast< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasurementsClockDeployment_t* >(nullptr), &::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssMeasurements_measurementsDeployment, static_cast< CommonAPI::EmptyDeployment* >(nullptr), static_cast< CommonAPI::SomeIP::IntegerDeployment<int16_t>* >(nullptr));
MapMatchingFeedbackDataValidityDeployment_t MapMatchingFeedbackDataValidityDeployment(64, false);

// Attribute-specific deployments

// Argument-specific deployment

// Broadcast-specific deployments
CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocationReportDeployment_t > EngineLocations_engLocationsDeployment(&::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLLocationReportDeployment, 0, 0, 4);
CommonAPI::SomeIP::ArrayDeployment< ::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSvDeployment_t > GnssSv_gnssSvsDeployment(&::v0::com::qualcomm::qti::location::LocIdlAPI_::IDLGnssSvDeployment, 0, 0, 4);

} // namespace LocIdlAPI_
} // namespace location
} // namespace qti
} // namespace qualcomm
} // namespace com
} // namespace v0
