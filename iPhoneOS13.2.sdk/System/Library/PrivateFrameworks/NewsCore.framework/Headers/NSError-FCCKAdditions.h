//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSError (FCCKAdditions)
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 descriptionFormat:(id)arg2;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 description:(id)arg2;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1;
+ (id)fc_missingANFDocumentErrorForArticleID:(id)arg1;
+ (id)fc_missingAssetKeyError;
+ (id)fc_unauthorizedAssetKeyErrorWithWrappingKeyID:(id)arg1;
+ (id)fc_unzipFailedErrorWithErrorCode:(int)arg1;
+ (id)fc_missingAssetError;
+ (id)fc_invalidGapErrorWithUserInfo:(id)arg1;
+ (id)fc_invalidBookmarkErrorWithUserInfo:(id)arg1;
+ (id)fc_missingMagazineGroupError;
+ (id)fc_partialFailureError;
+ (id)fc_blockedInCurrentStorefrontErrorWithIdentifiers:(id)arg1;
+ (id)fc_operationCancelledErrorWithAdditionalUserInfo:(id)arg1;
+ (id)fc_missingResourceErrorWithDescription:(id)arg1;
+ (id)fc_missingAppConfigErrorWithUnderlyingError:(id)arg1;
+ (id)fc_offlineErrorWithReason:(long long)arg1;
+ (id)fc_canaryDownError;
+ (id)fc_notAvailableError;
+ (id)fc_requestDroppedErrorForDroppedFeeds:(unsigned long long)arg1 totalFeeds:(unsigned long long)arg2;
+ (id)fc_feedDroppedError;
+ (id)fc_belowMinimumVersionError;
+ (id)fc_notCachedError;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
- (id)fc_underlyingCKErrorUserInfoValueForKey:(id)arg1 forItemID:(id)arg2;
- (_Bool)fc_hasCKErrorWithCodePassingTest:(id /* block */)arg1;
- (_Bool)fc_isCKErrorWithCodePassingTest:(id /* block */)arg1;
- (_Bool)fc_isCKErrorWithCode:(long long)arg1;
- (_Bool)fc_hasIdentityLostError;
- (_Bool)fc_hasIdentityStillSyncingError;
- (_Bool)fc_isTemporaryNetworkOrServerError;
- (_Bool)fc_isMissingZoneError;
- (_Bool)fc_isCKUnknownItemError;
- (_Bool)fc_isUnknownItemError;
- (_Bool)fc_isOfflineErrorOfflineReason:(long long *)arg1;
- (_Bool)fc_isOfflineError;
- (_Bool)fc_isOperationThrottledError;
- (_Bool)fc_isServiceUnavailableError;
- (_Bool)fc_isCancellationError;
- (_Bool)fc_isNetworkUnavailableError;
- (_Bool)fc_shouldRetry;
@end

