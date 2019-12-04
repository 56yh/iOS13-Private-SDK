//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMSourceNode.h>

@interface AXMCoreMotionNode : AXMSourceNode
{
    unsigned long long _samplesPerSecond;
    double _lastSampleTime;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) double lastSampleTime; // @synthesize lastSampleTime=_lastSampleTime;
@property(nonatomic) unsigned long long samplesPerSecond; // @synthesize samplesPerSecond=_samplesPerSecond;
- (void)triggerWithCoreMotionManager:(id)arg1 deviceOrientation:(long long)arg2 cacheKey:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)nodeInitialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

