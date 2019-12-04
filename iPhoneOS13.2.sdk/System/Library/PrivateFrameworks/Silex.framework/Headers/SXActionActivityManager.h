//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityManager-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXActionActivityManager : NSObject <SXActionActivityManager>
{
    NSMutableDictionary *_activityProviders;
}

@property(readonly, nonatomic) NSMutableDictionary *activityProviders; // @synthesize activityProviders=_activityProviders;
- (id)activityProviderForAction:(id)arg1;
- (id)previewActivityForAction:(id)arg1;
- (id)activityGroupForAction:(id)arg1;
- (void)registerActionActivityProvider:(id)arg1 actionType:(Class)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

