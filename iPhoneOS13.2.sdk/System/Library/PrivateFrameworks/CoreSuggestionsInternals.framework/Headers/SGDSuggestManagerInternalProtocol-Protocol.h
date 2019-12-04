//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerInternalHarvestProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSString, NSURL, SGRecordId;

@protocol SGDSuggestManagerInternalProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerInternalHarvestProtocol>
- (void)deleteCloudKitZoneWithCompletion:(void (^)(SGXPCResponse *))arg1;
- (void)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 withCompletion:(void (^)(SGXPCResponse1 *))arg5;
- (void)sleepWithCompletion:(void (^)(SGXPCResponse *))arg1;
- (void)daemonExitWithCompletion:(void (^)(SGXPCResponse *))arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(void (^)(SGXPCResponse *))arg1;
- (void)drainQueueCompletelyWithCompletion:(void (^)(SGXPCResponse *))arg1;
- (void)spotlightReimportFromIdentifier:(NSString *)arg1 forPersonHandle:(NSString *)arg2 startDate:(NSDate *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(SGXPCResponse *))arg5;
- (void)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 completion:(void (^)(SGXPCResponse *))arg3;
- (void)addSearchableItems:(NSArray *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(SGXPCResponse1 *))arg6;
- (void)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(SGXPCResponse1 *))arg6;
- (void)clearCachesFully:(_Bool)arg1 withCompletion:(void (^)(SGXPCResponse *))arg2;
- (void)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)realtimeSuggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 extractionDate:(NSDate *)arg4 withCompletion:(void (^)(SGXPCResponse1 *))arg5;
- (void)resetConfirmationAndRejectionHistory:(void (^)(SGXPCResponse *))arg1;
- (void)sendRTCLogsWithCompletion:(void (^)(SGXPCResponse1 *))arg1;
- (void)eventFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(SGXPCResponse1 *))arg6;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(SGXPCResponse1 *))arg5;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
@end

