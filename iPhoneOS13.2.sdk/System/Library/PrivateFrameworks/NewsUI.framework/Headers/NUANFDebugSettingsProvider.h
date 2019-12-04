//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUANFDebugSettingsProvider-Protocol.h>

@class NSString;

@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider>
{
    _Bool _viewportDebuggingEnabled;
    _Bool _testingConditionEnabled;
}

@property(readonly, nonatomic) _Bool testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(readonly, nonatomic) _Bool viewportDebuggingEnabled; // @synthesize viewportDebuggingEnabled=_viewportDebuggingEnabled;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

