//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPDataDetectorProtocol-Protocol.h>

@class NSString;

@interface TSWPURLDataDetector : NSObject <TSWPDataDetectorProtocol>
{
}

+ (id)newURLFromString:(id)arg1;
+ (id)newArrayByScanningString:(id)arg1 scanRange:(struct _NSRange)arg2;
+ (id)scanString:(id)arg1 scanRange:(struct _NSRange)arg2;
+ (struct _NSRange)calculateScanRangeForString:(id)arg1 changedRange:(struct _NSRange)arg2;
+ (struct _NSRange)expandValidRange:(struct _NSRange)arg1 inString:(id)arg2;
+ (void)initURLCharacterSets;
+ (void)setInvalidURLSchemes:(id)arg1;
+ (id)detectorIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

