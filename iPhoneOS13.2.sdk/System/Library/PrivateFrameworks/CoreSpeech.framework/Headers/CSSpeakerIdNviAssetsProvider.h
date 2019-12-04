//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NviAssetsProvider-Protocol.h>

@class NSString;

@interface CSSpeakerIdNviAssetsProvider : NSObject <NviAssetsProvider>
{
}

- (_Bool)isDirectionalityLoggingEnabled;
- (float)dirAzimuthEMAParam;
- (_Bool)isDirectionalityAvailable;
- (id)signalProvidersMapForContext:(id)arg1;
- (id)signalProviderToDatasourceMap;
- (_Bool)isSignalProviderDisabledInCFPrefs:(unsigned long long)arg1;
- (id)initWithTaskIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *hepConfigFilepath;
@property(readonly, nonatomic) NSString *nviConfigRoot;
@property(readonly) Class superclass;

@end

