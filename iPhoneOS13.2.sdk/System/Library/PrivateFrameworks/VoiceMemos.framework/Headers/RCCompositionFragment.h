//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <VoiceMemos/RCDictionaryPListRepresentationCoding-Protocol.h>

@class NSString, NSURL;

@interface RCCompositionFragment : NSObject <NSMutableCopying, NSCopying, RCDictionaryPListRepresentationCoding>
{
    CDStruct_73a5d3ca _timeRangeInContentToUse;
    NSURL *_AVOutputURL;
    double _contentDuration;
    CDStruct_73a5d3ca _timeRangeInComposition;
}

@property(nonatomic) CDStruct_73a5d3ca timeRangeInContentToUse; // @synthesize timeRangeInContentToUse=_timeRangeInContentToUse;
@property(nonatomic) CDStruct_73a5d3ca timeRangeInComposition; // @synthesize timeRangeInComposition=_timeRangeInComposition;
@property(nonatomic) double contentDuration; // @synthesize contentDuration=_contentDuration;
@property(retain, nonatomic) NSURL *AVOutputURL; // @synthesize AVOutputURL=_AVOutputURL;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryPListRepresentation;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (id)fragmentByIntersectingTimeRangeInCompositionWithTimeRange:(CDStruct_73a5d3ca)arg1;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(_Bool)arg1;
- (void)moveAssetsToFragment:(id)arg1;
- (void)deleteFromFilesystem;
@property(readonly, nonatomic) NSURL *waveformURL;
@property(readonly, copy) NSString *description;
- (id)initWithAVOutputURL:(id)arg1 contentDuration:(double)arg2 timeRangeInContentToUse:(CDStruct_73a5d3ca)arg3 timeRangeInComposition:(CDStruct_73a5d3ca)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

