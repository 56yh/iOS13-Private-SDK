//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPDataDetectors : NSObject
{
}

+ (_Bool)detectedDataInString:(id)arg1 scanRange:(struct _NSRange)arg2;
+ (id)scanString:(id)arg1 scanRanges:(id)arg2;
+ (id)calculateScanRanges:(id)arg1 changedRange:(struct _NSRange)arg2;
+ (void)registerDataDetectorClass:(Class)arg1;

@end

