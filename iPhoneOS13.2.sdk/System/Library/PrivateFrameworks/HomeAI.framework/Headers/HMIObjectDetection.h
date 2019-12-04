//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface HMIObjectDetection : NSObject <NSSecureCoding>
{
    int _labelIndex;
    double _confidence;
    struct CGRect _boundingBox;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly) double confidence; // @synthesize confidence=_confidence;
@property(readonly) int labelIndex; // @synthesize labelIndex=_labelIndex;
- (id)description;
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect)arg3;
- (id)initWithLabelIndex:(int)arg1 confidence:(double)arg2 unclampedBoundingBox:(struct CGRect)arg3;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

