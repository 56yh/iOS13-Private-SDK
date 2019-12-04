//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@interface PRRoseSolution : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _mach_continuous_time_valid;
    _Bool _az_valid;
    _Bool _el_valid;
    _Bool _soi_rssi_valid;
    long long _variant;
    unsigned long long _mac_addr;
    double _mach_absolute_time_sec;
    double _mach_continuous_time_sec;
    double _range_m;
    double _range_unc_m;
    double _az_deg;
    double _el_deg;
    double _az_unc_deg;
    double _el_unc_deg;
    double _fov_confidence;
    double _soi_rssi_dbm;
    long long _antenna_type;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long antenna_type; // @synthesize antenna_type=_antenna_type;
@property(readonly, nonatomic) double soi_rssi_dbm; // @synthesize soi_rssi_dbm=_soi_rssi_dbm;
@property(readonly, nonatomic) _Bool soi_rssi_valid; // @synthesize soi_rssi_valid=_soi_rssi_valid;
@property(readonly, nonatomic) double fov_confidence; // @synthesize fov_confidence=_fov_confidence;
@property(readonly, nonatomic) double el_unc_deg; // @synthesize el_unc_deg=_el_unc_deg;
@property(readonly, nonatomic) double az_unc_deg; // @synthesize az_unc_deg=_az_unc_deg;
@property(readonly, nonatomic) double el_deg; // @synthesize el_deg=_el_deg;
@property(readonly, nonatomic) double az_deg; // @synthesize az_deg=_az_deg;
@property(readonly, nonatomic) _Bool el_valid; // @synthesize el_valid=_el_valid;
@property(readonly, nonatomic) _Bool az_valid; // @synthesize az_valid=_az_valid;
@property(readonly, nonatomic) double range_unc_m; // @synthesize range_unc_m=_range_unc_m;
@property(readonly, nonatomic) double range_m; // @synthesize range_m=_range_m;
@property(readonly, nonatomic) double mach_continuous_time_sec; // @synthesize mach_continuous_time_sec=_mach_continuous_time_sec;
@property(readonly, nonatomic) _Bool mach_continuous_time_valid; // @synthesize mach_continuous_time_valid=_mach_continuous_time_valid;
@property(readonly, nonatomic) double mach_absolute_time_sec; // @synthesize mach_absolute_time_sec=_mach_absolute_time_sec;
@property(readonly, nonatomic) unsigned long long mac_addr; // @synthesize mac_addr=_mac_addr;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariant:(long long)arg1 macAddr:(unsigned long long)arg2 machAbsTime_sec:(double)arg3 machContTimeValid:(_Bool)arg4 machContTime_sec:(double)arg5 range_m:(double)arg6 rangeUnc_m:(double)arg7 azValid:(_Bool)arg8 elValid:(_Bool)arg9 az_deg:(double)arg10 el_deg:(double)arg11 azUnc_deg:(double)arg12 elUnc_deg:(double)arg13 fovConfidence:(double)arg14 soiRssiValid:(_Bool)arg15 soiRssi_dBm:(double)arg16 antennaType:(long long)arg17;

@end

