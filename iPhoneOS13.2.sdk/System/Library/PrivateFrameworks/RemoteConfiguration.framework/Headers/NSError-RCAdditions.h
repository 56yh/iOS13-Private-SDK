//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSError (RCAdditions)
+ (id)rc_endpointErrorWithUnderlyingEndpointErrors:(id)arg1;
+ (id)rc_parsingError;
+ (id)rc_missingConfigErrorWithUnderlyingError:(id)arg1;
+ (id)rc_offlineErrorWithReason:(long long)arg1;
+ (id)rc_notAvailableError;
+ (id)rc_notCachedError;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
- (_Bool)rc_isOfflineErrorOfflineReason:(long long *)arg1;
- (_Bool)rc_isOfflineError;
- (_Bool)rc_isOperationThrottledError;
- (_Bool)rc_isServiceUnavailableError;
- (_Bool)rc_isCancellationError;
- (_Bool)rc_isNetworkUnavailableError;
- (_Bool)rc_shouldRetry;
@end

