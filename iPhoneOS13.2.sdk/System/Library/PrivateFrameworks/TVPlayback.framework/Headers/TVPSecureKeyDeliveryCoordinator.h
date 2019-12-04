//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyLoaderDelegate-Protocol.h>

@class NSData, NSMutableSet, NSString, TVPPlaybackReportingEventCollection, TVPSecureKeyLoader;
@protocol TVPSecureKeyDeliveryCoordinatorDelegate;

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate>
{
    _Bool _certFetchInProgress;
    NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *_delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
    TVPSecureKeyLoader *_secureKeyLoader;
    NSData *_certificateData;
    NSMutableSet *_requestsAwaitingCertFetch;
}

+ (_Bool)isSecureKeyDeliveryRequest:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSMutableSet *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(nonatomic) _Bool certFetchInProgress; // @synthesize certFetchInProgress=_certFetchInProgress;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(nonatomic) __weak NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_finishLoadingWithError:(id)arg1 forRequest:(id)arg2;
- (void)_loadSecureKeyRequest:(id)arg1 sendStartReportingEvent:(_Bool)arg2;
- (id)init;
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;
- (void)sendStopRequest;
- (void)loadSecureKeyRequest:(id)arg1;
- (id)initWithSecureKeyLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

