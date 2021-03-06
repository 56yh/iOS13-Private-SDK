//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AttentionAwareness/AWAttentionEvent.h>


@interface AWFaceDetectAttentionEvent : AWAttentionEvent <NSSecureCoding>
{
    BOOL _metadataValid;
    double _pitch;
    double _yaw;
    double _roll;
    NSUInteger _orientation;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) double roll; // @synthesize roll=_roll;
@property(readonly, nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(readonly, nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(readonly, nonatomic, getter=isMetadataValid) BOOL metadataValid; // @synthesize metadataValid=_metadataValid;
- (id)description;
- (id)initWithTimestamp:(double)arg1 tagIndex:(NSUInteger)arg2 faceMetadata:(struct AWFaceDetectMetadata )arg3;
- (void)validateMask;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

