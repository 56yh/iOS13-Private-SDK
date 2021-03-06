//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMRuntimeTest;

@interface IMRuntimeTestRun : NSObject
{
    BOOL _succeeded;
    IMRuntimeTest *_test;
}

@property(getter=hasSucceeded) BOOL succeeded; // @synthesize succeeded=_succeeded;
@property(readonly) IMRuntimeTest *test; // @synthesize test=_test;
// - (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(NSUInteger)arg3 expected:(BOOL)arg4;
- (id)initWithTest:(id)arg1;

@end

