//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject
{
    NSObject<OS_dispatch_data> *_partialFrame;
    _Bool _headerInfoRead;
    _Bool _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;
- (id)popRawFrame;
- (void)reset;
- (void)_readFrameHeaderIfPossible;
- (void)pushFrameData:(id)arg1;
- (unsigned long long)bytesNeededForCurrentFrame;
- (_Bool)hasPartialData;
- (_Bool)hasCompleteFrame;
- (_Bool)hasFailed;
- (id)init;

@end

