//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class AFSettingsConnection, NSString;

@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging>
{
    AFSettingsConnection *_settingsConnection;
}

+ (id)logCategory;
@property(readonly) AFSettingsConnection *settingsConnection; // @synthesize settingsConnection=_settingsConnection;
- (void)main;
- (id)initWithSettingsConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

