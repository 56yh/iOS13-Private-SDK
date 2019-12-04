//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <EmailFoundation/EFPubliclyDescribable-Protocol.h>

@class NSString;

@interface NSError (EmailFoundationAdditions) <EFPubliclyDescribable>
+ (id)ef_temporarilyUnavailableError;
+ (id)ef_connectionInterruptedError;
+ (id)ef_notSupportedError;
+ (id)ef_timeoutError;
+ (id)ef_cancelledError;
+ (void)ef_setDecoder:(id /* block */)arg1 forDomain:(id)arg2;
+ (id)ef_SQLiteErrorWithCode:(int)arg1;
- (id /* block */)ef_match;
@property(readonly, nonatomic) _Bool ef_isTemporarilyUnavailableError;
@property(readonly, nonatomic) _Bool ef_isConnectionInterruptedError;
@property(readonly, nonatomic) _Bool ef_isNotSupportedError;
@property(readonly, nonatomic) _Bool ef_isTimeoutError;
@property(readonly, nonatomic) _Bool ef_isCancelledError;
@property(readonly, copy, nonatomic) NSString *ef_publicDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

